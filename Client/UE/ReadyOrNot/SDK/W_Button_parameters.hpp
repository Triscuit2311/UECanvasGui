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

// 0x231 (0x231 - 0x0)
// Function W_Button.W_Button_C.OnMouseButtonUp
struct UW_Button_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)(None)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x218(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x231 (0x231 - 0x0)
// Function W_Button.W_Button_C.OnMouseButtonDown
struct UW_Button_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x178(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_Button.W_Button_C.PassthroughInteraction
struct UW_Button_C_PassthroughInteraction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Button.W_Button_C.IgnoreInteraction
struct UW_Button_C_IgnoreInteraction_Params
{
public:
	bool                                         Ignore;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.BP_GetButtonLabel
struct UW_Button_C_BP_GetButtonLabel_Params
{
public:
	class UCommonTextBlock*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_Button.W_Button_C.TruncateText
struct UW_Button_C_TruncateText_Params
{
public:
	bool                                         Truncate;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                TruncationCharacters;                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TruncateText_TruncatedText;               // 0x18(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function W_Button.W_Button_C.DisableInteraction
struct UW_Button_C_DisableInteraction_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function W_Button.W_Button_C.Initialize
struct UW_Button_C_Initialize_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UWidgetSwitcherSlot*                   CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcherSlot*                   CallFunc_SlotAsWidgetSwitcherSlot_ReturnValue_1;   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Button.W_Button_C.Enable
struct UW_Button_C_Enable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Button.W_Button_C.SetBackgroundTint
struct UW_Button_C_SetBackgroundTint_Params
{
public:
	struct FLinearColor                          InBackgroundColor;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function W_Button.W_Button_C.SetButtonText
struct UW_Button_C_SetButtonText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Button.W_Button_C.InitContent
struct UW_Button_C_InitContent_Params
{
public:
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Button.W_Button_C.PreConstruct
struct UW_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Button.W_Button_C.OnActionProgress
struct UW_Button_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.EventOnReleased
struct UW_Button_C_EventOnReleased_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.EventOnPressed
struct UW_Button_C_EventOnPressed_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function W_Button.W_Button_C.ExecuteUbergraph_W_Button
struct UW_Button_C_ExecuteUbergraph_W_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x80(0x18)(None)
	float                                        K2Node_Event_HeldPercent;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseButtonStyle_C*                    K2Node_DynamicCast_AsBase_Button_Style;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue_1;                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               CallFunc_GetCustomPadding_OutCustomPadding;        // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBaseButtonStyle_C*                    K2Node_DynamicCast_AsBase_Button_Style_1;          // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CallFunc_GetButtonPadding_OutButtonPadding;        // 0xDC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue_2;                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBaseButtonStyle_C*                    K2Node_DynamicCast_AsBase_Button_Style_2;          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x108(0x18)(None)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button_1;                       // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue_3;                   // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_DynamicCast_AsSound_Base;                   // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.OnRightMousePressed__DelegateSignature
struct UW_Button_C_OnRightMousePressed__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.Deselected__DelegateSignature
struct UW_Button_C_Deselected__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.Selected__DelegateSignature
struct UW_Button_C_Selected__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.DoubleClicked__DelegateSignature
struct UW_Button_C_DoubleClicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.Hovered__DelegateSignature
struct UW_Button_C_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Button.W_Button_C.Clicked__DelegateSignature
struct UW_Button_C_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


