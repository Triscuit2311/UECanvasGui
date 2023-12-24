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

// 0x75 (0x75 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UpdateKeybinds
struct UW_ItemSelection_ItemGroupList_C_UpdateKeybinds_Params
{
public:
	TArray<struct FItemSelectionGroup>           InItemGroups;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemSelectionGroup                   CallFunc_Array_Get_Item;                           // 0x20(0x48)(None)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.IsInsideList
struct UW_ItemSelection_ItemGroupList_C_IsInsideList_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInsideList_Return_Value;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SplitItemList
struct UW_ItemSelection_ItemGroupList_C_SplitItemList_Params
{
public:
	bool                                         bSplit;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Event_FocusAll
struct UW_ItemSelection_ItemGroupList_C_Event_FocusAll_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutOverview
struct UW_ItemSelection_ItemGroupList_C_FadeOutOverview_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInOverview
struct UW_ItemSelection_ItemGroupList_C_FadeInOverview_Params
{
public:
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.UnfocusAll
struct UW_ItemSelection_ItemGroupList_C_UnfocusAll_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeOutAllItemLists
struct UW_ItemSelection_ItemGroupList_C_FadeOutAllItemLists_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FadeInAllItemLists
struct UW_ItemSelection_ItemGroupList_C_FadeInAllItemLists_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnInputReleased
struct UW_ItemSelection_ItemGroupList_C_OnInputReleased_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.FocusAll
struct UW_ItemSelection_ItemGroupList_C_FocusAll_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.GetListAtColumnIndex
struct UW_ItemSelection_ItemGroupList_C_GetListAtColumnIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           Return_Value;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Initialize
struct UW_ItemSelection_ItemGroupList_C_Initialize_Params
{
public:
	TArray<struct FItemSelectionGroup>           InItemGroupArray;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Previous
struct UW_ItemSelection_ItemGroupList_C_Previous_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.Next
struct UW_ItemSelection_ItemGroupList_C_Next_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.CreateNewItemList
struct UW_ItemSelection_ItemGroupList_C_CreateNewItemList_Params
{
public:
	TArray<class ABaseItem*>                     Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           Return_Value;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemSelectionGroup                   CallFunc_Array_Get_Item;                           // 0x20(0x48)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x90(0x8)(NoDestructor)
	class UW_ItemSelection_ItemList_C*           CallFunc_Create_ReturnValue;                       // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.SelectColumn
struct UW_ItemSelection_ItemGroupList_C_SelectColumn_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ItemSelection_ItemList_C*           CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.OnNightVisionGogglesToggled_Event_0
struct UW_ItemSelection_ItemGroupList_C_OnNightVisionGogglesToggled_Event_0_Params
{
public:
	bool                                         bNVGOn;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_ItemSelection_ItemGroupList.W_ItemSelection_ItemGroupList_C.ExecuteUbergraph_W_ItemSelection_ItemGroupList
struct UW_ItemSelection_ItemGroupList_C_ExecuteUbergraph_W_ItemSelection_ItemGroupList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bNVGOn;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character_1;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


