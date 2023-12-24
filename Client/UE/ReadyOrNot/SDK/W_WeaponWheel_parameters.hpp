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

// 0x2 (0x2 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromAllCategories
struct UW_WeaponWheel_C_RemoveNullItemsFromAllCategories_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveNullItemsFromAllCategories_ReturnValue; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveNullItemsFromCategory
struct UW_WeaponWheel_C_RemoveNullItemsFromCategory_Params
{
public:
	class FName                                  WeaponWheelCategoryName;                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtBack
struct UW_WeaponWheel_C_IsItemAtBack_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemAtIndex_Return_Value;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtFront
struct UW_WeaponWheel_C_IsItemAtFront_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsItemAtIndex_Return_Value;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.IsItemAtIndex
struct UW_WeaponWheel_C_IsItemAtIndex_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_DynamicCast_AsBase_Item;                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F0 (0x1F0 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateDebugInformation
struct UW_WeaponWheel_C_UpdateDebugInformation_Params
{
public:
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x0(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget;   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x20(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_1; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_2;           // 0x40(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_2; // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_3;           // 0x60(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_3; // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_4;           // 0x80(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_4; // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_5;           // 0xA0(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_5; // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4500[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xC8(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_6; // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCorrectAngle_ReturnValue;              // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4501[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_6;           // 0xF0(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_7; // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRenderTransformAngle_ReturnValue;      // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4502[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_7;           // 0x118(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_8; // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_9; // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x150(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x168(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_10; // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4503[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x190(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_11; // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_3;             // 0x1B0(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_12; // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_4;             // 0x1D0(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_13; // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveExecutableItemFromCategory
struct UW_WeaponWheel_C_RemoveExecutableItemFromCategory_Params
{
public:
	class UClass*                                NewWeaponWheelScript;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtIndex;                                           // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB1 (0xB1 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddExecutableItemToCategory
struct UW_WeaponWheel_C_AddExecutableItemToCategory_Params
{
public:
	class UClass*                                NewWeaponWheelScript;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtIndex;                                           // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4506[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4507[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4509[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    CallFunc_SpawnObject_ReturnValue;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ShuffleItemsInCategory
struct UW_WeaponWheel_C_ShuffleItemsInCategory_Params
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentICategorytemCount
struct UW_WeaponWheel_C_GetCurrentICategorytemCount_Params
{
public:
	int32                                        Return_Value;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.GetCurrentItemSelectionIndex
struct UW_WeaponWheel_C_GetCurrentItemSelectionIndex_Params
{
public:
	int32                                        Return_Value;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory (Index)
struct UW_WeaponWheel_C_MoveItemToAnotherCategory__Index__Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FromCategory;                                      // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ToCategory;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndexInCategory;                                // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             SavedItem;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item_1;                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_450F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xF2 (0xF2 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToAnotherCategory
struct UW_WeaponWheel_C_MoveItemToAnotherCategory_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ToCategory;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndexInCategory;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4511[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4512[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value_1;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot (Index)
struct UW_WeaponWheel_C_MoveItemToNewSpot__Index__Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CategoryName;                                      // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndex;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4513[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToNewSpot
struct UW_WeaponWheel_C_MoveItemToNewSpot_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndex;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4514[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack
struct UW_WeaponWheel_C_MoveItemToBack_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront
struct UW_WeaponWheel_C_MoveItemToFront_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToBack (Index)
struct UW_WeaponWheel_C_MoveItemToBack__Index__Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CategoryName;                                      // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4517[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4519[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.MoveItemToFront (Index)
struct UW_WeaponWheel_C_MoveItemToFront__Index__Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CategoryName;                                      // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_451D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveAssistant
struct UW_WeaponWheel_C_RemoveAssistant_Params
{
public:
	class ABaseItem*                             AssistantItem;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveTabletDevice
struct UW_WeaponWheel_C_RemoveTabletDevice_Params
{
public:
	class ABaseItem*                             TabletDeviceItem;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveTactical Devices
struct UW_WeaponWheel_C_RemoveTactical_Devices_Params
{
public:
	class ABaseItem*                             DoorDeviceItem;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveGrenade
struct UW_WeaponWheel_C_RemoveGrenade_Params
{
public:
	class ABaseItem*                             GrenadeItem;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveSecondaryWeapon
struct UW_WeaponWheel_C_RemoveSecondaryWeapon_Params
{
public:
	class ABaseItem*                             SecondaryWeaponItem;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemovePrimaryWeapon
struct UW_WeaponWheel_C_RemovePrimaryWeapon_Params
{
public:
	class ABaseItem*                             PrimaryWeaponItem;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RemoveItemFromCategory
struct UW_WeaponWheel_C_RemoveItemFromCategory_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Wheel_Category;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddItemToCategory
struct UW_WeaponWheel_C_AddItemToCategory_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Wheel_Category;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddTabletDevice
struct UW_WeaponWheel_C_AddTabletDevice_Params
{
public:
	class ABaseItem*                             TabletDevice_Item;                                 // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddTactical Device
struct UW_WeaponWheel_C_AddTactical_Device_Params
{
public:
	class ABaseItem*                             Tactical_Device_Item;                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddAssistants
struct UW_WeaponWheel_C_AddAssistants_Params
{
public:
	class ABaseItem*                             Assistants;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddGrenade
struct UW_WeaponWheel_C_AddGrenade_Params
{
public:
	class ABaseItem*                             GrenadeItem;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddSecondaryWeapon
struct UW_WeaponWheel_C_AddSecondaryWeapon_Params
{
public:
	class ABaseItem*                             SecondayWeaponItem;                                // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.AddPrimaryWeapon
struct UW_WeaponWheel_C_AddPrimaryWeapon_Params
{
public:
	class ABaseItem*                             PrimaryWeaponItem;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RefreshMultiItemWidget
struct UW_WeaponWheel_C_RefreshMultiItemWidget_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.IsWheelCursorVisible
struct UW_WeaponWheel_C_IsWheelCursorVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.OnRadialMenuInitialized
struct UW_WeaponWheel_C_OnRadialMenuInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnRadialMenuInitialized_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.OnRadialSectorCreated
struct UW_WeaponWheel_C_OnRadialSectorCreated_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAngle;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnRadialSectorCreated_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4521[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_CreateWheelCategory_Canvas_Panel_Slot;    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetPosition_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_CalculatePositionOnCircleFromWidget_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ExecuteRadial
struct UW_WeaponWheel_C_ExecuteRadial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ExecuteRadial_ReturnValue;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ShowWheel
struct UW_WeaponWheel_C_ShowWheel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.HideWheel
struct UW_WeaponWheel_C_HideWheel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllStatsOnWheelCreated
struct UW_WeaponWheel_C_NotifyAllStatsOnWheelCreated_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_ItemStat_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.NotifyAllCategoriesOnWheelCreated
struct UW_WeaponWheel_C_NotifyAllCategoriesOnWheelCreated_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x602 (0x602 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.FindDataTableRowNameFromItemName
struct UW_WeaponWheel_C_FindDataTableRowNameFromItemName_Params
{
public:
	class FName                                  ItemName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x10(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4522[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4523[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.StatEnumToName
struct UW_WeaponWheel_C_StatEnumToName_Params
{
public:
	uint8                                        Item_Stat;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4524[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Stat_Name;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60E (0x60E - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RefreshStats
struct UW_WeaponWheel_C_RefreshStats_Params
{
public:
	TArray<class UClass*>                        ItemStats;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FItemLookupTable                      ItemDataTable;                                     // 0x10(0x5A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4525[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4526[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsW_Weapon_Wheel_Item_Stat; // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x5ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4529[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_ItemStat_C*             CallFunc_CreateWheelStat_ItemStatWidget;           // 0x5F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_ItemStat_C*             CallFunc_Array_Get_Item_1;                         // 0x5F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x604(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x605(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x606(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_452A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x60D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.RefreshCategory
struct UW_WeaponWheel_C_RefreshCategory_Params
{
public:
	TArray<class ABaseItem*>                     New_Category_Items;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UWeaponWheelScript*>            NewWeaponWheelScripts;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Category_Name;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartingItemIndex;                                 // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item_2;                         // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateTabletDevices
struct UW_WeaponWheel_C_UpdateTabletDevices_Params
{
public:
	TArray<class ABaseItem*>                     NewTabletDevices;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateTacticalDevices
struct UW_WeaponWheel_C_UpdateTacticalDevices_Params
{
public:
	TArray<class ABaseItem*>                     NewDoorDevices;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateAssistants
struct UW_WeaponWheel_C_UpdateAssistants_Params
{
public:
	TArray<class ABaseItem*>                     NewAssistants;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateGrenades
struct UW_WeaponWheel_C_UpdateGrenades_Params
{
public:
	TArray<class ABaseItem*>                     NewGrenades;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4530[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdateSecondaryWeapons
struct UW_WeaponWheel_C_UpdateSecondaryWeapons_Params
{
public:
	TArray<class ABaseItem*>                     NewSecondaryWeapons;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4531[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.UpdatePrimaryWeapons
struct UW_WeaponWheel_C_UpdatePrimaryWeapons_Params
{
public:
	TArray<class ABaseItem*>                     New_Primary_Weapons;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        StartingItemIndex;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4532[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.PreviousItem
struct UW_WeaponWheel_C_PreviousItem_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PreviousItem_bSuccess;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4533[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Previous_bSuccess;                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.NextItem
struct UW_WeaponWheel_C_NextItem_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NextItem_bSuccess;                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4534[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Next_bSuccess;                            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.PopulateAllCategories
struct UW_WeaponWheel_C_PopulateAllCategories_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4536[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.PopulateCategory
struct UW_WeaponWheel_C_PopulateCategory_Params
{
public:
	TArray<class ABaseItem*>                     Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Category_Name_;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Map_Find_Value;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.PlaceWidgetInWheel
struct UW_WeaponWheel_C_PlaceWidgetInWheel_Params
{
public:
	class UCanvasPanelSlot*                      Canvas_Slot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Positionn;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x625 (0x625 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.SelectItem
struct UW_WeaponWheel_C_SelectItem_Params
{
public:
	class UW_WeaponWheel_RadialSelection_C*      ItemToSelect;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Animation;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Play_Sound;                                        // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Refresh_Stats;                                     // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSuccess;                                          // 0xB(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_453A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemName_Item_Name;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemName_Item_Name_1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_FindDataTableRowNameFromItemName_RowName; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x30(0x18)(None)
	uint8                                        Pad_453B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_453C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetCategory_Category;                     // 0x5F8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_453D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetCorrectSelectionColor_ReturnValue;     // 0x614(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInExecutablesArray_Return_Value;        // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5E8 (0x5E8 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelStat
struct UW_WeaponWheel_C_CreateWheelStat_Params
{
public:
	class UClass*                                ItemStatClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FillSpeed;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                       EasingFunction;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_453E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      LookupTable;                                       // 0x10(0x5A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_WeaponWheel_ItemStat_C*             ItemStatWidget;                                    // 0x5B0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_ItemStat_C*             CallFunc_Create_ReturnValue;                       // 0x5D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_453F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x5E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.CreateWheelCategory
struct UW_WeaponWheel_C_CreateWheelCategory_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_Name;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4540[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      Canvas_Panel_Slot;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              CallFunc_GetAnchors_ReturnValue;                   // 0x60(0x10)(NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.Tick
struct UW_WeaponWheel_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.OnItemSelcted
struct UW_WeaponWheel_C_OnItemSelcted_Params
{
public:
	bool                                         Play_Animation;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.OnSectorSelected
struct UW_WeaponWheel_C_OnSectorSelected_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.OnSectorDeselected
struct UW_WeaponWheel_C_OnSectorDeselected_Params
{
public:
	int32                                        DeselectedIndex;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.PreConstruct
struct UW_WeaponWheel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ExecuteUbergraph_W_WeaponWheel
struct UW_WeaponWheel_C_ExecuteUbergraph_W_WeaponWheel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4542[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Play_Animation;                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectItem_bSuccess;                      // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectItem_bSuccess_1;                    // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4543[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetItemName_Item_Name;                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemName_Item_Name_1;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_2;                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_3;                         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_4;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_5;                         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABaseItem*>                     K2Node_MakeArray_Array;                            // 0x98(0x10)(ReferenceParm)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_SelectedIndex;                        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4544[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item_6;                         // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_DeselectedIndex;                      // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4545[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_WeaponWheel_RadialSelection_C*      CallFunc_Array_Get_Item_7;                         // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetCenterScreenPosition_ReturnValue;      // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERONBuildConfiguration            CallFunc_GetBuildConfiguration_ReturnValue;        // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4546[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x100(0x58)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0x158(0x58)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ItemDeselected__DelegateSignature
struct UW_WeaponWheel_C_ItemDeselected__DelegateSignature_Params
{
public:
	int32                                        Category_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_Name;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Index;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Item_Name;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.ItemSelected__DelegateSignature
struct UW_WeaponWheel_C_ItemSelected__DelegateSignature_Params
{
public:
	int32                                        Category_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_Name;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Index;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Item_Name;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.CategorySelected__DelegateSignature
struct UW_WeaponWheel_C_CategorySelected__DelegateSignature_Params
{
public:
	int32                                        Category_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_Name;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_WeaponWheel.W_WeaponWheel_C.CategoryDeselected__DelegateSignature
struct UW_WeaponWheel_C_CategoryDeselected__DelegateSignature_Params
{
public:
	int32                                        Category_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_Name;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


