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
// Function W_Customization_Selector.W_Customization_Selector_C.GetFocusTarget
struct UW_Customization_Selector_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BackPage
struct UW_Customization_Selector_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.SetEquipped
struct UW_Customization_Selector_C_SetEquipped_Params
{
public:
	class FName                                  EquippedID;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.SetOptions
struct UW_Customization_Selector_C_SetOptions_Params
{
public:
	TMap<class FName, class FText>               OptionsMap;                                        // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  OptionText;                                        // 0x50(0x18)(Edit, BlueprintVisible)
	class FName                                  OptionID;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3467[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x80(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3468[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3469[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Map_Find_Value;                           // 0xC8(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.UpdateStyle
struct UW_Customization_Selector_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default_1;                           // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.Reveal
struct UW_Customization_Selector_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.Hide
struct UW_Customization_Selector_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.SetInputMode
struct UW_Customization_Selector_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.ChangePage
struct UW_Customization_Selector_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.PreConstruct
struct UW_Customization_Selector_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params
{
public:
	class FName                                  OptionID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature
struct UW_Customization_Selector_C_BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature_Params
{
public:
	class UW_Dropdown_C*                         TriggeringDropdown;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.ExecuteUbergraph_W_Customization_Selector
struct UW_Customization_Selector_C_ExecuteUbergraph_W_Customization_Selector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3492[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3493[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x20(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3494[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_OptionID_2;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID_1;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID;               // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Dropdown_C*                         K2Node_ComponentBoundEvent_TriggeringDropdown;     // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.OnOptionHovered__DelegateSignature
struct UW_Customization_Selector_C_OnOptionHovered__DelegateSignature_Params
{
public:
	class FName                                  OptionID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.OnSelectorClicked__DelegateSignature
struct UW_Customization_Selector_C_OnSelectorClicked__DelegateSignature_Params
{
public:
	class UW_Customization_Selector_C*           TriggeringSelector;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Customization_Selector.W_Customization_Selector_C.OptionSelected__DelegateSignature
struct UW_Customization_Selector_C_OptionSelected__DelegateSignature_Params
{
public:
	class FName                                  OptionID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


