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
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.BackPage
struct UW_RosterSelection_Card_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.GetFocusTarget
struct UW_RosterSelection_Card_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.InitLayout
struct UW_RosterSelection_Card_C_InitLayout_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.HideLoadout
struct UW_RosterSelection_Card_C_HideLoadout_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetDeployables
struct UW_RosterSelection_Card_C_SetDeployables_Params
{
public:
	TArray<class UClass*>                        Grenades;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                        Tactical;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class UClass*, int32>                   DeployablesSorted;                                 // 0x20(0x50)(Edit, BlueprintVisible)
	TArray<TSubclassOf<class ABaseItem>>         Deployables;                                       // 0x70(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x84(0x8)(NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_1;                // 0x94(0x8)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        CallFunc_Map_Keys_Keys;                            // 0xB8(0x10)(ReferenceParm)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C40[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_Munition_SummaryEntry_C*    CallFunc_Create_ReturnValue;                       // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xF0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C43[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value_1;                         // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.GetLongTacticalIcon
struct UW_RosterSelection_Card_C_GetLongTacticalIcon_Params
{
public:
	class UClass*                                LongTacticalItemClass;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x8(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             OutImage;                                          // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	class UItemData*                             GameItemData;                                      // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetLongTacticalInfo
struct UW_RosterSelection_Card_C_SetLongTacticalInfo_Params
{
public:
	class UClass*                                LongTacticalItemData;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetPrimaryInfo
struct UW_RosterSelection_Card_C_SetPrimaryInfo_Params
{
public:
	class UClass*                                PrimaryItemData;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.GetPrimaryIcon
struct UW_RosterSelection_Card_C_GetPrimaryIcon_Params
{
public:
	class UClass*                                PrimaryItemClass;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x8(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             OutImage;                                          // 0x30(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	class UItemData*                             GameItemData;                                      // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.UpdateLoadout
struct UW_RosterSelection_Card_C_UpdateLoadout_Params
{
public:
	TMap<class UClass*, int32>                   DeployablesSorted;                                 // 0x0(0x50)(Edit, BlueprintVisible)
	TArray<TSubclassOf<class ABaseItem>>         Deployables;                                       // 0x50(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRosterLoadout                        CallFunc_GetCharacterLoadout_ReturnValue;          // 0x68(0x38)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.BlankDetails
struct UW_RosterSelection_Card_C_BlankDetails_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
};

// 0x110 (0x110 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetPosition
struct UW_RosterSelection_Card_C_SetPosition_Params
{
public:
	enum class ERosterSquadPosition              Position;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C54[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              Temp_byte_Variable_3;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_5;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_6;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_7;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_8;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_9;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              Temp_byte_Variable_4;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_5;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_6;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_7;                              // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_8;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              Temp_byte_Variable_9;                              // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              Temp_byte_Variable_10;                             // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C59[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0xA0(0x18)(None)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              K2Node_Select_Default_2;                           // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_3;                           // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0xE0(0x18)(None)
	struct FLinearColor                          CallFunc_SquadPositionToColor_OutColor;            // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetupAptitude
struct UW_RosterSelection_Card_C_SetupAptitude_Params
{
public:
	class UProgressBar*                          ProgressBar;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Percent;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.OnLoaded_30A4DB04400864656FB7D9A5A7B21DAF
struct UW_RosterSelection_Card_C_OnLoaded_30A4DB04400864656FB7D9A5A7B21DAF_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.ChangePage
struct UW_RosterSelection_Card_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetInputMode
struct UW_RosterSelection_Card_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.PreConstruct
struct UW_RosterSelection_Card_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.Reveal
struct UW_RosterSelection_Card_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.Hide
struct UW_RosterSelection_Card_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.SetCharacter
struct UW_RosterSelection_Card_C_SetCharacter_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDetails;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Compare;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UW_RosterSelection_Card_C_BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
struct UW_RosterSelection_Card_C_BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
struct UW_RosterSelection_Card_C_BndEvt__W_RosterSelection_Card_btn_Card_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D8 (0x2D8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.ExecuteUbergraph_W_RosterSelection_Card
struct UW_RosterSelection_Card_C_ExecuteUbergraph_W_RosterSelection_Card_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C85[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_PageName;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x28(0x28)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C86[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x80(0x18)(None)
	float                                        K2Node_Event_Delay_1;                              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0xB0(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  Temp_text_Variable_2;                              // 0xE0(0x18)(None)
	class URosterCharacter*                      K2Node_CustomEvent_Character;                      // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ShowDetails;                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Compare;                        // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x103(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_StressPercentageAsStatus_StatusText;      // 0x108(0x18)(None)
	struct FSlateColor                           CallFunc_StressPercentageAsStatus_StatusColor;     // 0x120(0x28)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x148(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x160(0x18)(None)
	class FText                                  CallFunc_FormatBio_OutText;                        // 0x178(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x190(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1D0(0x10)(ReferenceParm)
	class FText                                  CallFunc_StressPercentageAsStatus_StatusText_1;    // 0x1E0(0x18)(None)
	struct FSlateColor                           CallFunc_StressPercentageAsStatus_StatusColor_1;   // 0x1F8(0x28)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x220(0x18)(None)
	struct FLinearColor                          CallFunc_SquadPositionToColor_OutColor;            // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x248(0x28)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x270(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x288(0x18)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x2B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue_1;                  // 0x2BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERosterSquadPosition              Temp_byte_Variable_10;                             // 0x2BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_5;                           // 0x2C0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_RosterSelection_Card.W_RosterSelection_Card_C.OnClicked__DelegateSignature
struct UW_RosterSelection_Card_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_RosterSelection_Card_C*             Card;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


