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
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetHighlight
struct UW_Briefing_Media_GalleryEntry_C_SetHighlight_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8A (0x8A - 0x0)
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.UpdateVisualStyle
struct UW_Briefing_Media_GalleryEntry_C_UpdateVisualStyle_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x18(0x28)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x50(0x28)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.SetSelected
struct UW_Briefing_Media_GalleryEntry_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Briefing_Media_GalleryEntry_C_BndEvt__W_Briefing_Media_GalleryEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.ExecuteUbergraph_W_Briefing_Media_GalleryEntry
struct UW_Briefing_Media_GalleryEntry_C_ExecuteUbergraph_W_Briefing_Media_GalleryEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C.OnClick__DelegateSignature
struct UW_Briefing_Media_GalleryEntry_C_OnClick__DelegateSignature_Params
{
public:
	class UW_Briefing_Media_GalleryEntry_C*      GalleryEntry;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


