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

// 0xB0 (0xB0 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetActive
struct UW_Briefing_Intel_Entry_C_SetActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3819[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x28(0x88)(ConstParm)
};

// 0x24 (0x24 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.SetHovered
struct UW_Briefing_Intel_Entry_C_SetHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3824[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.PreConstruct
struct UW_Briefing_Intel_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
struct UW_Briefing_Intel_Entry_C_BndEvt__btn_Document_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.ExecuteUbergraph_W_Briefing_Intel_Entry
struct UW_Briefing_Intel_Entry_C_ExecuteUbergraph_W_Briefing_Intel_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3845[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_384A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetLazyLoadedImage_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.MediaIntelClicked__DelegateSignature
struct UW_Briefing_Intel_Entry_C_MediaIntelClicked__DelegateSignature_Params
{
public:
	class UW_Briefing_Intel_Entry_C*             ClickedEntry;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Briefing_Evidence                 Media;                                             // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function W_Briefing_Intel_Entry.W_Briefing_Intel_Entry_C.BioIntelClicked__DelegateSignature
struct UW_Briefing_Intel_Entry_C_BioIntelClicked__DelegateSignature_Params
{
public:
	class UW_Briefing_Intel_Entry_C*             ClickedEntry;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                         Bio;                                               // 0x8(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


