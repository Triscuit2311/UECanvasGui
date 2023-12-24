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

// 0x51 (0x51 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategories
struct UW_QuartermasterMenu_C_UnhoverAllCategories_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1496[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1497[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1499[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_DynamicCast_AsW_Skin_Category;              // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_149A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_DynamicCast_AsW_Attachment_Category;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAllCategoriesExcept
struct UW_QuartermasterMenu_C_UnhoverAllCategoriesExcept_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategoryWIdget;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     SkinCategoryWidget;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_DynamicCast_AsW_Skin_Category;              // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_DynamicCast_AsW_Attachment_Category;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategories
struct UW_QuartermasterMenu_C_CollapseAllCategories_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_DynamicCast_AsW_Skin_Category;              // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_DynamicCast_AsW_Attachment_Category;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x63 (0x63 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CollapseAllCategoriesExcept
struct UW_QuartermasterMenu_C_CollapseAllCategoriesExcept_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategoryWIdget;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     SkinCategoryWidget;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_DynamicCast_AsW_Skin_Category;              // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14B7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_DynamicCast_AsW_Attachment_Category;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnGunCleaned
struct UW_QuartermasterMenu_C_OnGunCleaned_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.CanCleanGun
struct UW_QuartermasterMenu_C_CanCleanGun_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanReset_Return_Value;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Get_CleanGun_Visibility
struct UW_QuartermasterMenu_C_Get_CleanGun_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanCleanGun_Return_Value;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.AttemptCreateSkinCategory
struct UW_QuartermasterMenu_C_AttemptCreateSkinCategory_Params
{
public:
	TArray<struct FWeaponData>                   WeaponDataArray;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Return_Value;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponData                           CallFunc_Array_Get_Item;                           // 0x20(0xB8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xF4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x104(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x114(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x124(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x134(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_14E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x150(0x18)(ConstParm)
	class UW_SkinCategory_C*                     CallFunc_Create_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.ScrollIntoView
struct UW_QuartermasterMenu_C_ScrollIntoView_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyUp
struct UW_QuartermasterMenu_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x128(0xB8)(None)
	bool                                         CallFunc_HandleMenuWideMultiInput__Up__Return_Value; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.AnyAttachmentCategoryWidgetHovered
struct UW_QuartermasterMenu_C_AnyAttachmentCategoryWidgetHovered_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAnyHovered;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.GetCurrentlyFocusedWidget
struct UW_QuartermasterMenu_C_GetCurrentlyFocusedWidget_Params
{
public:
	class UWidget*                               Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.PopulateAttachmentCategory
struct UW_QuartermasterMenu_C_PopulateAttachmentCategory_Params
{
public:
	bool                                         bAllowAttachmentCategory;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttachmentCategory>           AttachmentCategories;                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAttachmentCategory                   AttachmentCategory;                                // 0x18(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAll
struct UW_QuartermasterMenu_C_UnhoverAll_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1536[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1537[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.FocusOnWidget
struct UW_QuartermasterMenu_C_FocusOnWidget_Params
{
public:
	class UWidget*                               InWidgetToFocus;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Escape
struct UW_QuartermasterMenu_C_Escape_Params
{
public:
	bool                                         CallFunc_AnyAttachmentCategoryWidgetHovered_Return_Value; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.SelectAttachmentCategory
struct UW_QuartermasterMenu_C_SelectAttachmentCategory_Params
{
public:
	bool                                         CallFunc_CanCleanGun_Return_Value;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_154F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1550[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1552[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.UnhoverAttachmentCategory
struct UW_QuartermasterMenu_C_UnhoverAttachmentCategory_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1560[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1565[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.HoverAttachmentCategory
struct UW_QuartermasterMenu_C_HoverAttachmentCategory_Params
{
public:
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_157B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_157F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.PreviousRow
struct UW_QuartermasterMenu_C_PreviousRow_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanCleanGun_Return_Value;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.NextRow
struct UW_QuartermasterMenu_C_NextRow_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1598[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanCleanGun_Return_Value;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_159A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4B0 (0x4B0 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnKeyDown
struct UW_QuartermasterMenu_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HandleMenuWideMultiInput__Down__Return_Value; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_1;                     // 0x148(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_2;                     // 0x168(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_8;          // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_3;                     // 0x188(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_9;          // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_10;         // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_11;         // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_12;         // 0x1A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue_4;                     // 0x1A8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_13;         // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_14;         // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_15;         // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x1C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x1C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1C8(0xB8)(None)
	bool                                         CallFunc_IsUIHidden_Return_Value;                  // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x288(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_2;                    // 0x340(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_3;                    // 0x3F8(0xB8)(None)
};

// 0x10 (0x10 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Exit
struct UW_QuartermasterMenu_C_Exit_Params
{
public:
	bool                                         CallFunc_EnteringQuartermasterMenu_ReturnValue;    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutItem_Preset_C*               CallFunc_GetSelectedPresetWidget_Return_Value;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.Enter
struct UW_QuartermasterMenu_C_Enter_Params
{
public:
	class UClass*                                LoadoutItemClass;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWeaponData>                   Weapons;                                           // 0x8(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            ItemDataTable;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAttachmentCategory>           AttachmentCategories;                              // 0x20(0x10)(Edit, BlueprintVisible)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonClicked
struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonClicked_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentItemButtonClicked
struct UW_QuartermasterMenu_C_OnAttachmentItemButtonClicked_Params
{
public:
	class UClass*                                AttachmentClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonHovered
struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonHovered_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnAttachmentCategoryButtonUnhovered
struct UW_QuartermasterMenu_C_OnAttachmentCategoryButtonUnhovered_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonClicked
struct UW_QuartermasterMenu_C_OnSkinCategoryButtonClicked_Params
{
public:
	class UW_SkinCategory_C*                     SkinCategory;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonHovered
struct UW_QuartermasterMenu_C_OnSkinCategoryButtonHovered_Params
{
public:
	class UW_SkinCategory_C*                     SkinCategory;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinCategoryButtonUnhovered
struct UW_QuartermasterMenu_C_OnSkinCategoryButtonUnhovered_Params
{
public:
	class UW_SkinCategory_C*                     SkinCategory;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.OnSkinItemButtonClicked
struct UW_QuartermasterMenu_C_OnSkinItemButtonClicked_Params
{
public:
	class UClass*                                SkinClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UW_QuartermasterMenu_C_BndEvt__CleanGun_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UW_QuartermasterMenu_C_BndEvt__ApplyAttachments_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UW_QuartermasterMenu_C_BndEvt__DiscardAttachments_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_AttachmentCategory_C*               AttachmentCategory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function W_QuartermasterMenu.W_QuartermasterMenu_C.ExecuteUbergraph_W_QuartermasterMenu
struct UW_QuartermasterMenu_C_ExecuteUbergraph_W_QuartermasterMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1604[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_ComponentBoundEvent_AttachmentCategory;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1605[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1608[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_CustomEvent_AttachmentCategory_2;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_AttachmentClass;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1609[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_CustomEvent_AttachmentCategory_1;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_160C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_CustomEvent_AttachmentCategory;             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1611[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemCategory                     Temp_byte_Variable;                                // 0x62(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1613[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable_1;                              // 0x68(0x10)(ReferenceParm)
	TArray<enum class EWeaponAttachmentType>     Temp_byte_Variable_2;                              // 0x78(0x10)(ReferenceParm)
	TArray<enum class EWeaponAttachmentType>     Temp_byte_Variable_3;                              // 0x88(0x10)(ReferenceParm)
	enum class EWeaponAttachmentType             CallFunc_Array_Get_Item;                           // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             CallFunc_Array_Get_Item_1;                         // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_4;                              // 0xA4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EItemCategory>             Temp_byte_Variable_5;                              // 0xA8(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_CustomEvent_SkinCategory_2;                 // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SkinCategory_C*                     K2Node_CustomEvent_SkinCategory_1;                 // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1621[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SkinCategory_C*                     K2Node_CustomEvent_SkinCategory;                   // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1624[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_SkinClass;                      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1627[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_AttachmentCategory_C*               K2Node_ComponentBoundEvent_AttachmentCategory_2;   // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_AttachmentCategory_C*               K2Node_ComponentBoundEvent_AttachmentCategory_1;   // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


