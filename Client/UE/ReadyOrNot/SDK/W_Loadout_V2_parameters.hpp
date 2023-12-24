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
// Function W_Loadout_V2.W_Loadout_V2_C.BackPage
struct UW_Loadout_V2_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Overview_V2_C*                      K2Node_DynamicCast_AsW_Overview_V2;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_BackPage_self_CastInput;                  // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BackPage_Handled;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BackPage_Handled_1;                       // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue_1;            // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.GetFocusTarget
struct UW_Loadout_V2_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.AmmoHovered
struct UW_Loadout_V2_C_AmmoHovered_Params
{
public:
	class FName                                  AmmoName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ClosePresetPreview
struct UW_Loadout_V2_C_ClosePresetPreview_Params
{
public:
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_Preset_Preview_C*           K2Node_DynamicCast_AsW_Loadout_Preset_Preview;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_344[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Hide_self_CastInput;                      // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A1 (0x1A1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.PreviewPreset
struct UW_Loadout_V2_C_PreviewPreset_Params
{
public:
	struct FSavedLoadout                         PreviewLoadout;                                    // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_Loadout_Preset_Preview_C*           CallFunc_BP_AddWidget_ReturnValue;                 // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue;              // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_Preset_Preview_C*           K2Node_DynamicCast_AsW_Loadout_Preset_Preview;     // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.PresetModified
struct UW_Loadout_V2_C_PresetModified_Params
{
public:
	bool                                         PresetDirty;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.CancelSavePreset
struct UW_Loadout_V2_C_CancelSavePreset_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1DA (0x1DA - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.DeleteLoadoutPreset
struct UW_Loadout_V2_C_DeleteLoadoutPreset_Params
{
public:
	class UW_StandardModal_C*                    TriggeringModal;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSavedLoadout                         CurrentLoadout;                                    // 0x20(0x188)(Edit, BlueprintVisible)
	class FString                                PresetName;                                        // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Overwriting;                                       // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ConfirmOverwrite;                                  // 0x1B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x281 (0x281 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SaveLoadoutPreset
struct UW_Loadout_V2_C_SaveLoadoutPreset_Params
{
public:
	class UW_StandardModal_C*                    TriggeringModal;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSavedLoadout                         CurrentLoadout;                                    // 0x20(0x188)(Edit, BlueprintVisible)
	class FString                                PresetName;                                        // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Overwriting;                                       // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ConfirmOverwrite;                                  // 0x1B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetAllPresetNames_ReturnValue;            // 0x1E8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1F8(0x18)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x218(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x258(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x268(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F0 (0x1F0 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.OpenPresetSaveModal
struct UW_Loadout_V2_C_OpenPresetSaveModal_Params
{
public:
	class FString                                CurrentPreset;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bDelete;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(ConstParm)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_374[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x68(0x18)(None)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x80(0x10)(NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_376[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x98(0x18)(None)
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetAllPresetNames_ReturnValue;            // 0xC0(0x10)(ReferenceParm)
	class FText                                  K2Node_Select_Default;                             // 0xD0(0x18)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_378[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF0(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x108(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x120(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x138(0x40)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x178(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x188(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x198(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)(None)
	struct FVector2D                             Temp_struct_Variable;                              // 0x1C0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_Select_Default_2;                           // 0x1D8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x259 (0x259 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ShowWeaponClassNav
struct UW_Loadout_V2_C_ShowWeaponClassNav_Params
{
public:
	enum class EItemClass                        SelectedClass;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSecondary;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShowLessLethal;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemClass                        NewCategory;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_397[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EItemClass>                  SecondaryClasses;                                  // 0x8(0x50)(Edit, BlueprintVisible)
	TMap<class FName, class FText>               TempOptionMap;                                     // 0x58(0x50)(Edit, BlueprintVisible)
	TSet<enum class EItemClass>                  PrimaryClasses;                                    // 0xA8(0x50)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_399[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemClassText_Category_Text;           // 0x110(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<enum class EItemClass>                  K2Node_MakeVariable_MakeVariableOutput;            // 0x148(0x50)(None)
	TSet<enum class EItemClass>                  K2Node_MakeVariable_MakeVariableOutput_1;          // 0x198(0x50)(None)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<enum class EItemClass>                  K2Node_Select_Default;                             // 0x208(0x50)(None)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.BP_GetDesiredFocusTarget
struct UW_Loadout_V2_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_GetFocusTarget_self_CastInput;            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPose
struct UW_Loadout_V2_C_SetCameraAndPose_Params
{
public:
	class FName                                  CameraTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PoseTag;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        BlendTime;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPoseByPageID
struct UW_Loadout_V2_C_SetCameraAndPoseByPageID_Params
{
public:
	class FName                                  PageNameID;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Map_Find_Value_1;                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ArmorMaterialHovered
struct UW_Loadout_V2_C_ArmorMaterialHovered_Params
{
public:
	class UArmourMaterial*                       ArmorMaterial;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.AttachmentHovered
struct UW_Loadout_V2_C_AttachmentHovered_Params
{
public:
	class UWeaponAttachment*                     Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x10(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ItemHovered
struct UW_Loadout_V2_C_ItemHovered_Params
{
public:
	class ABaseItem*                             BaseItem;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.WeaponHovered
struct UW_Loadout_V2_C_WeaponHovered_Params
{
public:
	class ABaseWeapon*                           BaseWeaponItem;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Secondary;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x50(0x18)(None)
	class UClass*                                CallFunc_GetClassFromObject_ReturnValue;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.BP_OnHandleBackAction
struct UW_Loadout_V2_C_BP_OnHandleBackAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BackPage_Handled;                         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.CheckOverviewIsActive
struct UW_Loadout_V2_C_CheckOverviewIsActive_Params
{
public:
	bool                                         TURR;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverview_V2*                          K2Node_DynamicCast_AsOverview_V2;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryPoses
struct UW_Loadout_V2_C_SetCategoryPoses_Params
{
public:
	enum class EItemCategory                     Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0x20(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_2;                              // 0x30(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x38(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_3;                              // 0x48(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_3;                            // 0x50(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryCameraTags
struct UW_Loadout_V2_C_SetCategoryCameraTags_Params
{
public:
	enum class EItemCategory                     Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0xC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_2;                              // 0x18(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_2;                              // 0x1C(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_3;                              // 0x24(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_3;                              // 0x28(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_4;                              // 0x30(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_4;                              // 0x34(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x600 (0x600 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.UpdateAllPreviewWeaponAttachments
struct UW_Loadout_V2_C_UpdateAllPreviewWeaponAttachments_Params
{
public:
	bool                                         IsWorkbench;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_433[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABaseItem>                 Weapon;                                            // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsSidearm;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_434[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x18(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UClass*>                        Attachments;                                       // 0x1A0(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_436[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponAttachmentData            K2Node_MakeStruct_SavedWeaponAttachmentData;       // 0x1B8(0x58)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_437[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponAttachmentData            K2Node_MakeStruct_SavedWeaponAttachmentData_1;     // 0x218(0x58)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_438[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponAttachmentData            K2Node_Select_Default;                             // 0x278(0x58)(ConstParm, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_439[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetActiveLoadout_ReturnValue;             // 0x2E8(0x188)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x474(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorld*                                CallFunc_GetWorldBP_ReturnValue;                   // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedWeaponAttachmentData            CallFunc_Map_Find_Value;                           // 0x488(0x58)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemData*                             CallFunc_GetItemData_ReturnValue;                  // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedWeaponAttachmentData            K2Node_MakeStruct_SavedWeaponAttachmentData_2;     // 0x4F0(0x58)(NoDestructor)
	struct FSavedWeaponAttachmentData            K2Node_Select_Default_1;                           // 0x548(0x58)(ConstParm, NoDestructor)
	struct FSavedWeaponAttachmentData            K2Node_Select_Default_2;                           // 0x5A0(0x58)(ConstParm, NoDestructor)
	class UClass*                                K2Node_Select_Default_3;                           // 0x5F8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.EquipArmourMaterial
struct UW_Loadout_V2_C_EquipArmourMaterial_Params
{
public:
	class UArmourMaterial*                       ArmourMaterial;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetPresetModified
struct UW_Loadout_V2_C_SetPresetModified_Params
{
public:
	bool                                         PresetDirty;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6E1 (0x6E1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.EquipItem
struct UW_Loadout_V2_C_EquipItem_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EItemCategory>             ItemCategories;                                    // 0x8(0x10)(Edit, BlueprintVisible)
	enum class EItemClass                        EquippingItemClass;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_450[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EquippingItem;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable;                                // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Weapon;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponData                           K2Node_MakeStruct_WeaponData;                      // 0x40(0xB8)(None)
	enum class EItemCategory                     Temp_byte_Variable_1;                              // 0xF8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_2;                              // 0xF9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_3;                              // 0xFA(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable_4;                              // 0xFB(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_DynamicCast_AsW_Loadout_Slot;               // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0x123(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_4;             // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x140(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.OpenItemList
struct UW_Loadout_V2_C_OpenItemList_Params
{
public:
	bool                                         VerticalList;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemCategory                     LoadoutSlot;                                       // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLoadoutCategory>              GearCategoryClasses;                               // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UW_Loadout_ItemList_Vertical_C*        ItemList;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLoadoutCategoryText_Category_Text;     // 0x20(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCameraBySlot
struct UW_Loadout_V2_C_SetPreMissionCameraBySlot_Params
{
public:
	enum class EItemCategory                     LoadoutSlot;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendTime;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Map_Find_Value_1;                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.HolsterPreviewCharacterWeapon
struct UW_Loadout_V2_C_HolsterPreviewCharacterWeapon_Params
{
public:
	bool                                         IsHolstering;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_476[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  CallFunc_GetDefaultPreviewCharacter_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_478[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetLastTableMontagePlayed_ReturnValue;    // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   CallFunc_PlayEventAttached_ReturnValue;            // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue; // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_479[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.Tick
struct UW_Loadout_V2_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.PreConstruct
struct UW_Loadout_V2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.HeaderSubpageNavigation
struct UW_Loadout_V2_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetLoadoutWidget
struct UW_Loadout_V2_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.UpdateCurrentItemMap
struct UW_Loadout_V2_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.UpdateCurrentSlot
struct UW_Loadout_V2_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.UpdateActiveLoadout
struct UW_Loadout_V2_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetInputMode
struct UW_Loadout_V2_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.Hide
struct UW_Loadout_V2_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.Reveal
struct UW_Loadout_V2_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.OnAttachmentSlotClicked
struct UW_Loadout_V2_C_OnAttachmentSlotClicked_Params
{
public:
	class UClass*                                Attaching_Weapon;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Attachment_Data;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.InputMethodChanged
struct UW_Loadout_V2_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCamera
struct UW_Loadout_V2_C_SetPreMissionCamera_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Animation;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                        BlendTime;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.SetCurrentPageID
struct UW_Loadout_V2_C_SetCurrentPageID_Params
{
public:
	class FName                                  CurrentPageID;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ChangePage
struct UW_Loadout_V2_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature
struct UW_Loadout_V2_C_BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature
struct UW_Loadout_V2_C_BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature_Params
{
public:
	class FName                                  CameraTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CharacterPose;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
struct UW_Loadout_V2_C_BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x531 (0x531 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.ExecuteUbergraph_W_Loadout_V2
struct UW_Loadout_V2_C_ExecuteUbergraph_W_Loadout_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HolsterPreviewCharacterWeapon_IsHolstering; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_OptionNameID;                         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x58(0x50)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0xB0(0x188)(None)
	bool                                         K2Node_Event_IsGamepad;                            // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Attaching_Weapon;               // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Attachment_Data;                // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetActiveLoadout_ReturnValue;             // 0x280(0x188)(None)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x40A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Tag;                            // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Animation;                      // 0x420(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_BlendTime;                      // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x435(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x438(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetActiveWidget_ReturnValue;              // 0x450(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x460(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x474(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_CheckOverviewIsActive_True;               // 0x484(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x485(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_CurrentPageID;                  // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BackPage_Handled;                         // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x494(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Map_Find_Value;                           // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_BP_AddWidget_ReturnValue;                 // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_OptionNameID;           // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_CameraTag;              // 0x4CC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_CharacterPose;          // 0x4D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_ButtonID;               // 0x4E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x500(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x510(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutUI_C>         K2Node_DynamicCast_AsLoadout_UI;                   // 0x518(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.OnPresetModified__DelegateSignature
struct UW_Loadout_V2_C_OnPresetModified__DelegateSignature_Params
{
public:
	bool                                         PresetDirty;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_V2.W_Loadout_V2_C.OnChangedInput__DelegateSignature
struct UW_Loadout_V2_C_OnChangedInput__DelegateSignature_Params
{
public:
	bool                                         UsingGamepad;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


