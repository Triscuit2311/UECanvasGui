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
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.BackPage
struct UW_Loadout_InformationTable_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetFocusTarget
struct UW_Loadout_InformationTable_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateLoadoutPresetInfo
struct UW_Loadout_InformationTable_C_UpdateLoadoutPresetInfo_Params
{
public:
	class UW_Loadout_Overview_C*                 CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
};

// 0x314 (0x314 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetAttachmentEffects
struct UW_Loadout_InformationTable_C_SetAttachmentEffects_Params
{
public:
	TArray<struct FST_ItemEffects>               Effects;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<struct FST_ItemEffects>               AttachmentEffects;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x40(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  Temp_byte_Variable;                                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollDirection                  Temp_byte_Variable_1;                              // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	bool                                         Temp_bool_Variable_3;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  Temp_byte_Variable_2;                              // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollDirection                  Temp_byte_Variable_3;                              // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xB0(0x18)(None)
	bool                                         Temp_bool_Variable_5;                              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  Temp_byte_Variable_4;                              // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollDirection                  Temp_byte_Variable_5;                              // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_6;                              // 0xD0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xE8(0x18)(None)
	bool                                         Temp_bool_Variable_7;                              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  Temp_byte_Variable_6;                              // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollDirection                  Temp_byte_Variable_7;                              // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_8;                              // 0x108(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x120(0x18)(None)
	bool                                         Temp_bool_Variable_9;                              // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  Temp_byte_Variable_8;                              // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScrollDirection                  Temp_byte_Variable_9;                              // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects;                  // 0x140(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x168(0x18)(None)
	enum class EScrollDirection                  K2Node_Select_Default_1;                           // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_1;                // 0x188(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_2;                           // 0x1B0(0x18)(None)
	enum class EScrollDirection                  K2Node_Select_Default_3;                           // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_2;                // 0x1D0(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_3;                // 0x1F8(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_4;                // 0x218(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_3;            // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0x248(0x18)(None)
	class FText                                  K2Node_Select_Default_5;                           // 0x260(0x18)(None)
	enum class EScrollDirection                  K2Node_Select_Default_6;                           // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DBC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_5;                // 0x280(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_3;      // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScrollDirection                  K2Node_Select_Default_7;                           // 0x2A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_6;                // 0x2A8(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_4;      // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue_4;            // 0x2CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DC5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_8;                           // 0x2D0(0x18)(None)
	enum class EScrollDirection                  K2Node_Select_Default_9;                           // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ItemEffects                       K2Node_MakeStruct_ST_ItemEffects_7;                // 0x2F0(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_1DC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Play Refresh Anim
struct UW_Loadout_InformationTable_C_Play_Refresh_Anim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAttachmentInfo
struct UW_Loadout_InformationTable_C_UpdateAttachmentInfo_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DFC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x8(0x18)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DFF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutInfo_EffectsList_C*          CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemEffects>               CallFunc_SetAttachmentEffects_Effects;             // 0x30(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_ItemEffects>               CallFunc_SetAttachmentEffects_Effects_1;           // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E06[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateArmourMaterialInfo
struct UW_Loadout_InformationTable_C_UpdateArmourMaterialInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x240 (0x240 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateAmmoInfo
struct UW_Loadout_InformationTable_C_UpdateAmmoInfo_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAmmoCategoryText_Text;                 // 0x8(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E2D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetAmmoLookupDataTable_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAmmoTypeData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0x160)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x198(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x218(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x228(0x18)(None)
};

// 0x218 (0x218 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.GetWeaponClassText
struct UW_Loadout_InformationTable_C_GetWeaponClassText_Params
{
public:
	class FText                                  WeaponClass;                                       // 0x0(0x18)(Parm, OutParm)
	enum class EItemClass                        Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x68(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x80(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xC8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0xF8(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x110(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x128(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x140(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x158(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x170(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x188(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x1A0(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x1B8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x1D0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x1E8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x200(0x18)(None)
};

// 0x633 (0x633 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateItemInfo
struct UW_Loadout_InformationTable_C_UpdateItemInfo_Params
{
public:
	class UW_LoadoutInfo_AttachmentList_C*       CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E62[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetLoadoutCategoryText_Category_Text;     // 0x30(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetWeaponClassText_WeaponClass;           // 0x68(0x18)(None)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E66[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x632(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentSlot
struct UW_Loadout_InformationTable_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateCurrentItemMap
struct UW_Loadout_InformationTable_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetLoadoutWidget
struct UW_Loadout_InformationTable_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.HeaderSubpageNavigation
struct UW_Loadout_InformationTable_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.PreConstruct
struct UW_Loadout_InformationTable_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Tick
struct UW_Loadout_InformationTable_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.SetInputMode
struct UW_Loadout_InformationTable_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ChangePage
struct UW_Loadout_InformationTable_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x192 (0x192 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelItemInfo
struct UW_Loadout_InformationTable_C_RefreshPanelItemInfo_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                ItemClass;                                         // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     LoadoutSlot;                                       // 0x190(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Restricted;                                        // 0x191(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ModifyWeaponClicked
struct UW_Loadout_InformationTable_C_ModifyWeaponClicked_Params
{
public:
	class UClass*                                ItemToModify;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.InitializePanel
struct UW_Loadout_InformationTable_C_InitializePanel_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.UpdateActiveLoadout
struct UW_Loadout_InformationTable_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Reveal
struct UW_Loadout_InformationTable_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.Hide
struct UW_Loadout_InformationTable_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.AttachmentItemClicked
struct UW_Loadout_InformationTable_C_AttachmentItemClicked_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  AttachmentListItem;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAmmoInfo
struct UW_Loadout_InformationTable_C_RefreshPanelAmmoInfo_Params
{
public:
	class FName                                  AmmoType;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                WeaponData;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelArmourMaterial
struct UW_Loadout_InformationTable_C_RefreshPanelArmourMaterial_Params
{
public:
	class UArmourMaterial*                       ArmourMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelAttachment
struct UW_Loadout_InformationTable_C_RefreshPanelAttachment_Params
{
public:
	class UClass*                                Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AttachingWeapon;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RemoveAttachmentItemClicked
struct UW_Loadout_InformationTable_C_RemoveAttachmentItemClicked_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  AttachmentListItem;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.RefreshPanelLoadoutPreset
struct UW_Loadout_InformationTable_C_RefreshPanelLoadoutPreset_Params
{
public:
	struct FLoadoutPreset                        LoadoutPreset;                                     // 0x0(0x190)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x750 (0x750 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.ExecuteUbergraph_W_Loadout_InformationTable
struct UW_Loadout_InformationTable_C_ExecuteUbergraph_W_Loadout_InformationTable_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_CustomEvent_ActiveLoadout_1;                // 0x8(0x188)(None)
	class UClass*                                K2Node_CustomEvent_ItemClass;                      // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     K2Node_CustomEvent_LoadoutSlot;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Restricted;                     // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F04[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x19C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_ItemToModify;                   // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_CustomEvent_ActiveLoadout;                  // 0x1B0(0x188)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x338(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_OptionNameID;                         // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x380(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x388(0x188)(None)
	float                                        K2Node_Event_Delay_1;                              // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  K2Node_CustomEvent_AttachmentListItem_1;           // 0x528(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_AmmoType;                       // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_WeaponData;                     // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x548(0x50)(None)
	class UArmourMaterial*                       K2Node_CustomEvent_ArmourMaterial;                 // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Attachment;                     // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_AttachingWeapon;                // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x5B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInfo_AttachmentListEntry_C*  K2Node_CustomEvent_AttachmentListItem;             // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLoadoutPreset                        K2Node_CustomEvent_LoadoutPreset;                  // 0x5C0(0x190)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelRemoveAttachmentClicked__DelegateSignature
struct UW_Loadout_InformationTable_C_OnInfoPanelRemoveAttachmentClicked__DelegateSignature_Params
{
public:
	enum class EWeaponAttachmentType             Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnInfoPanelAttachmentClicked__DelegateSignature
struct UW_Loadout_InformationTable_C_OnInfoPanelAttachmentClicked__DelegateSignature_Params
{
public:
	enum class EWeaponAttachmentType             Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AttachmentData;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_InformationTable.W_Loadout_InformationTable_C.OnModifyWeaponButtonClicked__DelegateSignature
struct UW_Loadout_InformationTable_C_OnModifyWeaponButtonClicked__DelegateSignature_Params
{
public:
	class UClass*                                ItemToModify;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


