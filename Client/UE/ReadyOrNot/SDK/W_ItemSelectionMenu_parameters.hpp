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

// 0x29 (0x29 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ResetAnimationFadeOutState
struct UW_ItemSelectionMenu_C_ResetAnimationFadeOutState_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_FindItemFromColumnIndex_Return_Value;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2189[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindItemFromColumnIndex
struct UW_ItemSelectionMenu_C_FindItemFromColumnIndex_Params
{
public:
	class UW_ItemSelection_ItemList_C*           Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FadeOutSelectedColumn
struct UW_ItemSelectionMenu_C_FadeOutSelectedColumn_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UW_ItemSelection_ItemList_C*           CallFunc_FindItemFromColumnIndex_Return_Value;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanQueueSelection
struct UW_ItemSelectionMenu_C_CanQueueSelection_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_218F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnimationBlocking_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2190[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2192[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.FindColumnIndexFromItem
struct UW_ItemSelectionMenu_C_FindColumnIndexFromItem_Params
{
public:
	class ABaseItem*                             InItem;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Return_Value;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2196[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2197[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemSelectionGroup                   CallFunc_Array_Get_Item;                           // 0x30(0x48)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemCategory                     CallFunc_Array_Get_Item_1;                         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2198[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainsItemCategory_ReturnValue;         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.IsOpen
struct UW_ItemSelectionMenu_C_IsOpen_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.RemoveItemFromMenu
struct UW_ItemSelectionMenu_C_RemoveItemFromMenu_Params
{
public:
	class ABaseItem*                             ItemToRemove;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        List_Index;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value;        // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.UpdateDebugInfo
struct UW_ItemSelectionMenu_C_UpdateDebugInfo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TriggerKeysString;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERONBuildConfiguration            CallFunc_GetBuildConfiguration_ReturnValue;        // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21B4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0x48(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget;   // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(None)
	class FString                                K2Node_Select_Default;                             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0xA0(0x18)(HasGetValueTypeHash)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_1; // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue_1;         // 0xC0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value;        // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_2; // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetSelectedItem_Return_Value;             // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x140(0x18)(None)
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value_1;      // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_3; // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x180(0x18)(None)
	class UW_DebugInfo_C*                        CallFunc_Get_Debug_Item__Index__DebugInfoWidget_4; // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CanNavigate
struct UW_ItemSelectionMenu_C_CanNavigate_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.SetMouseWheelDelta
struct UW_ItemSelectionMenu_C_SetMouseWheelDelta_Params
{
public:
	float                                        NewMouseWheelDelta;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB2 (0xB2 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteSelection
struct UW_ItemSelectionMenu_C_ExecuteSelection_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanQueueSelection_Return_Value;           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21D8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOpen_Return_Value;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character_1;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindColumnIndexFromItem_Return_Value;     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Montage_GetPosition_ReturnValue;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x90(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanNavigate_Return_Value;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value;        // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_GetListAtColumnIndex_Return_Value_1;      // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.CloseMenu
struct UW_ItemSelectionMenu_C_CloseMenu_Params
{
public:
	int32                                        QueuedIndex;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOpen_Return_Value;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_220E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_220F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2212[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindColumnIndexFromItem_Return_Value;     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          CallFunc_Map_Keys_Keys;                            // 0x48(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2216[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2219[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OpenMenu
struct UW_ItemSelectionMenu_C_OpenMenu_Params
{
public:
	struct FKey                                  TriggerKey;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          CallFunc_Map_Keys_Keys;                            // 0x28(0x10)(ReferenceParm)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERONBuildConfiguration            CallFunc_GetBuildConfiguration_ReturnValue;        // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2231[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0x68(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2233[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.OnWeaponMagCheck_Event_0
struct UW_ItemSelectionMenu_C_OnWeaponMagCheck_Event_0_Params
{
public:
	class ABaseMagazineWeapon*                   MagazineWeapon;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Tick
struct UW_ItemSelectionMenu_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.PreConstruct
struct UW_ItemSelectionMenu_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.Initialize
struct UW_ItemSelectionMenu_C_Initialize_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemSelectionGroup>           InItemSelectionGroups;                             // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1E8 (0x1E8 - 0x0)
// Function W_ItemSelectionMenu.W_ItemSelectionMenu_C.ExecuteUbergraph_W_ItemSelectionMenu
struct UW_ItemSelectionMenu_C_ExecuteUbergraph_W_ItemSelectionMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2252[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2255[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   K2Node_CustomEvent_MagazineWeapon;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x48(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2258[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemSelectionGroup                   CallFunc_Array_Get_Item;                           // 0x88(0x48)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2259[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0xD8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bForce;                         // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemSelectionGroup>           K2Node_CustomEvent_InItemSelectionGroups;          // 0x100(0x10)(ConstParm, ReferenceParm)
	enum class ERONBuildConfiguration            CallFunc_GetBuildConfiguration_ReturnValue;        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanNavigate_Return_Value;                 // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character_1;           // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_225F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindColumnIndexFromItem_Return_Value;     // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInsideList_Return_Value;                // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2261[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_ConvertIntToFKey_ReturnValue;             // 0x160(0x18)(HasGetValueTypeHash)
	struct FItemSelectionGroup                   CallFunc_Array_Get_Item_1;                         // 0x178(0x48)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2264[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue_1;  // 0x1C8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2265[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


