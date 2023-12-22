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
// Function W_SettingsMenu.W_SettingsMenu_C.GetSupporterCode
struct UW_SettingsMenu_C_GetSupporterCode_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDiscordOneTimeUseCode_ReturnValue;     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Get_SupporterSubCategory_Visibility_0
struct UW_SettingsMenu_C_Get_SupporterSubCategory_Visibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameVersionEnabled_ReturnValue;         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.IsFSREnabledVisibility
struct UW_SettingsMenu_C_IsFSREnabledVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFSREnabled_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Get_FOVWarning_Visibility
struct UW_SettingsMenu_C_Get_FOVWarning_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0
struct UW_SettingsMenu_C_Get_SimpleGraphics_Slider_FieldOfView_ColorAndOpacity_0_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0
struct UW_SettingsMenu_C_Get_SimpleGraphics_Slider_Resolution_bIsEnabled_0_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Try Assign Unbindable Control
struct UW_SettingsMenu_C_Try_Assign_Unbindable_Control_Params
{
public:
	struct FSKeybinding                          KeyBinding;                                        // 0x0(0x47)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_31D6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSuccess;                                          // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CannotBeUnbindable;                                // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Get Apply Button Enabled
struct UW_SettingsMenu_C_Get_Apply_Button_Enabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.SwitchControlsTab
struct UW_SettingsMenu_C_SwitchControlsTab_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               MenuWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           ActiveButton;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3D (0x3D - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.SwitchTab
struct UW_SettingsMenu_C_SwitchTab_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               MenuWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tab_Name;                                          // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bShowResetButton;                                  // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           ActiveButton;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Initialise Or Get Pop Up
struct UW_SettingsMenu_C_Initialise_Or_Get_Pop_Up_Params
{
public:
	class UClass*                                PopUpType;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSStandardModalDetails                StandardModalDetails;                              // 0x8(0x71)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_31DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    OutputPopUp;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PopupClass;                                        // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    TempPopUp;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_StandardModal_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_StandardModal_C*                    CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.AddToControlBindsLists
struct UW_SettingsMenu_C_AddToControlBindsLists_Params
{
public:
	class UW_ControlsBind_C*                     ControlBInd;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAxisMappingStruct                    InputAxis;                                         // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActionMappingStruct                  InputAction;                                       // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B1 (0x2B1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.OnKeyDown
struct UW_SettingsMenu_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_SaveSettings_ReturnValue;                 // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Ctrl;                            // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Shift;                           // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Alt;                             // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Cmd;                             // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_JoyIsKey_Match;                           // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1E8(0xB8)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.IsRaytracingSupportedVisibility
struct UW_SettingsMenu_C_IsRaytracingSupportedVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.AddAllKeybindsInList
struct UW_SettingsMenu_C_AddAllKeybindsInList_Params
{
public:
	TArray<struct FSKeybinding>                  Keybinds;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  MatchingName;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          KeyList;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSKeybinding                          CallFunc_Array_Get_Item;                           // 0x38(0x47)(HasGetValueTypeHash)
	uint8                                        Pad_31F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x318 (0x318 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindListText
struct UW_SettingsMenu_C_GetConflictingKeybindListText_Params
{
public:
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          ConflictBinds;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Text;                                              // 0x30(0x18)(Parm, OutParm)
	class FText                                  LocalizedActionChain;                              // 0x48(0x18)(Edit, BlueprintVisible)
	class FText                                  Inputs_2LocalizedComma;                            // 0x60(0x18)(Edit, BlueprintVisible)
	class FText                                  Inputs_2LocalizedAnd;                              // 0x78(0x18)(Edit, BlueprintVisible)
	TArray<class FText>                          LocalizedActions;                                  // 0x90(0x10)(Edit, BlueprintVisible)
	class FText                                  CallFunc_Array_Get_Item;                           // 0xA0(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0xB8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x110(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_2;                         // 0x198(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1B8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1F8(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3202[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x248(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x288(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2C8(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x2D8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2E8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x300(0x18)(None)
};

// 0x148 (0x148 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.GetConflictingKeybindText
struct UW_SettingsMenu_C_GetConflictingKeybindText_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          ConflictingActions;                                // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAxisMappingStruct>            ConflictingAxes;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          ConflictBindNames;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Text;                                              // 0x48(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetConflictingKeybindListText_Text;       // 0x60(0x18)(None)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name;           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x88(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x120(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x130(0x18)(None)
};

// 0x2D1 (0x2D1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.OnMouseButtonDown
struct UW_SettingsMenu_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)(None)
	struct FEventReply                           CallFunc_HandleMouseButtonDown_Reply;              // 0x218(0xB8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.InitGraphicsPreset
struct UW_SettingsMenu_C_InitGraphicsPreset_Params
{
public:
	struct FSGraphicPreset                       CurrentPresetCandidate;                            // 0x0(0x32)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadPiPResolutionScale_ResolutionScale;   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPResolutionScale_ReturnValue;       // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadPiPFPS_bEnabled;                      // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3210[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue;                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXEnabled;        // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled; // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXShadowsEnabled; // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled; // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXGlobalIllumination; // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXTranslucency;   // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_ReturnValue;        // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_bUseMeshPainting;      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_ReturnValue;           // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_bDoFEnabled;       // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_ReturnValue;       // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetVideoQualitySettings_AntiAliasing;     // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Effects;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_PostProcess;      // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVideoQualitySettings_ResolutionScaling; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Shadow;           // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Texture;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_ViewDistance;     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVideoQualitySettings_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3211[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSGraphicPreset                       CallFunc_Array_Get_Item;                           // 0x84(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3212[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0xC6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xC7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3216[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSGraphicPreset                       K2Node_MakeStruct_SGraphicPreset;                  // 0xD8(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3217[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.StageGraphicsPreset
struct UW_SettingsMenu_C_StageGraphicsPreset_Params
{
public:
	struct FSGraphicPreset                       Preset;                                            // 0x0(0x32)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3228[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMotionBlurStrength_Strength;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3229[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A7 (0x1A7 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.PopulateGameOptions
struct UW_SettingsMenu_C_PopulateGameOptions_Params
{
public:
	bool                                         bIsDesignTime;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EOptiwandViewMode                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_2;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_3;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_4;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3241[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_4;                            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_5;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3242[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_6;                            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_7;                            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSendMapStatistics_bSendMapStatistics;  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSendMapStatistics_ReturnValue;         // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3243[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled; // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadServersideChecksum_ReturnValue;       // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint; // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_ReturnValue; // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowTeamStatus_bShowTeamStatus;       // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowTeamStatus_ReturnValue;           // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EOptiwandViewMode                 CallFunc_LoadOptiwandViewMode_OptiwandViewMode;    // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadOptiwandViewMode_ReturnValue;         // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHesitationBarSetting_bShowHesitationBar; // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHesitationBarSetting_ReturnValue; // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3249[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowPlayerIconSetting_bShowPlayerIcon; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowPlayerIconSetting_ReturnValue;    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption; // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption; // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption; // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption; // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption; // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue;  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;    // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_ReturnValue;        // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_bShowHealthIcons; // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_ReturnValue;    // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScoreReadoutMode                 CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode; // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadScoreReadoutSetting_ReturnValue;      // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEmptyMagReloadType               CallFunc_LoadEmptyMagReloadSettings_EmptyMagReloadType; // 0xFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadEmptyMagReloadSettings_ReturnValue;   // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_2;                           // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_bEnabled;          // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;       // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_ReturnValue;       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemSelectionInterfaceType       CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface; // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadItemSelectionStyleSettings_ReturnValue; // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_3;                           // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                CallFunc_LoadShotgunSettings_ShotgunReloadType;    // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShotgunSettings_ReturnValue;          // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGrenadeThrowSettingType          CallFunc_LoadGrenadeSettings_GrenadeThrowType;     // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadGrenadeSettings_ReturnValue;          // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3250[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_4;                           // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_5;                           // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFreelookSensitivity_Sensitivity;       // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFreelookSensitivity_ReturnValue;       // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3251[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x17E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3252[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMouseSensitivity_MouseSensitvity;      // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseSensitivity_ReturnValue;          // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3253[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowFPS_bShowFPS;                      // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowHud;                 // 0x18E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD;               // 0x18F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass;             // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD;           // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD;         // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat;                // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD;                 // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload;                // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3254[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadHUDSettings_IconScale;                // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale;          // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption;    // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames;         // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts;       // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue;              // 0x1A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.PopulateAudioOptions
struct UW_SettingsMenu_C_PopulateAudioOptions_Params
{
public:
	bool                                         bIsDesignTime;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3265[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        CallFunc_GetVoiceType_OutVoiceType;                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVoiceType_ReturnValue;                 // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3266[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LoadSelectedAudioDevice_OutAudioDevice;   // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSelectedAudioDevice_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3267[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMicInputGain_MicInputGain;             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMicInputGain_ReturnValue;              // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3268[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetAvailableAudioDevices_OutAudioDevices; // 0x70(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAvailableAudioDevices_ReturnValue;     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3269[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA0(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetVolumes_MasterVolume;                  // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_UIVolume;                      // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_SFXVolume;                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_MusicVolume;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_VOIPVolume;                    // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVolumes_ReturnValue;                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_2;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_3;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_4;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_5;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C4 (0x1C4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.PopulateVideoOptions
struct UW_SettingsMenu_C_PopulateVideoOptions_Params
{
public:
	bool                                         bIsDesignTime;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3290[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMotionBlurStrength_Strength;           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3292[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMotionBlurStrength_Strength_1;         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue_1;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled_1;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue_1;       // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ENVGStyle                         CallFunc_LoadNVGStyle_NVGStyle;                    // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadNVGStyle_ReturnValue;                 // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetReflexEnabled_ReflexMode;              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetReflexEnabled_bFlashIndicatorEnabled;  // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexEnabled_ReturnValue;             // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadMirrorEnabledOnlyInLobby_bEnabled;    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadMirrorEnabledOnlyInLobby_ReturnValue; // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled; // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled; // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled; // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_ReturnValue;      // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetWorldDecalsEnabled_bEnabled;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3298[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDecalsEnabled_FadeDistance;       // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDecalsEnabled_Density;            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_ReturnValue;        // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_bEnabled;          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_ReturnValue;       // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_bEnabled;                      // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS;                           // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue;                   // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadMirrorReflectionEnabled_bEnabled;     // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadMirrorReflectionEnabled_ReturnValue;  // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFSRQuality_Quality;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFSRQuality_ReturnValue;                // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_1;                           // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFlashlightShadows_bFlashLightShadows;  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFlashlightShadows_ReturnValue;         // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetBounceLightEnabled_bBounceLightEnabled; // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetBounceLightEnabled_ReturnValue;        // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadZoomADSSetting_bZoomADS;              // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadZoomADSSetting_ReturnValue;           // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetDlssQuality_Quality;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDlssQuality_ReturnValue;               // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneX;           // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneY;           // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSafeZoneSettings_ReturnValue;         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_2;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_3;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneX_1;         // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneY_1;         // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSafeZoneSettings_ReturnValue_1;       // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_4;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRaytracingSettings_bRTXEnabled;        // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXShadowsEnabled; // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled; // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXGlobalIllumination; // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXTranslucency;   // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_ReturnValue;        // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetIntegralValue_NewValue_1;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_bUseMeshPainting;      // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_ReturnValue;           // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_bDoFEnabled;       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_ReturnValue;       // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWindowMode                       CallFunc_GetCurrentScreenMode_ReturnValue;         // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadPiPResolutionScale_ResolutionScale;   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPResolutionScale_ReturnValue;       // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadPiPFPS_bEnabled_1;                    // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS_1;                         // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue_1;                 // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable;                                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetVideoQualitySettings_AntiAliasing;     // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Effects;          // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_PostProcess;      // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVideoQualitySettings_ResolutionScaling; // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Shadow;           // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Texture;          // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_ViewDistance;     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVideoQualitySettings_ReturnValue;      // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_2;                           // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x15E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_6;              // 0x15F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFoV_FOV;                               // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFoV_ReturnValue;                       // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentScreenResolution_ReturnValue;   // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue_2;              // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_bEnabled_2;                    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS_2;                         // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue_2;                 // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPResolutionScale_ResolutionScale_1; // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPResolutionScale_ReturnValue_1;     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_5;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue_3;              // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_AntiAliasing_1;   // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Effects_1;        // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_PostProcess_1;    // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVideoQualitySettings_ResolutionScaling_1; // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Shadow_1;         // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Texture_1;        // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_ViewDistance_1;   // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVideoQualitySettings_ReturnValue_1;    // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_6;                 // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.PreConstruct
struct UW_SettingsMenu_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.AddControlsToGridPanel
struct UW_SettingsMenu_C_AddControlsToGridPanel_Params
{
public:
	TArray<struct FSKeybinding>                  Bindings;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGridPanel*                            Grid_Panel;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Slider_IconScale_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowFPS_K2Node_ComponentBoundEvent_1_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHUD_K2Node_ComponentBoundEvent_2_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_SwayHUD_K2Node_ComponentBoundEvent_3_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowChat_K2Node_ComponentBoundEvent_4_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowNames_K2Node_ComponentBoundEvent_5_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHints_K2Node_ComponentBoundEvent_7_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_StaticReload_K2Node_ComponentBoundEvent_8_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowCompass_K2Node_ComponentBoundEvent_9_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Slider_MasterVolume_K2Node_ComponentBoundEvent_10_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Slider_SFXVolume_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Slider_UIVolume_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Slider_MusicVolume_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature_Params
{
public:
	class FString                                NewResolutionValue;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_17_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_StandardCombobox_New_K2Node_ComponentBoundEvent_18_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Tab_BasicGraphicOptions_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Tab_AdvancedGraphicOptions_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params
{
public:
	class UW_StandardButton_C*                   CallingButton;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Textbox_OfficerName_K2Node_ComponentBoundEvent_47_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Started
struct UW_SettingsMenu_C_On_Binding_Started_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Canceled
struct UW_SettingsMenu_C_On_Binding_Canceled_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.On Binding Committed
struct UW_SettingsMenu_C_On_Binding_Committed_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_InvertMousePitch_K2Node_ComponentBoundEvent_50_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_InvertMouseYaw_K2Node_ComponentBoundEvent_51_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_Language_K2Node_ComponentBoundEvent_53_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Detected
struct UW_SettingsMenu_C_Conflicting_Bind_Detected_Params
{
public:
	class UW_ControlsBind_C*                     CallingBind;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                  Key;                                               // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FText>                          ConflictBindsText;                                 // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_Controls_K2Node_ComponentBoundEvent_58_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_VSync_K2Node_ComponentBoundEvent_59_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_Raytracing_K2Node_ComponentBoundEvent_61_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingShadows_K2Node_ComponentBoundEvent_62_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingReflections_K2Node_ComponentBoundEvent_63_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_64_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__FrameLimitEnabledCheckbox_K2Node_ComponentBoundEvent_65_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_66_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_RaytracingTranslucency_K2Node_ComponentBoundEvent_67_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Slider_QuickThrowScale_K2Node_ComponentBoundEvent_68_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_GrenadeStyle_K2Node_ComponentBoundEvent_69_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_ShotgunReloadStyle_K2Node_ComponentBoundEvent_70_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Check_MotionBlurEnable_K2Node_ComponentBoundEvent_76_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Audio_Checkbox_DisableHitmarker_K2Node_ComponentBoundEvent_77_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_ItemSelectionStyle_K2Node_ComponentBoundEvent_80_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_CurvedHUD_K2Node_ComponentBoundEvent_81_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_FireModeStyle_K2Node_ComponentBoundEvent_85_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Ok Clicked
struct UW_SettingsMenu_C_Conflicting_Bind_Ok_Clicked_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.Conflicting Bind Cancel Clicked
struct UW_SettingsMenu_C_Conflicting_Bind_Cancel_Clicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.OnCancelIllegalBindClicked
struct UW_SettingsMenu_C_OnCancelIllegalBindClicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_ScoreReadoutMode_K2Node_ComponentBoundEvent_54_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHealthIcons_K2Node_ComponentBoundEvent_71_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHotkeys_K2Node_ComponentBoundEvent_72_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_73_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_74_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_UnlockedDoorCommand_K2Node_ComponentBoundEvent_75_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_LockedDoorcommand_K2Node_ComponentBoundEvent_88_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultTargetCommand_K2Node_ComponentBoundEvent_89_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_90_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_GameOptions_K2Node_ComponentBoundEvent_91_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_GraphicsOptions_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_AudioOptions_K2Node_ComponentBoundEvent_95_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlOptions_K2Node_ComponentBoundEvent_97_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_Reset_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_Apply_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_Exit_K2Node_ComponentBoundEvent_92_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowIcons_K2Node_ComponentBoundEvent_31_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Checkbox_ShowHesitationBar_K2Node_ComponentBoundEvent_15_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__Options_Combo_ScoreReadoutMode_1_K2Node_ComponentBoundEvent_16_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ShowHealthIcons_1_K2Node_ComponentBoundEvent_38_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ShowCommandContextHint_K2Node_ComponentBoundEvent_39_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_SimpleGraphics_ADSZoom_K2Node_ComponentBoundEvent_40_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGrahpics_Check_BounceLight_K2Node_ComponentBoundEvent_41_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_43_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_InputAudioDevice_K2Node_ComponentBoundEvent_48_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MirrorScale_K2Node_ComponentBoundEvent_49_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_CopySupporterCode_K2Node_ComponentBoundEvent_79_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_ServersideChecksum_K2Node_ComponentBoundEvent_98_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ProfilingBtn_K2Node_ComponentBoundEvent_103_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorAntiAlias_K2Node_ComponentBoundEvent_104_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDecals_K2Node_ComponentBoundEvent_105_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_MirrorDynamicShadows_K2Node_ComponentBoundEvent_106_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_108_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_TeamViewFPS_K2Node_ComponentBoundEvent_109_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Checkbox_DecalsEnabled_K2Node_ComponentBoundEvent_110_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Reflex_Combo_K2Node_ComponentBoundEvent_113_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexGameToRenderLatency_ChkBox_K2Node_ComponentBoundEvent_114_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexGameLatencyChkBox_K2Node_ComponentBoundEvent_116_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ReflexRenderLatency_ChkBox_K2Node_ComponentBoundEvent_117_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_MirrorReflectionMode_K2Node_ComponentBoundEvent_115_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_NVGStyle_K2Node_ComponentBoundEvent_94_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_ClearModioUserData_K2Node_ComponentBoundEvent_118_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Checkbox_MapAnalytics_K2Node_ComponentBoundEvent_78_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenu_C_BndEvt__W_SettingsMenu_Options_Combo_DefaultVoipChannel_K2Node_ComponentBoundEvent_124_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9A (0xA9A - 0x0)
// Function W_SettingsMenu.W_SettingsMenu_C.ExecuteUbergraph_W_SettingsMenu
struct UW_SettingsMenu_C_ExecuteUbergraph_W_SettingsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3364[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_2;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_3;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3365[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_4;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_5;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3366[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_6;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_7;                              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3367[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_8;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_9;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3368[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_4;                               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	enum class EScoreReadoutMode                 Temp_byte_Variable_10;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_11;                             // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_12;                             // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_13;                             // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_14;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_15;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_16;                             // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_17;                             // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_18;                             // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_19;                             // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_20;                             // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_21;                             // 0x7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_22;                             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3369[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_6;                               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_23;                             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_24;                             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_25;                             // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_26;                             // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_27;                             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_28;                             // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_29;                             // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_30;                             // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_8;                               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_31;                             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_32;                             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_33;                             // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_34;                             // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_35;                             // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_36;                             // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_37;                             // 0x9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_9;                               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 Temp_byte_Variable_38;                             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 Temp_byte_Variable_39;                             // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_10;                              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable_40;                             // 0xAC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable_41;                             // 0xAD(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_11;                              // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        Temp_byte_Variable_42;                             // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        Temp_byte_Variable_43;                             // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_12;                              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_44;                             // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        K2Node_Select_Default;                             // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_45;                             // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_46;                             // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_47;                             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3371[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3374[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSKeybinding>                  K2Node_CustomEvent_Bindings;                       // 0x100(0x10)(ConstParm, ReferenceParm)
	class UGridPanel*                            K2Node_CustomEvent_Grid_Panel;                     // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x11C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x12C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3378[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsBind_C*>             K2Node_MakeArray_Array;                            // 0x140(0x10)(ReferenceParm, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x150(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_17;       // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_30;      // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_43;      // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_42;      // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetShowFPS_ReturnValue;                   // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_41;      // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_40;      // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_39;      // 0x16D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_38;      // 0x16E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_37;      // 0x16F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_36;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowHud;                 // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bCurvedHUD;               // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowCompass;             // 0x173(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowWeaponHUD;           // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowMagazineHUD;         // 0x175(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowChat;                // 0x176(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bSwayHUD;                 // 0x177(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_b2DReload;                // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadHUDSettings_IconScale;                // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadHUDSettings_QuickThrowScale;          // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadHUDSettings_FireModeDisplayOption;    // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHUDSettings_bShowPlayerNames;         // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_bShowButtonPrompts;       // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHUDSettings_ReturnValue;              // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue;              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_1;            // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_2;            // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_3;            // 0x19A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_4;            // 0x19B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_5;            // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_6;            // 0x19D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_7;            // 0x19E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3382[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_16;       // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_29;      // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_15;       // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_28;      // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveSFXVolume_ReturnValue;                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMasterVolume_ReturnValue;             // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3385[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_14;       // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_27;      // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_13;       // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_26;      // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveMusicVolume_ReturnValue;              // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveUIVolume_ReturnValue;                 // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3387[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_12;       // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_25;      // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveVOIPVolume_ReturnValue;               // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_NewResolutionValue;     // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_24;      // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_5;      // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_23;      // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_5;      // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_22;      // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_4;      // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_21;      // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x205(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x206(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x207(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_3;      // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_20;      // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_2;      // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_19;      // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_1;      // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_18;      // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue;        // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_17;      // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x22D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0x22E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0x22F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_4;      // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_16;      // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_11;       // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_15;      // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3399[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    K2Node_ComponentBoundEvent_CallingModal_2;         // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_TextEntry_1;            // 0x250(0x18)(None)
	class UStandardModal*                        K2Node_ComponentBoundEvent_CallingModal_1;         // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_ComponentBoundEvent_CallingModal;           // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_TextEntry;              // 0x278(0x18)(None)
	bool                                         CallFunc_SetMotionBlurStrength_ReturnValue;        // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMotionBlurEnabled_ReturnValue;         // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetUseMeshpainting_ReturnValue;           // 0x292(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetDepthofFieldSetting_ReturnValue;       // 0x293(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveSafeZoneSettings_ReturnValue;         // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SavePiPResolutionScale_ReturnValue;       // 0x295(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_339E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveVideoModeAndQuality_ReturnValue;      // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetVideoQualitySettings_ReturnValue;      // 0x2B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SettingLabel_C*                     CallFunc_Create_ReturnValue;                       // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue;               // 0x2F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_20;           // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_6;             // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_6;              // 0x2FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_19;           // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSGraphicPreset                       CallFunc_Array_Get_Item;                           // 0x304(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SetScreenResolution_ReturnValue;          // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ChangeScreenResolution_ReturnValue;       // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x33A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetFoV_ReturnValue;                       // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton_1;        // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardButton_C*                   K2Node_ComponentBoundEvent_CallingButton;          // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x358(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_2;                // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsResetBinding_C*             CallFunc_Create_ReturnValue_1;                     // 0x380(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_1;             // 0x388(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x390(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x3A8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x3C0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_1;                         // 0x3D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_1;                // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;      // 0x3F0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;      // 0x400(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_2;                         // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_3;                         // 0x418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;      // 0x430(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget;                  // 0x440(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_CustomEvent_NewKey;                         // 0x448(0x18)(HasGetValueTypeHash)
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_4;                         // 0x460(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_35;      // 0x46D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_34;      // 0x46E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_10;       // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_14;      // 0x474(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x47A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMouseSensitivity_ReturnValue;          // 0x47B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMouseInverted_ReturnValue;             // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMouseInverted_ReturnValue_1;           // 0x47D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_18;           // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x484(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x488(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetCurrentCulture_ReturnValue;            // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_BaseController_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x4A0(0x10)(ReferenceParm)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingBind;                    // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          K2Node_CustomEvent_ActionMappings;                 // 0x4C0(0x10)(ReferenceParm)
	TArray<struct FAxisMappingStruct>            K2Node_CustomEvent_AxisMappings;                   // 0x4D0(0x10)(ReferenceParm)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x4E0(0x18)(HasGetValueTypeHash)
	TArray<class FText>                          K2Node_CustomEvent_ConflictBindsText;              // 0x4F8(0x10)(ReferenceParm)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetConflictingKeybindText_Text;           // 0x518(0x18)(None)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_33;      // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveKeybinds_ReturnValue;                 // 0x531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_32;      // 0x532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_9;        // 0x534(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_13;      // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_8;        // 0x53C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_12;      // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetFreelookSensitivity_ReturnValue;       // 0x544(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_31;      // 0x545(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetShowControls_ReturnValue;              // 0x546(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_KeyDisplay_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets_6;      // 0x548(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_KeyDisplay_C*                       CallFunc_Array_Get_Item_6;                         // 0x560(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSKeybinding                          CallFunc_Array_Get_Item_7;                         // 0x568(0x47)(HasGetValueTypeHash)
	uint8                                        Pad_33D1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Try_Assign_Unbindable_Control_bSuccess;   // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Try_Assign_Unbindable_Control_bSuccess_1; // 0x5B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_30;      // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_3;      // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_11;      // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_29;      // 0x5CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_28;      // 0x5CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_27;      // 0x5CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_26;      // 0x5CF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_25;      // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetRaytracingSettings_ReturnValue;        // 0x5D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFrameRateLimit_ReturnValue;            // 0x5D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetVSyncEnabled_ReturnValue;              // 0x5D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_24;      // 0x5D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_23;      // 0x5D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_7;        // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_10;      // 0x5DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_17;           // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_8;            // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_16;           // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          K2Node_Select_Default_2;                           // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGrenadeSettings_ReturnValue;          // 0x5ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EShotgunReloadType                K2Node_Select_Default_3;                           // 0x5EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_22;      // 0x5EF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShotgunSettings_ReturnValue;          // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_21;      // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHitmarkerSfxEnabled_ReturnValue;      // 0x611(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_8;                         // 0x628(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_15;           // 0x634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character_1;           // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemSelectionInterfaceType       K2Node_Select_Default_4;                           // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_20;      // 0x64A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_9;            // 0x64B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveItemSelectionStyleSettings_ReturnValue; // 0x64C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_6;        // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_9;       // 0x654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_5;        // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_8;       // 0x65C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDLSSEnabled_ReturnValue;                // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_2;      // 0x664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_7;       // 0x668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetDlssQuality_ReturnValue;               // 0x66C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_14;           // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_1;      // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_6;       // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHUDSettings_ReturnValue_10;           // 0x67C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveTeamViewSetting_ReturnValue;          // 0x67D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_13;           // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               K2Node_Select_Default_5;                           // 0x684(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveEmptyMagReloadSettings_ReturnValue;   // 0x685(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            K2Node_MakeArray_Array_1;                          // 0x688(0x10)(ReferenceParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          K2Node_MakeArray_Array_2;                          // 0x6A0(0x10)(ReferenceParm)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_2;                     // 0x6B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_2;             // 0x6B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_3;                     // 0x6C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_3;             // 0x6C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_2;                 // 0x6D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0x6D8(0x18)(None)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_1;                 // 0x6F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;     // 0x6F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_BindConflictModal_C*                K2Node_DynamicCast_AsW_Bind_Conflict_Modal;        // 0x700(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        K2Node_CustomEvent_CallingModal;                   // 0x710(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x718(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x71C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_12;           // 0x724(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_19;      // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowHealthIconSetting_ReturnValue;    // 0x729(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EScoreReadoutMode                 K2Node_Select_Default_6;                           // 0x72A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_18;      // 0x72B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveScoreReadoutSetting_ReturnValue;      // 0x72C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHotkeyHintSetting_ReturnValue;        // 0x72D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3401[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_11;           // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultCommand;       // 0x734(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand; // 0x735(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand; // 0x736(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand; // 0x737(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand; // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommands_ReturnValue;          // 0x739(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3406[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_10;           // 0x73C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_7;                           // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultCommand_ReturnValue;           // 0x741(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_8;                           // 0x742(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultCommand_1;     // 0x743(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_1; // 0x744(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_1; // 0x745(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_1; // 0x746(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_1; // 0x747(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommands_ReturnValue_1;        // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3408[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_9;            // 0x74C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultCommand_ReturnValue_1;         // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultCommand_2;     // 0x751(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_2; // 0x752(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_2; // 0x753(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_2; // 0x754(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_2; // 0x755(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommands_ReturnValue_2;        // 0x756(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_9;                           // 0x757(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_8;            // 0x758(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultCommand_ReturnValue_2;         // 0x75C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultCommand_3;     // 0x75D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_3; // 0x75E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_3; // 0x75F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_3; // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_3; // 0x761(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommands_ReturnValue_3;        // 0x762(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_10;                          // 0x763(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_7;            // 0x764(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultCommand_ReturnValue_3;         // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultCommand_4;     // 0x769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnknownCommand_4; // 0x76A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorOpenCommand_4; // 0x76B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorLockedCommand_4; // 0x76C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultCommands_DefaultDoorUnlockedCommand_4; // 0x76D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommands_ReturnValue_4;        // 0x76E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_340E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_6;            // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption; // 0x774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption; // 0x778(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption; // 0x77C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption; // 0x780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption; // 0x784(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue;  // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveDefaultCommandAsOption_ReturnValue;   // 0x789(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_11;                          // 0x78A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3412[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultCommand_ReturnValue_4;         // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x791(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3414[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_1; // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_1; // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_1; // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_1; // 0x7A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_1; // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue_1; // 0x7AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3415[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_2; // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_2; // 0x7B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_2; // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_2; // 0x7BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_2; // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue_2; // 0x7C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveDefaultCommandAsOption_ReturnValue_1; // 0x7C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveDefaultCommandAsOption_ReturnValue_2; // 0x7C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3417[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_3; // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_3; // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_3; // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_3; // 0x7D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_3; // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue_3; // 0x7DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3419[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultCommandOption_4; // 0x7E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnknownCommandOption_4; // 0x7E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorOpenCommandOption_4; // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorLockedCommandOption_4; // 0x7EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultCommandsAsOption_DefaultDoorUnlockedCommandOption_4; // 0x7F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultCommandsAsOption_ReturnValue_4; // 0x7F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveDefaultCommandAsOption_ReturnValue_3; // 0x7F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveDefaultCommandAsOption_ReturnValue_4; // 0x7F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_18;              // 0x7F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_17;              // 0x800(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_16;              // 0x808(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_15;              // 0x810(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_14;              // 0x818(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_13;              // 0x820(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_12;              // 0x828(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_11;              // 0x830(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_10;              // 0x838(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_9;               // 0x840(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_8;               // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_7;               // 0x850(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_6;               // 0x858(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_17;      // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowPlayerIconSetting_ReturnValue;    // 0x861(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3420[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x870(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3424[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_9;                         // 0x878(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_16;      // 0x880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowHesitationBarSetting_ReturnValue; // 0x881(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3426[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_5;            // 0x884(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_5;               // 0x888(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 K2Node_Select_Default_12;                          // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3428[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x898(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveOptiwandViewMode_ReturnValue;         // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_15;      // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveKeybinds_ReturnValue_1;               // 0x8A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowTeamStatus_ReturnValue;           // 0x8A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_14;      // 0x8A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_13;      // 0x8A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowCommandContextHintSetting_ReturnValue; // 0x8A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveZoomADSSetting_ReturnValue;           // 0x8A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_12;      // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_11;      // 0x8A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetBounceLightEnabled_ReturnValue;        // 0x8AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFlashlightShadows_ReturnValue;         // 0x8AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFSRQuality_ReturnValue;                // 0x8AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_342F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue;        // 0x8B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_5;       // 0x8B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetDlssQuality_ReturnValue_1;             // 0x8B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFSRQuality_ReturnValue_1;              // 0x8B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3431[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_4;        // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_4;       // 0x8C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption_4;            // 0x8C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMicInputGain_ReturnValue;              // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentOptionAsString_OptionAsString;  // 0x8D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_3;        // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_3;       // 0x8EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetInputAudioDevice_ReturnValue;          // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorResolutionScale_ReturnValue;    // 0x8F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3433[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x8F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue_1;  // 0x900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDiscordOneTimeUseCode_ReturnValue;     // 0x910(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetID_UniqueNetId;               // 0x920(0x20)(None)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_10;      // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x948(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveServersideChecksum_ReturnValue;       // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x960(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x970(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x978(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x988(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x9A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue_2;  // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue_3;  // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_9;       // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorAntiAliasEnabled_ReturnValue;   // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x9C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_8;       // 0x9C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorDecalsEnabled_ReturnValue;      // 0x9C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_7;       // 0x9C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_6;       // 0x9C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorDynamicShadowsEnabled_ReturnValue; // 0x9C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadPiPFPS_bEnabled;                      // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3438[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS;                           // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue;                   // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SavePiPFPS_ReturnValue;                   // 0x9D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_5;       // 0x9D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadTeamViewFPSSetting_bEnabled;          // 0x9D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;       // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_ReturnValue;       // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveTeamViewSetting_ReturnValue_1;        // 0x9D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_4;       // 0x9DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3439[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_2;        // 0x9DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_2;       // 0x9E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_1;        // 0x9E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_1;       // 0x9E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_bEnabled;           // 0x9EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDecalsEnabled_FadeDistance;       // 0x9F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDecalsEnabled_Density;            // 0x9F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_ReturnValue;        // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetWorldDecalsEnabled_bEnabled_1;         // 0x9F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDecalsEnabled_FadeDistance_1;     // 0x9FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDecalsEnabled_Density_1;          // 0xA00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_ReturnValue_1;      // 0xA04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetWorldDecalEnabled_ReturnValue;         // 0xA05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetWorldDecalEnabled_ReturnValue_1;       // 0xA06(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetWorldDecalsEnabled_bEnabled_2;         // 0xA07(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetWorldDecalsEnabled_FadeDistance_2;     // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDecalsEnabled_Density_2;          // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_ReturnValue_2;      // 0xA10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetWorldDecalEnabled_ReturnValue_2;       // 0xA11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue_4;  // 0xA18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNvidiaReflexEnabled_ReturnValue;        // 0xA20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_3;            // 0xA24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_3;       // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xA29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_2;       // 0xA2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_1;       // 0xA2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled; // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled; // 0xA2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled; // 0xA2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_ReturnValue;      // 0xA2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_1; // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_1; // 0xA31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_1; // 0xA32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_ReturnValue_1;    // 0xA33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexLatencyOptions_ReturnValue;      // 0xA34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexLatencyOptions_ReturnValue_1;    // 0xA35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled_2; // 0xA36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled_2; // 0xA37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled_2; // 0xA38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_ReturnValue_2;    // 0xA39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadPiPFPS_bEnabled_1;                    // 0xA3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS_1;                         // 0xA3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue_1;                 // 0xA40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexLatencyOptions_ReturnValue_2;    // 0xA41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SavePiPFPS_ReturnValue_1;                 // 0xA42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3440[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_2;            // 0xA44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetReflexEnabled_ReturnValue;             // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_8;                // 0xA4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorEnabledOnlyInLobby_ReturnValue; // 0xA4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveMirrorReflectionEnabled_ReturnValue;  // 0xA4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexEnabled_ReturnValue_1;           // 0xA4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexEnabled_ReturnValue_2;           // 0xA4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3444[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_1;            // 0xA50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3445[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0xA58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         K2Node_Select_Default_13;                          // 0xA60(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0xA68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveNVGStyle_ReturnValue;                 // 0xA70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3448[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue;          // 0xA74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue;         // 0xA78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0xA7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3449[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xA80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSendMapStatistics_ReturnValue;         // 0xA84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_344A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0xA88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               CallFunc_GetRONGameInstance_ReturnValue;           // 0xA90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReplaySystemEnabled_ReturnValue;        // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


