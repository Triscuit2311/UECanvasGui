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
// Function W_CustomizationTest.W_CustomizationTest_C.NewItem
struct UW_CustomizationTest_C_NewItem_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             Inold;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             Out;                                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseMove
struct UW_CustomizationTest_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
};

// 0x2D0 (0x2D0 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseButtonUp
struct UW_CustomizationTest_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x218(0xB8)(None)
};

// 0x218 (0x218 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.OnMouseButtonDown_0
struct UW_CustomizationTest_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.OnFocusLost
struct UW_CustomizationTest_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.EquippedItemClicked
struct UW_CustomizationTest_C_EquippedItemClicked_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.ListItemClicked
struct UW_CustomizationTest_C_ListItemClicked_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature
struct UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_2_MLPrimarySet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature
struct UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_3_MLSecondarySet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature
struct UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_4_MLArmorSet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature
struct UW_CustomizationTest_C_BndEvt__W_CustomizationTest_W_MiniLoadout_K2Node_ComponentBoundEvent_5_MLHelmetSet__DelegateSignature_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x185 (0x185 - 0x0)
// Function W_CustomizationTest.W_CustomizationTest_C.ExecuteUbergraph_W_CustomizationTest
struct UW_CustomizationTest_C_ExecuteUbergraph_W_CustomizationTest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4425[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_NeoLoadout_Slot_C*                  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4426[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_NeoLoadout_Slot_C*                  CallFunc_Create_ReturnValue_1;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4427[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4428[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x7C(0x8)(NoDestructor)
	enum class ECustomizationType                CallFunc_Array_Get_Item_1;                         // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4429[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x9C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ULoadoutCustomization*                 CallFunc_GetEquippedCustomizationItem_ReturnValue; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_442C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutItem*                          K2Node_CustomEvent_Item_1;                         // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_CustomEvent_Slot_1;                         // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutItem*                          K2Node_CustomEvent_Item;                           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  K2Node_CustomEvent_Slot;                           // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutCustomization*                 K2Node_DynamicCast_AsLoadout_Customization;        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_442D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutCustomization*                 CallFunc_GetEquippedCustomizationItem_ReturnValue_1; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutCustomization*>         CallFunc_GetCustomizationItems_ReturnValue;        // 0x120(0x10)(ReferenceParm)
	class ULoadoutCustomization*                 CallFunc_Array_Get_Item_2;                         // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_442E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ComponentBoundEvent_Class_3;                // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ComponentBoundEvent_Class_2;                // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ComponentBoundEvent_Class_1;                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ComponentBoundEvent_Class;                  // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_newitem_out;                              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_newitem_out_1;                            // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_newitem_out_2;                            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_newitem_out_3;                            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


