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

// 0x22 (0x22 - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ConfirmSelection
struct UW_ItemSelectionMenu_V2_C_ConfirmSelection_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ItemSelection_ItemList_V2_C*        CallFunc_Get_List_At_Index_Return_Value;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.SelectCategory
struct UW_ItemSelectionMenu_V2_C_SelectCategory_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Update Menu
struct UW_ItemSelectionMenu_V2_C_Update_Menu_Params
{
public:
	TArray<struct FItemSelectionGroup>           InItemGroups;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1B (0x1B - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.OpenMenu
struct UW_ItemSelectionMenu_V2_C_OpenMenu_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.Initialize
struct UW_ItemSelectionMenu_V2_C_Initialize_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemSelectionGroup>           InItemSelectionGroups;                             // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelectionMenu_V2.W_ItemSelectionMenu_V2_C.ExecuteUbergraph_W_ItemSelectionMenu_V2
struct UW_ItemSelectionMenu_V2_C_ExecuteUbergraph_W_ItemSelectionMenu_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bForce;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemSelectionGroup>           K2Node_CustomEvent_InItemSelectionGroups;          // 0x8(0x10)(ConstParm, ReferenceParm)
};

}
}


