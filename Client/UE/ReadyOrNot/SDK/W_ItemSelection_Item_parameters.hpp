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
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ConfirmSelection
struct UW_ItemSelection_Item_C_ConfirmSelection_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Deselect
struct UW_ItemSelection_Item_C_Deselect_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Select
struct UW_ItemSelection_Item_C_Select_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.FadeOut
struct UW_ItemSelection_Item_C_FadeOut_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ChangeIconsIfBuildIsPirated
struct UW_ItemSelection_Item_C_ChangeIconsIfBuildIsPirated_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0x88)(None)
};

// 0x89 (0x89 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Initialize
struct UW_ItemSelection_Item_C_Initialize_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsVisible;                                        // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.Re-Initialize
struct UW_ItemSelection_Item_C_ReMinusInitialize_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.PreConstruct
struct UW_ItemSelection_Item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16B (0x16B - 0x0)
// Function W_ItemSelection_Item.W_ItemSelection_Item_C.ExecuteUbergraph_W_ItemSelection_Item
struct UW_ItemSelection_Item_C_ExecuteUbergraph_W_ItemSelection_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBuildPirated_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x50(0x88)(None)
	struct FSlateBrush                           K2Node_CustomEvent_InBrush;                        // 0xD8(0x88)(ConstParm)
	bool                                         K2Node_CustomEvent_bIsVisible;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bVisible;                       // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBuildPirated_ReturnValue_1;             // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


