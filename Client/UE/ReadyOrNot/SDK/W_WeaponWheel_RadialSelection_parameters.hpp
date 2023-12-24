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

// 0xB8 (0xB8 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.CreateIcon
struct UW_WeaponWheel_RadialSelection_C_CreateIcon_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UImage*                                ReturnValue;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_449A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CallFunc_SpawnObject_ReturnValue;                  // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Add_Vector2DFloat_ReturnValue;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveNullItems (Internal)
struct UW_WeaponWheel_RadialSelection_C_RemoveNullItems__Internal__Params
{
public:
	TArray<class UObject*>                       ItemArray;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                Indicies_FoundNullItems;                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_449B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_449C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_449D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsInExecutablesArray
struct UW_WeaponWheel_RadialSelection_C_IsInExecutablesArray_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveExecutableItemFromCategory
struct UW_WeaponWheel_RadialSelection_C_RemoveExecutableItemFromCategory_Params
{
public:
	class UWeaponWheelScript*                    WeaponWheelScript;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddExecutableItemToCategory
struct UW_WeaponWheel_RadialSelection_C_AddExecutableItemToCategory_Params
{
public:
	class UWeaponWheelScript*                    WeaponWheelScript;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtIndex;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ShiftItemToNewSpot
struct UW_WeaponWheel_RadialSelection_C_ShiftItemToNewSpot_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndex;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToBack
struct UW_WeaponWheel_RadialSelection_C_MoveToBack_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.MoveToFront
struct UW_WeaponWheel_RadialSelection_C_MoveToFront_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x300 (0x300 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.UpdateIcon
struct UW_WeaponWheel_RadialSelection_C_UpdateIcon_Params
{
public:
	int32                                        SelectionIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           InBrush;                                           // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x98(0x88)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x130(0x88)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_DynamicCast_AsBase_Item;                    // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    K2Node_DynamicCast_AsWeapon_Wheel_Script;          // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x1F0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x278(0x88)(None)
};

// 0x19 (0x19 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Select
struct UW_WeaponWheel_RadialSelection_C_Select_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                   K2Node_DynamicCast_AsBase_Magazine_Weapon;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteRadial
struct UW_WeaponWheel_RadialSelection_C_ExecuteRadial_Params
{
public:
	enum class EGrenadeThrowSettingType          CallFunc_LoadGrenadeSettings_GrenadeThrowType;     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadGrenadeSettings_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_DynamicCast_AsBase_Item;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PutItemInHands_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    K2Node_DynamicCast_AsWeapon_Wheel_Script;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanEquip_ReturnValue;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseGrenade*                          K2Node_DynamicCast_AsBase_Grenade;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnDeselected
struct UW_WeaponWheel_RadialSelection_C_OnDeselected_Params
{
public:
	bool                                         Play_Animation;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.OnSelected
struct UW_WeaponWheel_RadialSelection_C_OnSelected_Params
{
public:
	bool                                         Play_Animation;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Previous
struct UW_WeaponWheel_RadialSelection_C_Previous_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSucceeded;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Previous_bSuccess;                        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.Next
struct UW_WeaponWheel_RadialSelection_C_Next_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSucceeded;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Next_bSuccess;                            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.RemoveItemFromCategory
struct UW_WeaponWheel_RadialSelection_C_RemoveItemFromCategory_Params
{
public:
	class ABaseItem*                             Item;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.AddItemToCategory
struct UW_WeaponWheel_RadialSelection_C_AddItemToCategory_Params
{
public:
	class ABaseItem*                             NewItem;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AtIndex;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x28(0x88)(None)
	class UImage*                                CallFunc_CreateIcon_ReturnValue;                   // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_2;             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue_1;        // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.IsEquipping
struct UW_WeaponWheel_RadialSelection_C_IsEquipping_Params
{
public:
	bool                                         IsEquipping;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBlockingAnimationExclusion> K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBlockingAnimationPlaying_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetItemName
struct UW_WeaponWheel_RadialSelection_C_GetItemName_Params
{
public:
	class FName                                  Item_Name;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FinalString;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             K2Node_DynamicCast_AsBase_Item;                    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponWheelScript*                    K2Node_DynamicCast_AsWeapon_Wheel_Script;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44EF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x98(0x10)(ReferenceParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.GetCategory
struct UW_WeaponWheel_RadialSelection_C_GetCategory_Params
{
public:
	class FText                                  Category;                                          // 0x0(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.PreConstruct
struct UW_WeaponWheel_RadialSelection_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function W_WeaponWheel_RadialSelection.W_WeaponWheel_RadialSelection_C.ExecuteUbergraph_W_WeaponWheel_RadialSelection
struct UW_WeaponWheel_RadialSelection_C_ExecuteUbergraph_W_WeaponWheel_RadialSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   K2Node_DynamicCast_AsBase_Magazine_Weapon;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseMagazineWeapon*                   K2Node_DynamicCast_AsBase_Magazine_Weapon_1;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


