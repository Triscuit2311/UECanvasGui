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

// 0x9 (0x9 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenAccessibilityOptions
struct UW_SettingsMenuGamepad_C_OpenAccessibilityOptions_Params
{
public:
	class FName                                  CallFunc_GetCurrentNavSelection_SelectedNavOption; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenControlOptions
struct UW_SettingsMenuGamepad_C_OpenControlOptions_Params
{
public:
	class FName                                  CallFunc_GetCurrentNavSelection_SelectedNavOption; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenAudioOptions
struct UW_SettingsMenuGamepad_C_OpenAudioOptions_Params
{
public:
	class FName                                  CallFunc_GetCurrentNavSelection_SelectedNavOption; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenGraphicsOptions
struct UW_SettingsMenuGamepad_C_OpenGraphicsOptions_Params
{
public:
	class FName                                  CallFunc_GetCurrentNavSelection_SelectedNavOption; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OpenGameOptions
struct UW_SettingsMenuGamepad_C_OpenGameOptions_Params
{
public:
	class FName                                  CallFunc_GetCurrentNavSelection_SelectedNavOption; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ToggleApplyButton
struct UW_SettingsMenuGamepad_C_ToggleApplyButton_Params
{
public:
	bool                                         ShowApply;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ToggleResetButton
struct UW_SettingsMenuGamepad_C_ToggleResetButton_Params
{
public:
	bool                                         ShowReset;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateSubtitleLocales
struct UW_SettingsMenuGamepad_C_PopulateSubtitleLocales_Params
{
public:
	class UW_CommonCarousel_C*                   Carousel;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FText>             CallFunc_GetAvailableLocales_ReturnValue;          // 0x8(0x50)(ConstParm)
	TArray<class FText>                          CallFunc_Map_Values_Values;                        // 0x58(0x10)(ReferenceParm)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x68(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BP_OnHandleBackAction
struct UW_SettingsMenuGamepad_C_BP_OnHandleBackAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateAccessibilitySettings
struct UW_SettingsMenuGamepad_C_PopulateAccessibilitySettings_Params
{
public:
	enum class EColorVisionDeficiency            Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts; // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadWorldSpaceActionPrompts_ReturnValue;  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHighlightWeapons_bHighlightWeapons;   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHighlightWeapons_ReturnValue;         // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorVisionDeficiency            CallFunc_LoadColorblindMode_ColorVisionDeficiency; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadColorblindMode_ReturnValue;           // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadColorblindStrength_ColorblindStrength; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadColorblindStrength_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnPreviewKeyDown
struct UW_SettingsMenuGamepad_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x148(0xB8)(None)
};

// 0x5A (0x5A - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Add To Control Binds Lists
struct UW_SettingsMenuGamepad_C_Add_To_Control_Binds_Lists_Params
{
public:
	class UW_ControlsBind_C*                     ControlBInd;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAxisMappingStruct                    InputAxis;                                         // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActionMappingStruct                  InputAction;                                       // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Initialise Or Get Pop Up
struct UW_SettingsMenuGamepad_C_Initialise_Or_Get_Pop_Up_Params
{
public:
	class UClass*                                PopUpType;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSStandardModalDetails                ModalDetails;                                      // 0x8(0x71)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_31CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        OutputPopUp;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        TempPopUp;                                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PopupClass;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStandardModal*>                CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UStandardModal*                        CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x321 (0x321 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.GetConflictingKeybindListText
struct UW_SettingsMenuGamepad_C_GetConflictingKeybindListText_Params
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
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xF0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x130(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x150(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1C0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x200(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x210(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x238(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x250(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_2;                         // 0x290(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x2B0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x2F8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x308(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x148 (0x148 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.GetConflictingKeybindText
struct UW_SettingsMenuGamepad_C_GetConflictingKeybindText_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FAxisMappingStruct>            ConflictingAxes;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          ConflictingActions;                                // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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

// 0x50 (0x50 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.TryAssignUnbindableControl
struct UW_SettingsMenuGamepad_C_TryAssignUnbindableControl_Params
{
public:
	struct FKeyBinding                           KeyBinding;                                        // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CannotBeUnbindable;                                // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x114 (0x114 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.InitGraphicsPreset
struct UW_SettingsMenuGamepad_C_InitGraphicsPreset_Params
{
public:
	struct FSGraphicPreset                       CurrentPresetCandidate;                            // 0x0(0x32)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMotionBlurStrength_Strength;           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_LoadPiPResolutionScale_ResolutionScale;   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPResolutionScale_ReturnValue;       // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadPiPFPS_bEnabled;                      // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue;                   // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRaytracingSettings_bRTXEnabled;        // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled; // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXShadowsEnabled; // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled; // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXGlobalIllumination; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXTranslucency;   // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_ReturnValue;        // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_bUseMeshPainting;      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_ReturnValue;           // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_bDoFEnabled;       // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_ReturnValue;       // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSGraphicPreset                       CallFunc_Array_Get_Item;                           // 0x70(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetVideoQualitySettings_AntiAliasing;     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Effects;          // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_PostProcess;      // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVideoQualitySettings_ResolutionScaling; // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Shadow;           // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_Texture;          // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVideoQualitySettings_ViewDistance;     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVideoQualitySettings_ReturnValue;      // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xCE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xCF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSGraphicPreset                       K2Node_MakeStruct_SGraphicPreset;                  // 0xE0(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x85E (0x85E - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SetGamepadButtonPrompts
struct UW_SettingsMenuGamepad_C_SetGamepadButtonPrompts_Params
{
public:
	struct FRonInputKeyGamePadIconTable          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31FE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRonInputKeyGamePadIconTable          CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x120(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3200[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRonInputKeyGamePadIconTable          CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x240(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3201[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRonInputKeyGamePadIconTable          CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x360(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3203[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRonInputKeyGamePadIconTable          CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x480(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x599(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x59A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3204[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x5A0(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0x628(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x6B0(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default_3;                           // 0x738(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default_4;                           // 0x7C0(0x88)(None)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x848(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x859(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x85A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x85B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x85C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x85D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SwitchControlsTab
struct UW_SettingsMenuGamepad_C_SwitchControlsTab_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               MenuWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulatePCGraphics
struct UW_SettingsMenuGamepad_C_PopulatePCGraphics_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDepthOfFieldSetting_bDoFEnabled;       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDepthOfFieldSetting_ReturnValue;       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_bUseMeshPainting;      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseMeshpainting_ReturnValue;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneX;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSafeZoneSettings_SafeZoneY;           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSafeZoneSettings_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXEnabled;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled; // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXShadowsEnabled; // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXGlobalIllumination; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_bRTXTranslucency;   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetRaytracingSettings_ReturnValue;        // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ViewDistance;      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetEffectsQuality_Effects;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEffectsQuality_ReturnValue;            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3218[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAntiAliasingQuality_AntiAliasing;      // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3219[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPostProcessQuality_PostProcess;        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPostProcessQuality_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetShadowQuality_Shadow;                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTextureQuality_Texture;                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTextureQuality_ReturnValue;            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetResolutionScaling_ResolutionScaling;   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetResolutionScaling_ReturnValue;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetReflexEnabled_ReflexMode;              // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetReflexEnabled_bFlashIndicatorEnabled;  // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexEnabled_ReturnValue;             // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled; // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled; // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled; // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetReflexLatencyOptions_ReturnValue;      // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDlssQuality_Quality;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDlssQuality_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFSRQuality_Quality;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFSRQuality_ReturnValue;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPResolutionScale_ResolutionScale;   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPResolutionScale_ReturnValue;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_bEnabled;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3220[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LoadPiPFPS_FPS;                           // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadPiPFPS_ReturnValue;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3221[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_bEnabled;           // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3222[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDecalsEnabled_FadeDistance;       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDecalsEnabled_Density;            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWorldDecalsEnabled_ReturnValue;        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3223[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInterfaceAspectRatio_OutAspectRatio;   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInterfaceAspectRatio_ReturnValue;      // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3224[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetBounceLightEnabled_bBounceLightEnabled; // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetBounceLightEnabled_ReturnValue;        // 0xCE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0xCF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3226[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMotionBlurStrength_Strength;           // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue;        // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3227[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_2;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue_1;              // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue_2;              // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_3;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         CallFunc_LoadNVGStyle_NVGStyle;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadNVGStyle_ReturnValue;                 // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadZoomADSSetting_bZoomADS;              // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadZoomADSSetting_ReturnValue;           // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetFoV_FOV;                               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFoV_ReturnValue;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_322A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetIntegralValue_NewValue_3;              // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_4;                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentScreenResolution_ReturnValue;   // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetCurrentScreenMode_ReturnValue;         // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGamepadControls
struct UW_SettingsMenuGamepad_C_PopulateGamepadControls_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3230[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadControlScheme_UsingAlternateControls; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadControlScheme_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3232[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_Select_Default_1;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadTogglePS5Gyro_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHoldCrouch_HoldCrouch;                // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHoldCrouch_ReturnValue;               // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetGamepadInverted_bInvertVertical;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetGamepadInverted_bInvertHorizontal;     // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetGamepadInverted_ReturnValue;           // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3233[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGamepadAimSensitivity_GamepadAimSensitivity; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadAimSensitivity_ReturnValue;     // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3234[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGamepadLookSensitivity_GamepadLookSensitivity; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadLookSensitivity_ReturnValue;    // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadToggleADS_ToggleADS;                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadToggleADS_ReturnValue;                // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3235[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.StageGraphicsPreset
struct UW_SettingsMenuGamepad_C_StageGraphicsPreset_Params
{
public:
	struct FSGraphicPreset                       Preset;                                            // 0x0(0x32)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMotionBlurStrength_Strength;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlurStrength_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFrameRateLimit_FrameRateLimit;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameRateLimit_bEnabled;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFrameRateLimit_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_bEnabled;                 // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetVSyncEnabled_ReturnValue;              // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_2;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetIntegralValue_NewValue_1;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x210 (0x210 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnKeyDown
struct UW_SettingsMenuGamepad_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_323F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_Button_C*>                   K2Node_MakeArray_Array;                            // 0x148(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x158(0xB8)(None)
};

// 0xFC (0xFC - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateAudioSettings
struct UW_SettingsMenuGamepad_C_PopulateAudioSettings_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_LoadSubtitlesLocale_SubtitlesLocale;      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSubtitlesLocale_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3257[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed;        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSubtitlesSpeed_ReturnValue;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3259[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_325A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubtitlesSize                    CallFunc_LoadSubtitlesSize_SubtitlesSize;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSubtitlesSize_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadSubtitlesEnabled_bEnableSubtitles;    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadSubtitlesEnabled_ReturnValue;         // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        CallFunc_GetVoiceType_OutVoiceType;                // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVoiceType_ReturnValue;                 // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_325B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMicInputGain_MicInputGain;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMicInputGain_ReturnValue;              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_325C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetVolumes_MasterVolume;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_UIVolume;                      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_SFXVolume;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_MusicVolume;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetVolumes_VOIPVolume;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVolumes_ReturnValue;                   // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        Temp_byte_Variable;                                // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LoadSelectedAudioDevice_OutAudioDevice;   // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSelectedAudioDevice_ReturnValue;      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3260[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetAvailableAudioDevices_OutAudioDevices; // 0x98(0x10)(ReferenceParm)
	bool                                         CallFunc_GetAvailableAudioDevices_ReturnValue;     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3262[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_2;                 // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_3;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_4;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_5;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_6;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatValue_NewValue_7;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGamepadGraphics
struct UW_SettingsMenuGamepad_C_PopulateGamepadGraphics_Params
{
public:
	enum class ENVGStyle                         Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBounceLightEnabled_bBounceLightEnabled; // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetBounceLightEnabled_ReturnValue;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_bEnabled;            // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMotionBlurEnabled_ReturnValue;         // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetFoV_FOV;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFoV_ReturnValue;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3270[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         CallFunc_LoadNVGStyle_NVGStyle;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadNVGStyle_ReturnValue;                 // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3272[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10E (0x10E - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.PopulateGameSettings
struct UW_SettingsMenuGamepad_C_PopulateGameSettings_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3283[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3284[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_4;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3286[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_6;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 Temp_byte_Variable_2;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3287[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_8;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_9;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_3;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3288[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_10;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_11;                              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_12;                              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_13;                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3289[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSendMapStatistics_bSendMapStatistics;  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSendMapStatistics_ReturnValue;         // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadServersideChecksum_bServerSideChecksumEnabled; // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadServersideChecksum_ReturnValue;       // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetFreelookSensitivity_Sensitivity;       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFreelookSensitivity_ReturnValue;       // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMouseSensitivity_MouseSensitvity;      // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseSensitivity_ReturnValue;          // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand; // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorLockedCommand_ReturnValue; // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetFloatValue_NewValue_1;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand; // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex; // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue; // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand; // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3291[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex; // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorOpenCommand_ReturnValue;   // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand; // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3293[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex; // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue; // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      CallFunc_LoadDefaultSurfaceCommand_DefaultCommand; // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3294[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultSurfaceCommand_ReturnValue;    // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EShotgunReloadType                CallFunc_LoadShotgunSettings_ShotgunReloadType;    // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShotgunSettings_ReturnValue;          // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGrenadeThrowSettingType          CallFunc_LoadGrenadeSettings_GrenadeThrowType;     // 0xA7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadGrenadeSettings_ReturnValue;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadLowReadyStyle_bUseHighReady;          // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadLowReadyStyle_ReturnValue;            // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3295[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_bEnabled;          // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3297[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_ReturnValue;       // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3299[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SetIntegralValue_NewValue;                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_4;                              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_2;                           // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       CallFunc_LoadItemSelectionStyleSettings_ItemSelectionInterface; // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadItemSelectionStyleSettings_ReturnValue; // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_3;                           // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint; // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_ReturnValue; // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;    // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadHotkeyHintSetting_ReturnValue;        // 0xD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_bShowHealthIcons; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHealthIconSetting_ReturnValue;    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCompass_bShowCompass;             // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowCompass_ReturnValue;              // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Load2DReload_b2DReload;                   // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Load2DReload_ReturnValue;                 // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames; // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowMultiplayerNames_ReturnValue;     // 0xDF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowChat_bShowChat;                   // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowChat_ReturnValue;                 // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowTeamStatus_bShowTeamStatus;       // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowTeamStatus_ReturnValue;           // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadSwayHUD_bSwayHUD;                     // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadSwayHUD_ReturnValue;                  // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EOptiwandViewMode                 CallFunc_LoadOptiwandViewMode_OptiwandViewMode;    // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadOptiwandViewMode_ReturnValue;         // 0xE7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Select_Default_4;                           // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode; // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadScoreReadoutSetting_ReturnValue;      // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_5;                           // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowHUD_bShowHud;                     // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadShowHUD_ReturnValue;                  // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowFPS_bShowFPS;                      // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.SwitchTab
struct UW_SettingsMenuGamepad_C_SwitchTab_Params
{
public:
	class UCommonActivatableWidget*              MenuWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tab_Name;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bShowResetButton;                                  // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShowApplyButton;                                  // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LanguageSelection_K2Node_ComponentBoundEvent_6_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_4_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_5_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ItemSelectionStyle_K2Node_ComponentBoundEvent_16_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_19_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_21_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_22_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_23_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_24_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Gamepad_NVGStyle_K2Node_ComponentBoundEvent_26_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Gamepad_FOV_K2Node_ComponentBoundEvent_33_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Combo_InputAudioDevice_1_K2Node_ComponentBoundEvent_39_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature_Params
{
public:
	class FString                                NewResolutionValue;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewQualityValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsMisc_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsTeamwork_K2Node_ComponentBoundEvent_99_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsMovement_K2Node_ComponentBoundEvent_100_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsInteraction_K2Node_ComponentBoundEvent_101_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsEquipment_K2Node_ComponentBoundEvent_102_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__btn_ControlsVehicle_K2Node_ComponentBoundEvent_107_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_btn_ControlsReplay_K2Node_ComponentBoundEvent_120_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.AddControlsToGridPanel
struct UW_SettingsMenuGamepad_C_AddControlsToGridPanel_Params
{
public:
	TArray<struct FKeyBinding>                   Bindings;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGridPanel*                            GridPanel;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Started
struct UW_SettingsMenuGamepad_C_On_Binding_Started_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Canceled
struct UW_SettingsMenuGamepad_C_On_Binding_Canceled_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.On Binding Committed
struct UW_SettingsMenuGamepad_C_On_Binding_Committed_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Detected
struct UW_SettingsMenuGamepad_C_Conflicting_Bind_Detected_Params
{
public:
	class UW_ControlsBind_C*                     CallingBind;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                  Key;                                               // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FText>                          ConflictBindsText;                                 // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Ok Clicked
struct UW_SettingsMenuGamepad_C_Conflicting_Bind_Ok_Clicked_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.Conflicting Bind Cancel Clicked
struct UW_SettingsMenuGamepad_C_Conflicting_Bind_Cancel_Clicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnCancelIllegalBindClicked
struct UW_SettingsMenuGamepad_C_OnCancelIllegalBindClicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_32_OnOkClicked__DelegateSignature_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_33_OnCancelClicked__DelegateSignature_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__VideoOptionsModal_K2Node_ComponentBoundEvent_34_OnApplyClicked__DelegateSignature_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature_Params
{
public:
	int32                                        NewIntegerValue;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_81_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_93_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_40_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_41_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_51_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_18_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.OnAddedToFocusPath
struct UW_SettingsMenuGamepad_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_65_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature_Params
{
public:
	float                                        NewFloatValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSliderValue;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesSize_1_K2Node_ComponentBoundEvent_68_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ServersideChecksum_K2Node_ComponentBoundEvent_89_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_Options_LowReadyStyle_K2Node_ComponentBoundEvent_108_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_selector_Language_K2Node_ComponentBoundEvent_13_OptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature
struct UW_SettingsMenuGamepad_C_BndEvt__W_SettingsMenuGamepad_selector_ScoreReadout_K2Node_ComponentBoundEvent_31_OptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.LanguageCancelClicked
struct UW_SettingsMenuGamepad_C_LanguageCancelClicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.LanguageOkClicked
struct UW_SettingsMenuGamepad_C_LanguageOkClicked_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA4C (0xA4C - 0x0)
// Function W_SettingsMenuGamepad.W_SettingsMenuGamepad_C.ExecuteUbergraph_W_SettingsMenuGamepad
struct UW_SettingsMenuGamepad_C_ExecuteUbergraph_W_SettingsMenuGamepad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_3;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_4;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_5;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_6;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_7;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_8;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_9;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_10;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_11;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_12;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_13;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_14;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorVisionDeficiency            Temp_byte_Variable_15;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorVisionDeficiency            Temp_byte_Variable_16;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorVisionDeficiency            Temp_byte_Variable_17;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorVisionDeficiency            Temp_byte_Variable_18;                             // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_19;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_20;                             // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_21;                             // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_22;                             // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_23;                             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_24;                             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_25;                             // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_26;                             // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_27;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_28;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_29;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_30;                             // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_31;                             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3370[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_5;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_5;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3372[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_7;                               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_32;                             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       Temp_byte_Variable_33;                             // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3373[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_8;                               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 Temp_byte_Variable_34;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 Temp_byte_Variable_35;                             // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3375[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_9;                               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_36;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_37;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_38;                             // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_39;                             // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3376[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x9C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_40;                             // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3379[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_10;                              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_11;                              // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_46;      // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_45;      // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetShowFPS_ReturnValue;                   // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowHUD_ReturnValue;                  // 0xDF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Index_24;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_23;               // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_22;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 K2Node_Select_Default;                             // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOptiwandViewMode                 K2Node_Select_Default_1;                           // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveScoreReadoutSetting_ReturnValue;      // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveOptiwandViewMode_ReturnValue;         // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_44;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_43;      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveSwayHUD_ReturnValue;                  // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowTeamStatus_ReturnValue;           // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_42;      // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_41;      // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowChat_ReturnValue;                 // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowMultiplayerNames_ReturnValue;     // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_40;      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_39;      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Save2DReload_ReturnValue;                 // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowCompass_ReturnValue;              // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_38;      // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_37;      // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowHealthIconSetting_ReturnValue;    // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHotkeyHintSetting_ReturnValue;        // 0xFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_36;      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_21;               // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowCommandContextHintSetting_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_20;               // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemSelectionInterfaceType       K2Node_Select_Default_2;                           // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveItemSelectionStyleSettings_ReturnValue; // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_19;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_18;               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_17;               // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_3;                           // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultSurfaceCommand_ReturnValue;    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_4;                           // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3380[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_16;               // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue; // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3381[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_15;               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_5;                           // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorOpenCommand_ReturnValue;   // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_6;                           // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3383[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_14;               // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue; // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESwatCommand                      K2Node_Select_Default_7;                           // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorLockedCommand_ReturnValue; // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3384[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_11;              // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_10;              // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_13;               // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_35;      // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_34;      // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveNVGStyle_ReturnValue;                 // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFoV_ReturnValue;                       // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMotionBlurEnabled_ReturnValue;         // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3386[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetBounceLightEnabled_ReturnValue;        // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3388[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_6;      // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_33;      // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_19;       // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_32;      // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveMasterVolume_ReturnValue;             // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_18;       // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_31;      // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveSFXVolume_ReturnValue;                // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_17;       // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_30;      // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveUIVolume_ReturnValue;                 // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_16;       // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_29;      // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveMusicVolume_ReturnValue;              // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_15;       // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_28;      // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveVOIPVolume_ReturnValue;               // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        Temp_byte_Variable_41;                             // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption_1;            // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_14;       // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_27;      // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMicInputGain_ReturnValue;              // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3391[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_NewResolutionValue;     // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_26;      // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_5;      // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_25;      // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_5;      // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_24;      // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3392[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_4;      // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_23;      // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3393[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_3;      // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_22;      // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3396[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_2;      // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_21;      // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3398[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue_1;      // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_20;      // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_3;              // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_4;              // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewQualityValue;        // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_19;      // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_4;      // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_18;      // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_5;              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_13;       // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_17;      // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceType                        Temp_byte_Variable_42;                             // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_12;                              // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_43;                             // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_44;                             // 0x24D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_13;                              // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_12;       // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_16;      // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_3;      // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_15;      // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x268(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable_45;                             // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x27B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x27D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_33;      // 0x27E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_32;      // 0x27F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_31;      // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_30;      // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveToggleADS_ReturnValue;                // 0x282(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHoldCrouch_ReturnValue;               // 0x283(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_9;               // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_8;               // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_7;               // 0x298(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_6;               // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_5;               // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x2B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKeyBinding>                   K2Node_CustomEvent_Bindings;                       // 0x2C0(0x10)(ConstParm, ReferenceParm)
	class UGridPanel*                            K2Node_CustomEvent_GridPanel;                      // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeyBinding                           CallFunc_Array_Get_Item;                           // 0x2D8(0x48)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryAssignUnbindableControl_bSuccess;      // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryAssignUnbindableControl_bSuccess_1;    // 0x326(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ENVGStyle                         Temp_byte_Variable_46;                             // 0x327(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x330(0x18)(ConstParm)
	int32                                        Temp_int_Variable_14;                              // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_47;                             // 0x34C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_48;                             // 0x34D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_49;                             // 0x34E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_15;                              // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_1;                     // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_2;                     // 0x368(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue;               // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_1;             // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x380(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x390(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x3A0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3B0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x3C0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	class UW_ControlsResetBinding_C*             CallFunc_Create_ReturnValue_3;                     // 0x3E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_2;             // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_2;                // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x3F8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x410(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x420(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x43C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_1;                         // 0x440(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsBind_C*>             K2Node_MakeArray_Array;                            // 0x448(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FAxisMappingStruct>            K2Node_MakeArray_Array_1;                          // 0x458(0x10)(ReferenceParm)
	TArray<struct FActionMappingStruct>          K2Node_MakeArray_Array_2;                          // 0x468(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_1;                // 0x480(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x488(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;      // 0x498(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;      // 0x4B0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;      // 0x4C0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_2;                         // 0x4D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x4E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget;                  // 0x4F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_CustomEvent_NewKey;                         // 0x4F8(0x18)(HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingBind;                    // 0x510(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          K2Node_CustomEvent_ActionMappings;                 // 0x518(0x10)(ReferenceParm)
	TArray<struct FAxisMappingStruct>            K2Node_CustomEvent_AxisMappings;                   // 0x528(0x10)(ReferenceParm)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x538(0x18)(HasGetValueTypeHash)
	TArray<class FText>                          K2Node_CustomEvent_ConflictBindsText;              // 0x550(0x10)(ReferenceParm)
	class FText                                  Temp_text_Variable_1;                              // 0x560(0x18)(ConstParm)
	class FText                                  CallFunc_GetConflictingKeybindText_Text;           // 0x578(0x18)(None)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_4;                 // 0x590(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_1;                    // 0x598(0x18)(None)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_3;                 // 0x5B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;     // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1;   // 0x5C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_BindConflictModal_C*                K2Node_DynamicCast_AsW_Bind_Conflict_Modal;        // 0x5C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_IllegalUnbindModal_C*               K2Node_DynamicCast_AsW_Illegal_Unbind_Modal;       // 0x5D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_2;                 // 0x5E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_3;                         // 0x5F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_ComponentBoundEvent_CallingModal_2;         // 0x610(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_TextEntry_1;            // 0x618(0x18)(None)
	class UStandardModal*                        K2Node_ComponentBoundEvent_CallingModal_1;         // 0x630(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_ComponentBoundEvent_CallingModal;           // 0x638(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_TextEntry;              // 0x640(0x18)(None)
	class FString                                CallFunc_Split_LeftS;                              // 0x658(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x668(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_6;             // 0x679(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x67C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_6;              // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ChangeScreenResolution_ReturnValue;       // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFoV_ReturnValue_1;                     // 0x689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetScreenResolution_ReturnValue;          // 0x68A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetRaytracingSettings_ReturnValue;        // 0x68B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMotionBlurStrength_ReturnValue;        // 0x68C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMotionBlurEnabled_ReturnValue_1;       // 0x68D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFrameRateLimit_ReturnValue;            // 0x68E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetVSyncEnabled_ReturnValue;              // 0x68F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SavePiPResolutionScale_ReturnValue;       // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x694(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x698(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SavePiPFPS_ReturnValue;                   // 0x69C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x6AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x6B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetVideoQualitySettings_ReturnValue;      // 0x6B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetReflexLatencyOptions_ReturnValue;      // 0x6B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadTeamViewFPSSetting_bEnabled;          // 0x6B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;       // 0x6B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadTeamViewFPSSetting_ReturnValue;       // 0x6BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        K2Node_Select_Default_8;                           // 0x6BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_2;      // 0x6C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_14;      // 0x6C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetReflexEnabled_ReturnValue;             // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveTeamViewSetting_ReturnValue;          // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_11;       // 0x6CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_13;      // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_29;      // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x6DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x6E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_28;      // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_27;      // 0x6E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x6EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_10;       // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_12;      // 0x6F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x6FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_9;        // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_11;      // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue_1;      // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_10;      // 0x70C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIntegerValue;        // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_9;       // 0x714(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveZoomADSSetting_ReturnValue;           // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveNVGStyle_ReturnValue_1;               // 0x719(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x720(0x18)(ConstParm)
	bool                                         CallFunc_SetBounceLightEnabled_ReturnValue_1;      // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameInstance*               CallFunc_GetReadyOrNotGameInstance_ReturnValue;    // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_8;        // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_8;       // 0x74C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetWorldDecalEnabled_ReturnValue;         // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x754(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_7;        // 0x758(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_7;       // 0x75C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_4;                         // 0x760(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetDlssQuality_ReturnValue;               // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFSRQuality_ReturnValue;                // 0x769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SettingLabel_C*                     CallFunc_Create_ReturnValue_4;                     // 0x770(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable_50;                             // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_3;             // 0x780(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_26;      // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveShowPlayerIconSetting_ReturnValue;    // 0x789(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_25;      // 0x78A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewOption;              // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowHesitationBarSetting_ReturnValue; // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEmptyMagReloadType               K2Node_Select_Default_9;                           // 0x791(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveEmptyMagReloadSettings_ReturnValue;   // 0x792(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_6;        // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_6;       // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_5;        // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_5;       // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMouseSensitivity_ReturnValue;          // 0x7A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFreelookSensitivity_ReturnValue;       // 0x7A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x7A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x7A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_12;               // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInverted_bInvertVertical;       // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetGamepadInverted_bInvertHorizontal;     // 0x7B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetGamepadInverted_ReturnValue;           // 0x7B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamepadInverted_ReturnValue;           // 0x7B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVoiceType                        K2Node_Select_Default_10;                          // 0x7B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadInverted_ReturnValue_1;         // 0x7B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         Temp_byte_Variable_51;                             // 0x7BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_5;                         // 0x7C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_4;        // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_4;       // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_3;        // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_3;       // 0x7D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadLookSensitivity_ReturnValue;    // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamepadAimSensitivity_ReturnValue;     // 0x7D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_16;                              // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         K2Node_Select_Default_11;                          // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_KeyDisplay_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets_6;      // 0x7E8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x7F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3400[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_KeyDisplay_C*                       CallFunc_Array_Get_Item_6;                         // 0x800(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x808(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3403[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x80C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x814(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3404[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveKeybinds_ReturnValue;                 // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3405[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           K2Node_DynamicCast_AsReady_or_Not_Player_Controller; // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetFSRQuality_ReturnValue_1;              // 0x831(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetDlssQuality_ReturnValue_1;             // 0x832(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3407[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_2;        // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_2;       // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveColorblindMode_ReturnValue;           // 0x83C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveColorblindStrength_ReturnValue;       // 0x83D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveColorblindMode_ReturnValue_1;         // 0x83E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveColorblindMode_ReturnValue_2;         // 0x83F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveColorblindMode_ReturnValue_3;         // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EColorVisionDeficiency            K2Node_Select_Default_12;                          // 0x841(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_24;      // 0x842(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_23;      // 0x843(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMouseInverted_ReturnValue;             // 0x844(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetMouseInverted_ReturnValue_1;           // 0x845(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_22;      // 0x846(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_21;      // 0x847(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveTeamViewSetting_ReturnValue_1;        // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_20;      // 0x849(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_19;      // 0x84A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_18;      // 0x84B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_17;      // 0x84C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_16;      // 0x84D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_15;      // 0x84E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_14;      // 0x84F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_13;      // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_12;      // 0x851(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_11;      // 0x852(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_10;      // 0x853(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_9;       // 0x854(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_8;       // 0x855(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_7;       // 0x856(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_6;       // 0x857(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Index_11;               // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSGraphicPreset                       CallFunc_Array_Get_Item_7;                         // 0x85C(0x32)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EShotgunReloadType                Temp_byte_Variable_52;                             // 0x891(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_10;               // 0x894(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_9;                // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_8;                // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENVGStyle                         K2Node_Select_Default_13;                          // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_5;       // 0x8A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveTogglePS5Gyro_ReturnValue;            // 0x8AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveKeybinds_ReturnValue_1;               // 0x8AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_340D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x8B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_8;                  // 0x8C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x8CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_340F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveControlScheme_ReturnValue;            // 0x8D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EShotgunReloadType                Temp_byte_Variable_53;                             // 0x8D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3410[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue_1; // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_8;                   // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3411[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_Button_C*>                   CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x8E8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_8;                         // 0x8F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           CallFunc_Array_Get_Item_9;                         // 0x900(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x908(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_8;                // 0x90C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3413[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x910(0x8)(NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUserFocus_ReturnValue;                 // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_4;       // 0x921(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_3;       // 0x922(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveHighlightWeapons_ReturnValue;         // 0x923(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveSubtitlesEnabled_ReturnValue;         // 0x924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3418[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x928(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewFloatValue_1;        // 0x92C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue_1;       // 0x930(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_7;             // 0x934(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue; // 0x935(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue_7;              // 0x936(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_NewFloatValue;          // 0x938(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_NewSliderValue;         // 0x93C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveSubtitlesSpeed_ReturnValue;           // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveSubtitlesSize_ReturnValue;            // 0x941(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_17;                              // 0x944(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                K2Node_Select_Default_14;                          // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShotgunSettings_ReturnValue;          // 0x94D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x94E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveSubtitlesLocale_ReturnValue;          // 0x94F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_2;       // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveWorldSpaceActionPrompts_ReturnValue;  // 0x951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x954(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_15;                          // 0x958(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetInterfaceAspectRatio_ReturnValue;      // 0x95C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetInterfaceAspectRatio_ReturnValue_1;    // 0x95D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_1;       // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveServersideChecksum_ReturnValue;       // 0x969(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x970(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0x978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3421[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x984(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0x98C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetSendMapStatistics_ReturnValue;         // 0x98D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3423[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3425[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_ButtonID;               // 0x998(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_16;                          // 0x9A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3427[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_OptionNameID;           // 0x9AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveLowReadyStyle_ReturnValue;            // 0x9B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x9B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3429[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_OptionID_1;             // 0x9B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_OptionID;               // 0x9D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x9E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_1;                 // 0x9E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_54;                             // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x9F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          K2Node_Select_Default_17;                          // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGrenadeSettings_ReturnValue;          // 0x9F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_342D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_10;                        // 0xA00(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal;                   // 0xA10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0xA18(0x18)(None)
	bool                                         CallFunc_SetCurrentLanguageAndLocale_ReturnValue;  // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0xA38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xA48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


