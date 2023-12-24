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

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetFocusTarget
struct UW_Loadout_Preset_Preview_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.BackPage
struct UW_Loadout_Preset_Preview_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.BP_GetDesiredFocusTarget
struct UW_Loadout_Preset_Preview_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetMunitionInfo
struct UW_Loadout_Preset_Preview_C_GetMunitionInfo_Params
{
public:
	TSubclassOf<class ABaseItem>                 MunitionItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CountAndName;                                      // 0x8(0x18)(Parm, OutParm)
	class FText                                  Category_Text;                                     // 0x20(0x18)(Parm, OutParm)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemClassText_Category_Text;           // 0x40(0x18)(None)
	int32                                        CallFunc_GetPreviewSlotCount_ReturnValue;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PopulateAttachmentList
struct UW_Loadout_Preset_Preview_C_PopulateAttachmentList_Params
{
public:
	class UVerticalBox*                          VerticalBox;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        AttachmentObjects;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_Preset_Preview_SubItem_C*   CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAttachmentInfo_IsNull;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentInfo_Name;                   // 0x68(0x18)(None)
	class FText                                  CallFunc_GetAttachmentInfo_Type;                   // 0x80(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_FindParentWidgetOfType_ReturnValue;       // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15D (0x15D - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PopulateAmmoList
struct UW_Loadout_Preset_Preview_C_PopulateAmmoList_Params
{
public:
	class UVerticalBox*                          VerticalBox;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Ammo;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsSecondary;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     AmmoCountMap;                                      // 0x20(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            AmmoTypes;                                         // 0x70(0x50)(Edit, BlueprintVisible)
	class FName                                  AmmoType;                                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3600[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xCC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3601[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_Preset_Preview_SubItem_C*   CallFunc_Create_ReturnValue;                       // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3602[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_FindParentWidgetOfType_ReturnValue;       // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3603[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAmmoInfo_Ammo_Variety;                 // 0x110(0x18)(None)
	class FText                                  CallFunc_GetAmmoInfo_Ammo_Caliber;                 // 0x128(0x18)(None)
	TArray<class FName>                          CallFunc_Set_ToArray_Result;                       // 0x140(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x154(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B0 (0x2B0 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetAmmoInfo
struct UW_Loadout_Preset_Preview_C_GetAmmoInfo_Params
{
public:
	class FName                                  AmmoName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSecondary;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3604[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Ammo_Variety;                                      // 0x10(0x18)(Parm, OutParm)
	class FText                                  Ammo_Caliber;                                      // 0x28(0x18)(Parm, OutParm)
	class FText                                  Caliber;                                           // 0x40(0x18)(Edit, BlueprintVisible)
	class FText                                  Variety;                                           // 0x58(0x18)(Edit, BlueprintVisible)
	struct FAmmoTypeData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x70(0x160)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x1D8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1F0(0x40)(HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPreviewSecondarySlotCount_ReturnValue; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPreviewPrimarySlotCount_ReturnValue;   // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3606[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x248(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x288(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x298(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetGearInfo
struct UW_Loadout_Preset_Preview_C_SetGearInfo_Params
{
public:
	class FText                                  CallFunc_GetItemName_Item_Name;                    // 0x0(0x18)(None)
	class FText                                  CallFunc_GetItemName_Item_Name_1;                  // 0x18(0x18)(None)
};

// 0xD9 (0xD9 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetMunitionInfo
struct UW_Loadout_Preset_Preview_C_SetMunitionInfo_Params
{
public:
	class UClass*                                MunitionItem;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<TSubclassOf<class ABaseItem>>           MunitionItems;                                     // 0x8(0x50)(Edit, BlueprintVisible)
	class UW_Loadout_Preset_Preview_SubItem_C*   CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3607[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class ABaseItem>>         CallFunc_Set_ToArray_Result;                       // 0x88(0x10)(ReferenceParm)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3608[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetMunitionInfo_CountAndName;             // 0xA8(0x18)(None)
	class FText                                  CallFunc_GetMunitionInfo_Category_Text;            // 0xC0(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetArmorInfo
struct UW_Loadout_Preset_Preview_C_SetArmorInfo_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaximumSlotCount_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x78(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetArmorCoverageText_CoverageText;        // 0xB8(0x18)(None)
	class FText                                  CallFunc_GetItemName_Item_Name;                    // 0xD0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xE8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x128(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x168(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x178(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetSecondaryInfo
struct UW_Loadout_Preset_Preview_C_SetSecondaryInfo_Params
{
public:
	class FName                                  AmmoType;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          AmmoTypes;                                         // 0x8(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_Item_Name;                    // 0x20(0x18)(None)
	TArray<class UClass*>                        K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetAttachmentInfo
struct UW_Loadout_Preset_Preview_C_GetAttachmentInfo_Params
{
public:
	class UClass*                                WeaponAttachment;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNull;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x10(0x18)(Parm, OutParm)
	class FText                                  Type;                                              // 0x28(0x18)(Parm, OutParm)
	enum class EWeaponAttachmentType             Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x48(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_5;                              // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_6;                              // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_7;                              // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.GetItemName
struct UW_Loadout_Preset_Preview_C_GetItemName_Params
{
public:
	class UClass*                                BaseItem;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Item_Name;                                         // 0x8(0x18)(Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetPrimaryInfo
struct UW_Loadout_Preset_Preview_C_SetPrimaryInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_Item_Name;                    // 0x8(0x18)(None)
	TArray<class UClass*>                        K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateActiveLoadout
struct UW_Loadout_Preset_Preview_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateCurrentSlot
struct UW_Loadout_Preset_Preview_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.UpdateCurrentItemMap
struct UW_Loadout_Preset_Preview_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetLoadoutWidget
struct UW_Loadout_Preset_Preview_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.HeaderSubpageNavigation
struct UW_Loadout_Preset_Preview_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.SetInputMode
struct UW_Loadout_Preset_Preview_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.ChangePage
struct UW_Loadout_Preset_Preview_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.PreviewPreset
struct UW_Loadout_Preset_Preview_C_PreviewPreset_Params
{
public:
	struct FSavedLoadout                         SavedLoadout;                                      // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.Reveal
struct UW_Loadout_Preset_Preview_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.Hide
struct UW_Loadout_Preset_Preview_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3BB (0x3BB - 0x0)
// Function W_Loadout_Preset_Preview.W_Loadout_Preset_Preview_C.ExecuteUbergraph_W_Loadout_Preset_Preview
struct UW_Loadout_Preset_Preview_C_ExecuteUbergraph_W_Loadout_Preset_Preview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x8(0x188)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3613[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x198(0x18)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x1B8(0x50)(None)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3616[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x21C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3617[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_CustomEvent_SavedLoadout;                   // 0x228(0x188)(None)
	float                                        K2Node_Event_Delay_1;                              // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


