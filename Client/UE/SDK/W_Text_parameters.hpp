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
// Function W_Text.W_Text_C.SetTextJustification
struct UW_Text_C_SetTextJustification_Params
{
public:
	enum class ETextJustify                      Justification;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_Text.W_Text_C.SetOutline
struct UW_Text_C_SetOutline_Params
{
public:
	struct FFontOutlineSettings                  FontOutlineSettings;                               // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x20(0x58)(HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function W_Text.W_Text_C.SetFont
struct UW_Text_C_SetFont_Params
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_Style_Text                        K2Node_MakeStruct_ST_Style_Text;                   // 0x58(0xA0)(HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_Text.W_Text_C.SetFontSize
struct UW_Text_C_SetFontSize_Params
{
public:
	int32                                        FontSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1872[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Text.W_Text_C.SetTextTransform
struct UW_Text_C_SetTextTransform_Params
{
public:
	enum class ETextTransformPolicy              TextTransform;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Text.W_Text_C.SetTextShadow
struct UW_Text_C_SetTextShadow_Params
{
public:
	struct FVector2D                             ShadowOffset;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShadowColor;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function W_Text.W_Text_C.SetTextLetterSpacing
struct UW_Text_C_SetTextLetterSpacing_Params
{
public:
	int32                                        LetterSpacing;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1880[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_Text.W_Text_C.SetTextColor
struct UW_Text_C_SetTextColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x28)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_Text.W_Text_C.GetText
struct UW_Text_C_GetText_Params
{
public:
	class FText                                  CurrentText;                                       // 0x0(0x18)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function W_Text.W_Text_C.UpdateText
struct UW_Text_C_UpdateText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD8 (0xD8 - 0x0)
// Function W_Text.W_Text_C.TruncateText
struct UW_Text_C_TruncateText_Params
{
public:
	bool                                         Truncate;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1897[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                TruncationCharacters;                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  TruncatedText;                                     // 0x18(0x18)(Parm, OutParm)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_189D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_189F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Left_ReturnValue;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Left_ReturnValue_1;                       // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EndsWith_ReturnValue;                     // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18A5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function W_Text.W_Text_C.UpdateFont
struct UW_Text_C_UpdateFont_Params
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function W_Text.W_Text_C.SetStyle
struct UW_Text_C_SetStyle_Params
{
public:
	struct FST_Style_Text                        TextStyle;                                         // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_Text.W_Text_C.SetText
struct UW_Text_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_TruncateText_TruncatedText;               // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_Text.W_Text_C.PreConstruct
struct UW_Text_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF3 (0xF3 - 0x0)
// Function W_Text.W_Text_C.ExecuteUbergraph_W_Text
struct UW_Text_C_ExecuteUbergraph_W_Text_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_RemoveSpacesFromString_ReturnString;      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_RemoveSpacesFromString_ReturnText;        // 0x30(0x18)(None)
	class FName                                  CallFunc_RemoveSpacesFromString_ReturnName;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Style_Text                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0xA0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


