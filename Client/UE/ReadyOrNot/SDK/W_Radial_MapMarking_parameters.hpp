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

// 0x19 (0x19 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.InitGamepadSupport
struct UW_Radial_MapMarking_C_InitGamepadSupport_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.HandleGamepad
struct UW_Radial_MapMarking_C_HandleGamepad_Params
{
public:
	class UUMG_RadialMenu_C*                     UMGRadial;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickX;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickY;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize2D_ReturnValue;                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.SetGamepadInputDirection
struct UW_Radial_MapMarking_C_SetGamepadInputDirection_Params
{
public:
	class UUMG_RadialMenu_C*                     UMGRadial;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickX;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputAnalogStickState_StickY;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize2D_ReturnValue;                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Update Position
struct UW_Radial_MapMarking_C_Update_Position_Params
{
public:
	struct FVector2D                             Coordinates;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RawCoordinates;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x10(0x10)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonUp
struct UW_Radial_MapMarking_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x17C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x188(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x240(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x2F8(0xB8)(None)
};

// 0x2B9 (0x2B9 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnKeyDown
struct UW_Radial_MapMarking_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x140(0xB8)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x200(0xB8)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D8 (0x2D8 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonDown
struct UW_Radial_MapMarking_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x220(0xB8)(None)
};

// 0x3C (0x3C - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.Tick
struct UW_Radial_MapMarking_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.PreConstruct
struct UW_Radial_MapMarking_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.AddCategory
struct UW_Radial_MapMarking_C_AddCategory_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                            IconImage;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSubCommands;                                    // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
struct UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OldSelection;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature
struct UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OldSelection;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnFocusLost
struct UW_Radial_MapMarking_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.InputChange
struct UW_Radial_MapMarking_C_InputChange_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B9 (0x2B9 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.ExecuteUbergraph_W_Radial_MapMarking
struct UW_Radial_MapMarking_C_ExecuteUbergraph_W_Radial_MapMarking_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadialIcon_MapMarking_C*            CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadialIcon_MapMarking_C*            CallFunc_Create_ReturnValue_1;                     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_PreMissionMarker_Categories       CallFunc_GetDataTableRowFromName_OutRow;           // 0xA0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ID;                             // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_DisplayName;                    // 0xF8(0x18)(None)
	class UTexture2D*                            K2Node_CustomEvent_IconImage;                      // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_HasSubCommands;                 // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddChildToRadialMenu_Success;             // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_PreMissionMarker_Categories       CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x140(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x174(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddChildToRadialMenu_Success_1;           // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_PreMissionMarkers                 CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x180(0x60)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetChild_Output;                          // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetChild_Success;                         // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadialIcon_MapMarking_C*            K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking;    // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewSelection_1;         // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OldSelection_1;         // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetChild_Output_1;                        // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetChild_Success_1;                       // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadialIcon_MapMarking_C*            K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1;  // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewSelection;           // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OldSelection;           // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetChild_Output_2;                        // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetChild_Success_2;                       // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RadialIcon_MapMarking_C*            K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2;  // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x2A0(0x8)(NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Radial_MapMarking.W_Radial_MapMarking_C.SubmenuCommit__DelegateSignature
struct UW_Radial_MapMarking_C_SubmenuCommit__DelegateSignature_Params
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MarkerName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


