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

// 0x48 (0x48 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybind Text OLD
struct UW_ControlsBind_C_Get_Conflicting_Keybind_Text_OLD_Params
{
public:
	class FText                                  RequiredKeybindName;                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(Parm, OutParm)
	class FText                                  ConflictingBindFormat;                             // 0x30(0x18)(Edit, BlueprintVisible)
};

// 0x88 (0x88 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Check Conflicting Keybinds Are Unbindable OLD
struct UW_ControlsBind_C_Check_Conflicting_Keybinds_Are_Unbindable_OLD_Params
{
public:
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  BindFriendlyName;                                  // 0x20(0x18)(Parm, OutParm)
	struct FActionMappingStruct                  TempActionBind;                                    // 0x38(0x28)(Edit, BlueprintVisible)
	struct FAxisMappingStruct                    TempAxisBind;                                      // 0x60(0x28)(Edit, BlueprintVisible)
};

// 0x80 (0x80 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds OLD
struct UW_ControlsBind_C_Remove_Conflict_Keybinds_OLD_Params
{
public:
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UW_ControlsBind_C*                     TempActionToRemove;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     TempAxisToRemove;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionMappingStruct                  TempActionMapping;                                 // 0x30(0x28)(Edit, BlueprintVisible)
	struct FAxisMappingStruct                    TempAxisMapping;                                   // 0x58(0x28)(Edit, BlueprintVisible)
};

// 0x44 (0x44 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List OLD
struct UW_ControlsBind_C_Add_Keybinds_to_List_OLD_Params
{
public:
	TArray<struct FSKeybinding>                  Keybinds;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  AxisMapping;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3033[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            AxesList;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          ActionsList;                                       // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        TempScale;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List OLD
struct UW_ControlsBind_C_Add_Conflicting_Keybinds_to_List_OLD_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3034[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        ControlsScale;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TempMappingName;                                   // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x358 (0x358 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel
struct UW_ControlsBind_C_HandleMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3039[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x168(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable_1;                            // 0x188(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_2;                            // 0x1A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_Select_Default;                             // 0x1B8(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1D0(0xB8)(None)
	struct FKey                                  K2Node_Select_Default_1;                           // 0x288(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x2A0(0xB8)(None)
};

// 0x78 (0x78 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid OLD
struct UW_ControlsBind_C_Get_Conflicting_Keybinds_when_Valid_OLD_Params
{
public:
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bHasConflict;                                      // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            ConflictingAxes;                                   // 0x28(0x10)(Parm, OutParm)
	TArray<struct FActionMappingStruct>          ConflictingActions;                                // 0x38(0x10)(Parm, OutParm)
	TArray<struct FActionMappingStruct>          OutputAction;                                      // 0x48(0x10)(Edit, BlueprintVisible)
	TArray<struct FAxisMappingStruct>            OutputAxes;                                        // 0x58(0x10)(Edit, BlueprintVisible)
	TArray<class FText>                          LocalizedActions;                                  // 0x68(0x10)(Edit, BlueprintVisible)
};

// 0x2B0 (0x2B0 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown
struct UW_ControlsBind_C_HandleKeyDown_Params
{
public:
	struct FGeometry                             My_Geometry;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             In_Key_Event;                                      // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x140(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x1F8(0xB8)(None)
};

// 0x1E0 (0x1E0 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown
struct UW_ControlsBind_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_HandleKeyDown_ReturnValue;                // 0x128(0xB8)(None)
};

// 0x14 (0x14 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex
struct UW_ControlsBind_C_GetOtherBindingIndex_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B0 (0x2B0 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown
struct UW_ControlsBind_C_HandleMouseButtonDown_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           Reply;                                             // 0x70(0xB8)(Parm, OutParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x128(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x140(0xB8)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x1F8(0xB8)(None)
};

// 0x218 (0x218 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel
struct UW_ControlsBind_C_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_HandleMouseWheel_ReturnValue;             // 0x160(0xB8)(None)
};

// 0x2 (0x2 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.SetDisabled
struct UW_ControlsBind_C_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Rebind Key OLD
struct UW_ControlsBind_C_Rebind_Key_OLD_Params
{
public:
	struct FKey                                  NewKey;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Key_Rebound;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionMappingStruct                  NewActionMapping;                                  // 0x20(0x28)(Edit, BlueprintVisible)
	struct FAxisMappingStruct                    NewAxisMapping;                                    // 0x48(0x28)(Edit, BlueprintVisible)
};

// 0x218 (0x218 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown
struct UW_ControlsBind_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_HandleMouseButtonDown_Reply;              // 0x160(0xB8)(None)
};

// 0x1E0 (0x1E0 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnKeyDown
struct UW_ControlsBind_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_HandleKeyDown_ReturnValue;                // 0x128(0xB8)(None)
};

// 0x58 (0x58 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Get Input Binding Data OLD
struct UW_ControlsBind_C_Get_Input_Binding_Data_OLD_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3042[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionMappingStruct                  ActionMapping;                                     // 0x8(0x28)(Parm, OutParm)
	struct FAxisMappingStruct                    AxisMapping;                                       // 0x30(0x28)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.PreConstruct
struct UW_ControlsBind_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.Key Event Received
struct UW_ControlsBind_C_Key_Event_Received_Params
{
public:
	struct FKey                                  KeyIn;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted
struct UW_ControlsBind_C_OnIllegalBindAttempted_Params
{
public:
	class FText                                  BindFriendlyName;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x258 (0x258 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind
struct UW_ControlsBind_C_ExecuteUbergraph_W_ControlsBind_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                  K2Node_CustomEvent_KeyIn;                          // 0x20(0x18)(HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAxisMappingStruct                    K2Node_MakeStruct_AxisMappingStruct;               // 0x40(0x28)(None)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct;             // 0x68(0x28)(None)
	TArray<enum class EActionMappingFilter>      K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	TArray<enum class EAxisMappingFilter>        K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllActionMappings_ReturnValue;         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          CallFunc_GetAllActionMappings_ActionMappings;      // 0xB8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAllAxisMappings_ReturnValue;           // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            CallFunc_GetAllAxisMappings_AxisMappings;          // 0xD0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConflictingKeybindsWhenValid_HasConflict; // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes; // 0xE8(0x10)(ReferenceParm)
	TArray<struct FActionMappingStruct>          CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions; // 0xF8(0x10)(ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3051[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue; // 0x110(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3052[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3053[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_BindFriendlyName;               // 0x138(0x18)(None)
	class FText                                  CallFunc_GetConflictingKeybindText_ReturnValue;    // 0x150(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x168(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RebindKey_ReturnValue;                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3054[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1A0(0x18)(None)
	struct FAxisMappingStruct                    CallFunc_GetInputBindingData_AxisMapping;          // 0x1B8(0x28)(None)
	struct FActionMappingStruct                  CallFunc_GetInputBindingData_ActionMapping;        // 0x1E0(0x28)(None)
	struct FActionMappingStruct                  K2Node_MakeStruct_ActionMappingStruct_1;           // 0x208(0x28)(None)
	struct FAxisMappingStruct                    K2Node_MakeStruct_AxisMappingStruct_1;             // 0x230(0x28)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature
struct UW_ControlsBind_C_OnUnbindableKeyReboundAttempted__DelegateSignature_Params
{
public:
	class FText                                  BindFriendlyName;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature
struct UW_ControlsBind_C_OnConflictingBindDetected__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingBind;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                  Key;                                               // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FText>                          ConflictBindsText;                                 // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature
struct UW_ControlsBind_C_OnBindingCommitted__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature
struct UW_ControlsBind_C_OnBindingCanceled__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature
struct UW_ControlsBind_C_OnBindingStarted__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature
struct UW_ControlsBind_C_OnReleased__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature
struct UW_ControlsBind_C_OnPressed__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature
struct UW_ControlsBind_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature
struct UW_ControlsBind_C_OnHovered__DelegateSignature_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


