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

// 0x36A (0x36A - 0x0)
// Function BPF_UI.BPF_UI_C.IsCurrentPresetDirty
struct UBPF_UI_C_IsCurrentPresetDirty_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDirty;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentPresetDisplayName_ReturnValue;  // 0x18(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetPreset_ReturnValue;                    // 0x48(0x188)(None)
	struct FSavedLoadout                         CallFunc_GetActiveLoadout_ReturnValue;             // 0x1D0(0x188)(None)
	TArray<struct FSavedLoadout>                 K2Node_MakeArray_Array;                            // 0x358(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetCustomizationGroupText
struct UBPF_UI_C_GetCustomizationGroupText_Params
{
public:
	enum class E_CustomizationGroups             Group;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	enum class E_CustomizationGroups             Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(None)
};

// 0x23 (0x23 - 0x0)
// Function BPF_UI.BPF_UI_C.GetCustomizationGroupByCategory
struct UBPF_UI_C_GetCustomizationGroupByCategory_Params
{
public:
	enum class ECustomizationType                Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Group;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationType                Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_3;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_4;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_5;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_6;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_7;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_8;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_9;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_10;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_11;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_12;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_13;                             // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_14;                             // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_15;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Temp_byte_Variable_16;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             K2Node_Select_Default;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function BPF_UI.BPF_UI_C.TextToName
struct UBPF_UI_C_TextToName_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutName;                                           // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BPF_UI.BPF_UI_C.TextIsNotEmpty
struct UBPF_UI_C_TextIsNotEmpty_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotEmpty;                                          // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BPF_UI.BPF_UI_C.GetColorByName
struct UBPF_UI_C_GetColorByName_Params
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Opacity;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LinearColor;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SlateColor;                                        // 0x28(0x28)(Parm, OutParm)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x68(0x28)(None)
};

// 0x10 (0x10 - 0x0)
// Function BPF_UI.BPF_UI_C.GetSyleGuide
struct UBPF_UI_C_GetSyleGuide_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BPF_UI.BPF_UI_C.GetTeamColorByEquippingSwatEnum
struct UBPF_UI_C_GetTeamColorByEquippingSwatEnum_Params
{
public:
	enum class EEquippingSwat                    EquippingSwat;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Opacity;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LinearColor;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SlateColor;                                        // 0x20(0x28)(Parm, OutParm)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetAllColors_White;                       // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Dark;                        // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Red;                         // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Yellow;                      // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Blue;                        // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Green;                       // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetRedTeamColor_RedTeam;                  // 0xB4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBlueTeamColor_BlueTeam;                // 0xC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0xD4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xE8(0x28)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetMunitionTypeText
struct UBPF_UI_C_GetMunitionTypeText_Params
{
public:
	enum class ELoadoutMunitionSlotType          MunitionType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  MunitionText;                                      // 0x10(0x18)(Parm, OutParm)
	enum class ELoadoutMunitionSlotType          Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)(None)
};

// 0x22 (0x22 - 0x0)
// Function BPF_UI.BPF_UI_C.GetLoadoutWidget
struct UBPF_UI_C_GetLoadoutWidget_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       AsW_Loadout_V2;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       K2Node_DynamicCast_AsW_Loadout_V2;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetArmorCoverageText
struct UBPF_UI_C_GetArmorCoverageText_Params
{
public:
	enum class EArmourCoverage                   Coverage;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CoverageText;                                      // 0x10(0x18)(Parm, OutParm)
	enum class EArmourCoverage                   Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x90(0x18)(None)
};

// 0x120 (0x120 - 0x0)
// Function BPF_UI.BPF_UI_C.GetPlayerTeamColor
struct UBPF_UI_C_GetPlayerTeamColor_Params
{
public:
	enum class ETeamType                         Team;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Opacity;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LinearColor;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SlateColor;                                        // 0x20(0x28)(Parm, OutParm)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETeamType                         Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetBlueTeamColor_BlueTeam;                // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_White;                       // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Dark;                        // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Red;                         // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Yellow;                      // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Blue;                        // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Green;                       // 0xB4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetGoldTeamColor_RedTeam;                 // 0xC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetRedTeamColor_RedTeam;                  // 0xD4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0xE4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xF8(0x28)(None)
};

// 0x258 (0x258 - 0x0)
// Function BPF_UI.BPF_UI_C.GetSlateColorScheme
struct UBPF_UI_C_GetSlateColorScheme_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           White;                                             // 0x10(0x28)(Parm, OutParm)
	struct FSlateColor                           Dark;                                              // 0x38(0x28)(Parm, OutParm)
	struct FSlateColor                           Red;                                               // 0x60(0x28)(Parm, OutParm)
	struct FSlateColor                           Yellow;                                            // 0x88(0x28)(Parm, OutParm)
	struct FSlateColor                           Blue;                                              // 0xB0(0x28)(Parm, OutParm)
	struct FSlateColor                           Green;                                             // 0xD8(0x28)(Parm, OutParm)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_White;                       // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Dark;                        // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Red;                         // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Yellow;                      // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Blue;                        // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Green;                       // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x168(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x190(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x1B8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x1E0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x208(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x230(0x28)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetLinearColorScheme
struct UBPF_UI_C_GetLinearColorScheme_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          White;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Dark;                                              // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Red;                                               // 0x30(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Yellow;                                            // 0x40(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Blue;                                              // 0x50(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Green;                                             // 0x60(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_White;                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Dark;                        // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Red;                         // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Yellow;                      // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Blue;                        // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetAllColors_Green;                       // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetAmmoCategoryText
struct UBPF_UI_C_GetAmmoCategoryText_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(Parm, OutParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	class UClass*                                K2Node_ClassDynamicCast_AsPepperball_Gun;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x48(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	class UClass*                                K2Node_ClassDynamicCast_AsBase_Magazine_Weapon;    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xC0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xD8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x118(0x10)(ReferenceParm)
	class UClass*                                K2Node_ClassDynamicCast_AsShotgun;                 // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x138(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x150(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x190(0x10)(ReferenceParm)
	class UClass*                                K2Node_ClassDynamicCast_AsTaser;                   // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_3;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x1B0(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function BPF_UI.BPF_UI_C.UpdateCurrent_LoadoutUI_Slot
struct UBPF_UI_C_UpdateCurrent_LoadoutUI_Slot_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutUI_C>         K2Node_DynamicCast_AsLoadout_UI;                   // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5D0 (0x5D0 - 0x0)
// Function BPF_UI.BPF_UI_C.GetItemType
struct UBPF_UI_C_GetItemType_Params
{
public:
	class UClass*                                BaseItemClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         Item_Type;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorld*                                CallFunc_GetWorldBP_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemDataTableInfo_DataFound;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetItemDataTableInfo_ItemLookupData;      // 0x30(0x5A0)(None)
};

// 0xB71 (0xB71 - 0x0)
// Function BPF_UI.BPF_UI_C.GetItemDataTableInfo
struct UBPF_UI_C_GetItemDataTableInfo_Params
{
public:
	class UClass*                                BaseItemClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DataFound;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DAA[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupData;                                    // 0x20(0x5A0)(Parm, OutParm)
	class UDataTable*                            CallFunc_GetItemLookupDataTable_ReturnValue;       // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x5D0(0x5A0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function BPF_UI.BPF_UI_C.GetAttachmentSlotText
struct UBPF_UI_C_GetAttachmentSlotText_Params
{
public:
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SlotText;                                          // 0x10(0x18)(Parm, OutParm)
	enum class EWeaponAttachmentType             Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xD8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xF0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x108(0x18)(None)
};

// 0x228 (0x228 - 0x0)
// Function BPF_UI.BPF_UI_C.GetItemClassText
struct UBPF_UI_C_GetItemClassText_Params
{
public:
	enum class EItemClass                        ItemCategory;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Category_Text;                                     // 0x10(0x18)(Parm, OutParm)
	enum class EItemClass                        Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xD8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xF0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x108(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x120(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x168(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x180(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x198(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x1B0(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x1C8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x1E0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x1F8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x210(0x18)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BPF_UI.BPF_UI_C.GetCustomizationCategoryText
struct UBPF_UI_C_GetCustomizationCategoryText_Params
{
public:
	enum class ECustomizationType                ItemCategory;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Category_Text;                                     // 0x10(0x18)(Parm, OutParm)
	enum class ECustomizationType                Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x90(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xD8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xF0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x108(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x120(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x138(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x150(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x168(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x180(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x198(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x1B0(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function BPF_UI.BPF_UI_C.GetLoadoutCategoryText
struct UBPF_UI_C_GetLoadoutCategoryText_Params
{
public:
	enum class EItemCategory                     ItemCategory;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Category_Text;                                     // 0x10(0x18)(Parm, OutParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function BPF_UI.BPF_UI_C.RemoveSpacesFromString
struct UBPF_UI_C_RemoveSpacesFromString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ReturnString;                                      // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  ReturnText;                                        // 0x28(0x18)(Parm, OutParm)
	class FName                                  ReturnName;                                        // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
};

}
}


