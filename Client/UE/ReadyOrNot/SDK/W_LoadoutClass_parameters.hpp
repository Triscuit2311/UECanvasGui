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

// 0x50 (0x50 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.UpdateItemNameText
struct UW_LoadoutClass_C_UpdateItemNameText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_823[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)(None)
};

// 0x80 (0x80 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.GetCurrentMenuDirectory
struct UW_LoadoutClass_C_GetCurrentMenuDirectory_Params
{
public:
	class FText                                  Return_Value;                                      // 0x0(0x18)(Parm, OutParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)(None)
};

// 0xA (0xA - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.EnterPresetsMenu
struct UW_LoadoutClass_C_EnterPresetsMenu_Params
{
public:
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.UnselectUIElement
struct UW_LoadoutClass_C_UnselectUIElement_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.SelectUIElement
struct UW_LoadoutClass_C_SelectUIElement_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.UnhoverUIElement
struct UW_LoadoutClass_C_UnhoverUIElement_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.HoverUIElement
struct UW_LoadoutClass_C_HoverUIElement_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E1 (0x1E1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnKeyUp
struct UW_LoadoutClass_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x128(0xB8)(None)
	bool                                         CallFunc_HandleMenuWideMultiInput__Up__Return_Value; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.CanExit
struct UW_LoadoutClass_C_CanExit_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EnteringQuartermasterMenu_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x43 (0x43 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.GetAllUncollapsedLoadoutItemWidgets
struct UW_LoadoutClass_C_GetAllUncollapsedLoadoutItemWidgets_Params
{
public:
	TArray<class UW_LoadoutItem_C*>              Return_Value;                                      // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UW_LoadoutItem_C*>              UncollapsedWidgets;                                // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_873[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.Get_SelectedItemInfo_Container_Visibility
struct UW_LoadoutClass_C_Get_SelectedItemInfo_Container_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.GetAllTacticalDeviceClassesExpectGrenades
struct UW_LoadoutClass_C_GetAllTacticalDeviceClassesExpectGrenades_Params
{
public:
	TArray<class UClass*>                        Return_Value;                                      // 0x0(0x10)(Parm, OutParm)
	TArray<class UClass*>                        TacticalDevices;                                   // 0x10(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_894[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_896[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x30(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_898[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.GetAllGrenadeClasses
struct UW_LoadoutClass_C_GetAllGrenadeClasses_Params
{
public:
	TArray<class UClass*>                        Return_Value;                                      // 0x0(0x10)(Parm, OutParm)
	TArray<class UClass*>                        Grenades;                                          // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Grenade;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E0 (0x2E0 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnMouseMove
struct UW_LoadoutClass_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FVector2D                             CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsZero2D_ReturnValue;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x228(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.UnhoverLoadoutItem
struct UW_LoadoutClass_C_UnhoverLoadoutItem_Params
{
public:
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.HoverLoadoutItem
struct UW_LoadoutClass_C_HoverLoadoutItem_Params
{
public:
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.UnselectLoadoutItem
struct UW_LoadoutClass_C_UnselectLoadoutItem_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanExit_Return_Value;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.SelectLoadoutItem
struct UW_LoadoutClass_C_SelectLoadoutItem_Params
{
public:
	TArray<class UW_LoadoutItem_C*>              CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value; // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.PreviousColumn
struct UW_LoadoutClass_C_PreviousColumn_Params
{
public:
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.NextColumn
struct UW_LoadoutClass_C_NextColumn_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_908[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_LoadoutItem_C*>              CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value; // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_90C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.PreviousRow
struct UW_LoadoutClass_C_PreviousRow_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_920[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_921[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_LoadoutItem_C*>              CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value; // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.NextRow
struct UW_LoadoutClass_C_NextRow_Params
{
public:
	TArray<class UW_LoadoutItem_C*>              CallFunc_GetAllUncollapsedLoadoutItemWidgets_Return_Value; // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6A0 (0x6A0 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnKeyDown
struct UW_LoadoutClass_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleMenuWideMultiInput__Down__Return_Value; // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_966[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_1;                     // 0x148(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x166(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_968[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_2;                     // 0x168(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_8;          // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_9;          // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_3;                     // 0x188(0x18)(HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue_4;                     // 0x1A0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_10;         // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_11;         // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_12;         // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_13;         // 0x1BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x1BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_5;                     // 0x1C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue_6;                     // 0x1D8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_14;         // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_15;         // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_16;         // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_17;         // 0x1F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_18;         // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_19;         // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x1F7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_972[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_7;                     // 0x200(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_20;         // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_21;         // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_22;         // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_23;         // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_974[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_8;                     // 0x220(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_24;         // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_14;                 // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_25;         // 0x23B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_15;                 // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_26;         // 0x23D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_27;         // 0x23E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_16;                 // 0x23F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_17;                 // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_18;                 // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleMenuWideInput_Return_Value;         // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_97B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x248(0xB8)(None)
	bool                                         CallFunc_IsUIHidden_Return_Value;                  // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_97C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x308(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_2;                    // 0x3C0(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_3;                    // 0x478(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_4;                    // 0x530(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_5;                    // 0x5E8(0xB8)(None)
};

// 0x6D (0x6D - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.SelectActiveLoadout
struct UW_LoadoutClass_C_SelectActiveLoadout_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9B6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9B8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value; // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CallFunc_GetAllGrenadeClasses_Return_Value;        // 0x40(0x10)(ReferenceParm)
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item_2;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_2;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_3;      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_4;      // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_5;      // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_6;      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemClicked
struct UW_LoadoutClass_C_OnLoadoutItemClicked_Params
{
public:
	class UW_LoadoutItem_C*                      LoadoutItemWidget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.CreateLoadoutItemWidget
struct UW_LoadoutClass_C_CreateLoadoutItemWidget_Params
{
public:
	class FText                                  LoadoutItemName;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EItemClass                        ItemClass;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObjectClass;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTactical;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot;                                      // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMultipleTacticalSlots;                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTacticalSlots;                                  // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartingTacticalSlot;                              // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_C*                      CallFunc_Create_ReturnValue;                       // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2741 (0x2741 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.InitializeLoadoutItems
struct UW_LoadoutClass_C_InitializeLoadoutItems_Params
{
public:
	TArray<struct FWeaponData>                   WeaponArray;                                       // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorld*                                CallFunc_GetWorldBP_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                             CallFunc_GetItemData_ReturnValue;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponData                           CallFunc_Array_Get_Item;                           // 0x78(0xB8)(None)
	struct FDeviceData                           CallFunc_Array_Get_Item_1;                         // 0x130(0x140)(None)
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x270(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A22[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x820(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xDC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xDC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xDC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A25[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xDC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xDCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A27[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeviceData                           CallFunc_Array_Get_Item_2;                         // 0xDD0(0x140)(None)
	struct FArmourData                           CallFunc_Array_Get_Item_3;                         // 0xF10(0x58)(None)
	uint8                                        Pad_A29[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_2;         // 0xF70(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x1510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2B[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x1520(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x1AC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1AC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1AC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1ACC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1ACD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArmourData                           CallFunc_Array_Get_Item_4;                         // 0x1AD0(0x58)(None)
	struct FWeaponData                           CallFunc_Array_Get_Item_5;                         // 0x1B28(0xB8)(None)
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x1BE0(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x2180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2F[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_5;         // 0x2190(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0x2730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x2731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A31[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x2734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x2738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A32[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x273C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x2740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.DeselectAllExcept
struct UW_LoadoutClass_C_DeselectAllExcept_Params
{
public:
	class UW_LoadoutItem_C*                      InLoadoutItemWidget;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.RemoveAllChildren
struct UW_LoadoutClass_C_RemoveAllChildren_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.ExpandChildren
struct UW_LoadoutClass_C_ExpandChildren_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.CollapseChildren
struct UW_LoadoutClass_C_CollapseChildren_Params
{
public:
	bool                                         bResetPreviewAnim;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A70[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A75[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.PreConstruct
struct UW_LoadoutClass_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_LoadoutClass_C_BndEvt__W_StandardButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonHovered
struct UW_LoadoutClass_C_OnLoadoutItemButtonHovered_Params
{
public:
	class UW_LoadoutItem_C*                      LoadoutItem;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnLoadoutItemButtonUnhovered
struct UW_LoadoutClass_C_OnLoadoutItemButtonUnhovered_Params
{
public:
	class UW_LoadoutItem_C*                      LoadoutItem;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17BA (0x17BA - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.ExecuteUbergraph_W_LoadoutClass
struct UW_LoadoutClass_C_ExecuteUbergraph_W_LoadoutClass_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ABD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ABF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CallFunc_GetAllGrenadeClasses_Return_Value;        // 0x20(0x10)(ReferenceParm)
	TArray<class UClass*>                        CallFunc_GetAllTacticalDeviceClassesExpectGrenades_Return_Value; // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC6[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ACB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x610(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ACD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xBB4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_AD0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item_2;                         // 0xBC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      K2Node_CustomEvent_LoadoutItem_1;                  // 0xBD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xBE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item_3;                         // 0xBE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xBF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xBF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AD6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xBF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutItem_C*                      K2Node_CustomEvent_LoadoutItem;                    // 0xBF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC00(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xC10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_C*                      CallFunc_Array_Get_Item_4;                         // 0xC18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xC20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0xC30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ADB[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_2;         // 0xC50(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADD[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x1200(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x17A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x17A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x17A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x17A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x17AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x17B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x17B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x17B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x17B7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x17B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x17B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnButtonHovered__DelegateSignature
struct UW_LoadoutClass_C_OnButtonHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutClass_C*                     LoadoutClass;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnChildButtonClicked__DelegateSignature
struct UW_LoadoutClass_C_OnChildButtonClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutItem_C*                      LoadoutItemWidget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutClass.W_LoadoutClass_C.OnButtonClicked__DelegateSignature
struct UW_LoadoutClass_C_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutClass_C*                     LoadoutClassWidget;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


