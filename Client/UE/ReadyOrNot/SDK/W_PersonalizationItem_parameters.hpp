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
// Function W_PersonalizationItem.W_PersonalizationItem_C.PreConstruct
struct UW_PersonalizationItem_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_PersonalizationItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.Tick
struct UW_PersonalizationItem_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.ExecuteUbergraph_W_PersonalizationItem
struct UW_PersonalizationItem_C_ExecuteUbergraph_W_PersonalizationItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDLCInstalledEnum_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x58(0x88)(None)
	bool                                         CallFunc_IsDLCInstalledEnum_ReturnValue_1;         // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonUnhovered__DelegateSignature
struct UW_PersonalizationItem_C_OnButtonUnhovered__DelegateSignature_Params
{
public:
	class UW_PersonalizationItem_C*              PersonalizationItem;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonHovered__DelegateSignature
struct UW_PersonalizationItem_C_OnButtonHovered__DelegateSignature_Params
{
public:
	class UW_PersonalizationItem_C*              PersonalizationItem;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PersonalizationItem.W_PersonalizationItem_C.OnButtonClicked__DelegateSignature
struct UW_PersonalizationItem_C_OnButtonClicked__DelegateSignature_Params
{
public:
	class UW_PersonalizationItem_C*              PersonalizationItem;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


