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

// 0x10 (0x10 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SetTheme
struct UW_AudioPlayer_Button_C_SetTheme_Params
{
public:
	bool                                         UseDarkTheme;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.UpdateControlSetting
struct UW_AudioPlayer_Button_C_UpdateControlSetting_Params
{
public:
	enum class E_Briefing_Audio_PlayStates       Control;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Briefing_Audio_PlayStates       K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.UpdateIcon
struct UW_AudioPlayer_Button_C_UpdateIcon_Params
{
public:
	struct FLinearColor                          CallFunc_GetIconColor_ReturnValue;                 // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_Map_Find_Value;                           // 0x10(0x88)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.GetIconColor
struct UW_AudioPlayer_Button_C_GetIconColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x28(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x60(0x28)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_2;                // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_3;                // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_4;                // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.SetHoveredState
struct UW_AudioPlayer_Button_C_SetHoveredState_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.PreConstruct
struct UW_AudioPlayer_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.HoverAnim
struct UW_AudioPlayer_Button_C_HoverAnim_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reverse;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPS;                                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_AudioPlayer_Button.W_AudioPlayer_Button_C.ExecuteUbergraph_W_AudioPlayer_Button
struct UW_AudioPlayer_Button_C_ExecuteUbergraph_W_AudioPlayer_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_Duration;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Reverse;                        // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_FPS;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


