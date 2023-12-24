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
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.PreConstruct
struct UW_NeoLoadout_Slot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetEquippedItem
struct UW_NeoLoadout_Slot_C_SetEquippedItem_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Subtext;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x9 (0x9 - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetSelectableItem
struct UW_NeoLoadout_Slot_C_SetSelectableItem_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetHighlighted
struct UW_NeoLoadout_Slot_C_SetHighlighted_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.SetItemDetails
struct UW_NeoLoadout_Slot_C_SetItemDetails_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Subtext;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x9D (0x9D - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.ExecuteUbergraph_W_NeoLoadout_Slot
struct UW_NeoLoadout_Slot_C_ExecuteUbergraph_W_NeoLoadout_Slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutItem*                          K2Node_CustomEvent_Item_2;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Subtext_1;                      // 0x18(0x18)(None)
	class ULoadoutItem*                          K2Node_CustomEvent_Item_1;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsEquipped;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Highlighted;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4075[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4076[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x50(0x28)(None)
	class ULoadoutItem*                          K2Node_CustomEvent_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Subtext;                        // 0x80(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_NeoLoadout_Slot.W_NeoLoadout_Slot_C.OnClicked__DelegateSignature
struct UW_NeoLoadout_Slot_C_OnClicked__DelegateSignature_Params
{
public:
	class ULoadoutItem*                          Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


