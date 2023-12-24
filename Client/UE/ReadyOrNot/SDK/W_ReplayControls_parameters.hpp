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

// 0x58 (0x58 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.PositionSettingPanel
struct UW_ReplayControls_C_PositionSettingPanel_Params
{
public:
	class UWidget*                               AnchorWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x8(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToViewport_PixelPosition;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToViewport_ViewportPosition;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.SetHoveredToolButton
struct UW_ReplayControls_C_SetHoveredToolButton_Params
{
public:
	class UW_Button_C*                           TriggeringButton;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovered;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Text_C*                             CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.SetActiveToolButton
struct UW_ReplayControls_C_SetActiveToolButton_Params
{
public:
	class UW_Button_C*                           SelectedButton;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Text_C*                             CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Text_C*                             CallFunc_Map_Find_Value_1;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.GetText_0
struct UW_ReplayControls_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x20(0x10)(ReferenceParm)
	class FText                                  CallFunc_Key_GetDisplayName_ReturnValue;           // 0x30(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.GetColorAndOpacity_0
struct UW_ReplayControls_C_GetColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
};

// 0x362 (0x362 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.OnKeyUp
struct UW_ReplayControls_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x150(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x208(0xB8)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x2D0(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0x2E8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x315(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_1;     // 0x320(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_1;                         // 0x338(0x28)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_btn_Page4_bIsEnabled_0
struct UW_ReplayControls_C_Get_btn_Page4_bIsEnabled_0_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_SplineRotationComboBox_bIsEnabled_0
struct UW_ReplayControls_C_Get_SplineRotationComboBox_bIsEnabled_0_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_SelectedActorName_Text_0
struct UW_ReplayControls_C_Get_SelectedActorName_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetActorName_ReturnValue;                 // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x40(0x18)(None)
};

// 0x2C (0x2C - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.FOV_to_FocalLength
struct UW_ReplayControls_C_FOV_to_FocalLength_Params
{
public:
	float                                        FOV2;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FocalLength2;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DegTan_ReturnValue;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.FocalLength_to_FOV
struct UW_ReplayControls_C_FocalLength_to_FOV_Params
{
public:
	float                                        FocalLength;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOV;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DegAtan_ReturnValue;                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.GetVisibility_1
struct UW_ReplayControls_C_GetVisibility_1_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.GetVisibility_0
struct UW_ReplayControls_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_TimeDilationSlider_Value_0
struct UW_ReplayControls_C_Get_TimeDilationSlider_Value_0_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_PauseButtonTxt_Text_0
struct UW_ReplayControls_C_Get_PauseButtonTxt_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x28 (0x28 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_ReplayTimeSet_Value_0
struct UW_ReplayControls_C_Get_ReplayTimeSet_Value_0_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_MaxTime_Text_0
struct UW_ReplayControls_C_Get_MaxTime_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_TimeSecondsToString_ReturnValue;          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.Get_CurrentTime_Text_0
struct UW_ReplayControls_C_Get_CurrentTime_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_TimeSecondsToString_ReturnValue;          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
};

// 0x58E (0x58E - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.OnKeyDown
struct UW_ReplayControls_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ReplayController_C*                K2Node_DynamicCast_AsBP_Replay_Controller;         // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x1B8(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0x1C8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x1F8(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_1;     // 0x2C8(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_1;                         // 0x2D8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x305(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_2;     // 0x320(0x10)(ReferenceParm)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_3;     // 0x330(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_2;                         // 0x340(0x28)(None)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_3;                         // 0x368(0x28)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x39D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FD5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_4;           // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_4;     // 0x3B0(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_4;                         // 0x3C8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x3F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x3F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FD8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_5;           // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_6;           // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_5;     // 0x410(0x10)(ReferenceParm)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_6;     // 0x420(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_5;                         // 0x430(0x28)(None)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_6;                         // 0x458(0x28)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FDA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x48C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x48D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FDB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_7;           // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x498(0xB8)(None)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_7;     // 0x550(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_7;                         // 0x560(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x58D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.ReplayTimeBarChanged
struct UW_ReplayControls_C_ReplayTimeBarChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.SetMinimumReplayBarTime
struct UW_ReplayControls_C_SetMinimumReplayBarTime_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature_Params
{
public:
	float                                        NewCurrentTimeInSeconds;                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature
struct UW_ReplayControls_C_BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature_Params
{
public:
	float                                        NewCurrentTimeInSeconds;                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x449 (0x449 - 0x0)
// Function W_ReplayControls.W_ReplayControls_C.ExecuteUbergraph_W_ReplayControls
struct UW_ReplayControls_C_ExecuteUbergraph_W_ReplayControls_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ReplayMountedSubMesh_C*             CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ReplaySocket_C*                     CallFunc_Create_ReturnValue_1;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_InValue_13;             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_12;             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_11;             // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_InValue_10;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_9;              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_8;              // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_InValue_7;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayCameraPawn*                     K2Node_DynamicCast_AsReplay_Camera_Pawn;           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  K2Node_DynamicCast_AsCine_Camera_Component;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller;            // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_1;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_2;          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetPaused_ReturnValue;                    // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetPaused_ReturnValue_1;                  // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FE8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_InValue_6;              // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_3;          // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_4;          // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_5;          // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance;   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FReplayEvent>                  CallFunc_GetReplayEvents_ReturnValue;              // 0x180(0x10)(ReferenceParm)
	float                                        Temp_float_Variable;                               // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_6;          // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue; // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue; // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value;                          // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_19;              // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_18;              // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_17;              // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_7;        // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_5;              // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_7;          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue_1; // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1; // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_4;              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_1;                     // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Percent;                              // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_16;              // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x258(0x18)(None)
	float                                        K2Node_ComponentBoundEvent_InValue_3;              // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_8;        // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_8;          // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplaySubMesh                        CallFunc_Array_Get_Item;                           // 0x298(0x28)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplaySocket                         CallFunc_Array_Get_Item_1;                         // 0x2C8(0x20)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2F0(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x310(0x18)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x328(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_15;              // 0x330(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_14;              // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_13;              // 0x340(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_12;              // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_11;              // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_10;              // 0x358(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_2;              // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue_1;              // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_InValue;                // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4000[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_9;        // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_9;          // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4001[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_2;                     // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue_3;                     // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_10;       // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReplayController*                     K2Node_DynamicCast_AsReplay_Controller_10;         // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4003[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_9;               // 0x3B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_8;               // 0x3B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_7;               // 0x3C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4004[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_5;             // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4005[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_11;       // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ReplayController_C*                K2Node_DynamicCast_AsBP_Replay_Controller;         // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4006[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_6;               // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_5;               // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x400(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID;               // 0x408(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4007[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x430(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds_1; // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds; // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


