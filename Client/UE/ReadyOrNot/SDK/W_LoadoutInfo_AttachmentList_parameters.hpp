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
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BackPage
struct UW_LoadoutInfo_AttachmentList_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetFocusTarget
struct UW_LoadoutInfo_AttachmentList_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF5 (0xF5 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.CheckCurrentAttachments
struct UW_LoadoutInfo_AttachmentList_C_CheckCurrentAttachments_Params
{
public:
	TArray<class UClass*>                        Attachments;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UW_LoadoutInfo_AttachmentListEntry_C*> CurrentListItems;                                  // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        AttachmentIndex;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4097[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Attachment;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SlotExists;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4099[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x88(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsNullAttachment_IsNull;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_InsertChildAt_ReturnValue;                // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot;            // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Array_Get_Item_2;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetIsNullAttachment
struct UW_LoadoutInfo_AttachmentList_C_GetIsNullAttachment_Params
{
public:
	class UClass*                                AttachmentData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNull;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSubstring_ReturnValue;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArraySidearm
struct UW_LoadoutInfo_AttachmentList_C_AttachmentArraySidearm_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentArrayPrimary
struct UW_LoadoutInfo_AttachmentList_C_AttachmentArrayPrimary_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.GetCurrentAttachments
struct UW_LoadoutInfo_AttachmentList_C_GetCurrentAttachments_Params
{
public:
	TArray<TSubclassOf<class UWeaponAttachment>> Attachments;                                       // 0x0(0x10)(Parm, OutParm)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Hide
struct UW_LoadoutInfo_AttachmentList_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetInputMode
struct UW_LoadoutInfo_AttachmentList_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ChangePage
struct UW_LoadoutInfo_AttachmentList_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentSlot
struct UW_LoadoutInfo_AttachmentList_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateCurrentItemMap
struct UW_LoadoutInfo_AttachmentList_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.SetLoadoutWidget
struct UW_LoadoutInfo_AttachmentList_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.HeaderSubpageNavigation
struct UW_LoadoutInfo_AttachmentList_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.PreConstruct
struct UW_LoadoutInfo_AttachmentList_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentList_C_BndEvt__W_LoadoutInfo_AttachmentList_btn_ModifyWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x191 (0x191 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RefreshList
struct UW_LoadoutInfo_AttachmentList_C_RefreshList_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                ItemClass;                                         // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Restricted;                                        // 0x190(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x188 (0x188 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.UpdateActiveLoadout
struct UW_LoadoutInfo_AttachmentList_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.Reveal
struct UW_LoadoutInfo_AttachmentList_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.AttachmentItemClicked
struct UW_LoadoutInfo_AttachmentList_C_AttachmentItemClicked_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeredBy;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.RemoveAttachmentClicked
struct UW_LoadoutInfo_AttachmentList_C_RemoveAttachmentClicked_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeredBy;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F0 (0x4F0 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentList
struct UW_LoadoutInfo_AttachmentList_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4131[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4142[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x68(0x50)(None)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4146[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xCC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4147[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> CallFunc_GetCurrentAttachments_Attachments;        // 0xE8(0x10)(ReferenceParm)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsNullAttachment_IsNull;               // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4148[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Create_ReturnValue;                       // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Array_Get_Item_1;                         // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4149[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_414A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_CustomEvent_ActiveLoadout;                  // 0x148(0x188)(None)
	class UClass*                                K2Node_CustomEvent_ItemClass;                      // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Restricted;                     // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_414B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x2E0(0x188)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x46C(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_Delay;                                // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput;                    // 0x480(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_2;                         // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  K2Node_CustomEvent_TriggeredBy_1;                  // 0x4A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x4A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UW_LoadoutInfo_AttachmentListEntry_C*  K2Node_CustomEvent_TriggeredBy;                    // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4150[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutInfo_AttachmentListEntry_C*  CallFunc_Create_ReturnValue_1;                     // 0x4C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x4D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4152[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UWeaponAttachment>> CallFunc_GetCurrentAttachments_Attachments_1;      // 0x4E0(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnRemoveAttachmentClicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentList_C_OnRemoveAttachmentClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeringListEntry;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnAttachmentItemClicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentList_C_OnAttachmentItemClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeringListEntry;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentList.W_LoadoutInfo_AttachmentList_C.OnModifyWeaponButtonClick__DelegateSignature
struct UW_LoadoutInfo_AttachmentList_C_OnModifyWeaponButtonClick__DelegateSignature_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


