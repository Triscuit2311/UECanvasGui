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

// 0x8 (0x8 - 0x0)
// Function W_Therapist.W_Therapist_C.GetFocusTarget
struct UW_Therapist_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_Therapist.W_Therapist_C.BackPage
struct UW_Therapist_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD1 (0xD1 - 0x0)
// Function W_Therapist.W_Therapist_C.UpdateTherapyScreen
struct UW_Therapist_C_UpdateTherapyScreen_Params
{
public:
	class FText                                  CallFunc_GetTherapistText_ReturnValue;             // 0x0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x30(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
	TArray<class URosterCharacter*>              CallFunc_GetCharactersInTherapy_ReturnValue;       // 0xB0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URosterCharacter*                      CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function W_Therapist.W_Therapist_C.CloseReplacementModal
struct UW_Therapist_C_CloseReplacementModal_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x55 (0x55 - 0x0)
// Function W_Therapist.W_Therapist_C.PopulateOfficerList
struct UW_Therapist_C_PopulateOfficerList_Params
{
public:
	TArray<class URosterCharacter*>              RosterCharacters;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UW_Therapist_OfficerEntry_C*           NewEntryWidget;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Therapist_OfficerEntry_C*           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3BF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URosterCharacter*                      CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function W_Therapist.W_Therapist_C.BP_OnHandleBackAction
struct UW_Therapist_C_BP_OnHandleBackAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BackPage_Handled;                         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Therapist.W_Therapist_C.Reveal
struct UW_Therapist_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Therapist.W_Therapist_C.Hide
struct UW_Therapist_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Therapist.W_Therapist_C.SetInputMode
struct UW_Therapist_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Therapist.W_Therapist_C.ChangePage
struct UW_Therapist_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Therapist.W_Therapist_C.OfficerEntryClicked
struct UW_Therapist_C_OfficerEntryClicked_Params
{
public:
	class UW_Therapist_OfficerEntry_C*           Entry;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Therapist.W_Therapist_C.ReplacePatient
struct UW_Therapist_C_ReplacePatient_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_Therapist.W_Therapist_C.BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature
struct UW_Therapist_C_BndEvt__W_Therapist_W_PageHeader_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function W_Therapist.W_Therapist_C.ExecuteUbergraph_W_Therapist
struct UW_Therapist_C_ExecuteUbergraph_W_Therapist_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_ButtonID;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(ConstParm)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x40(0x10)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_Delay_1;                              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BackPage_Handled;                         // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Therapist_OfficerEntry_C*           K2Node_CustomEvent_Entry;                          // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x80(0x18)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal;                   // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0xA8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xC0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x100(0x40)(HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x148(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x158(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x170(0x10)(ZeroConstructor, NoDestructor)
};

}
}


