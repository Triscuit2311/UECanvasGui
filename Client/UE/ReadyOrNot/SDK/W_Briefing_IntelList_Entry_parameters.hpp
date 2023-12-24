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
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ClearActive
struct UW_Briefing_IntelList_Entry_C_ClearActive_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.AddToGrid
struct UW_Briefing_IntelList_Entry_C_AddToGrid_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitMedia
struct UW_Briefing_IntelList_Entry_C_InitMedia_Params
{
public:
	TArray<struct FST_Briefing_Evidence>         Media;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CurrentColumn;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRow;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*             CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Briefing_Evidence                 CallFunc_Array_Get_Item;                           // 0x30(0xA0)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_383[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.InitBios
struct UW_Briefing_IntelList_Entry_C_InitBios_Params
{
public:
	TArray<struct FCharacterBio>                 Bios;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterBio                         CallFunc_Array_Get_Item;                           // 0x20(0x140)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*             CallFunc_Create_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x170(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.PreConstruct
struct UW_Briefing_IntelList_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ForceClick
struct UW_Briefing_IntelList_Entry_C_ForceClick_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaClicked
struct UW_Briefing_IntelList_Entry_C_MediaClicked_Params
{
public:
	class UW_Briefing_Intel_Entry_C*             ClickedEntry;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Briefing_Evidence                 Media;                                             // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioClicked
struct UW_Briefing_IntelList_Entry_C_BioClicked_Params
{
public:
	class UW_Briefing_Intel_Entry_C*             ClickedEntry;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                         Bio;                                               // 0x8(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2A1 (0x2A1 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.ExecuteUbergraph_W_Briefing_IntelList_Entry
struct UW_Briefing_IntelList_Entry_C_ExecuteUbergraph_W_Briefing_IntelList_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Briefing_Intel_Types            Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Index;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*             K2Node_CustomEvent_ClickedEntry_1;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Briefing_Evidence                 K2Node_CustomEvent_Media;                          // 0x30(0xA0)(HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Intel_Entry_C*             K2Node_DynamicCast_AsW_Briefing_Intel_Entry;       // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Briefing_Intel_Entry_C*             K2Node_CustomEvent_ClickedEntry;                   // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterBio                         K2Node_CustomEvent_Bio;                            // 0xF0(0x140)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x230(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x248(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x262(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_3;                              // 0x268(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x288(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.MediaIntelClicked__DelegateSignature
struct UW_Briefing_IntelList_Entry_C_MediaIntelClicked__DelegateSignature_Params
{
public:
	struct FST_Briefing_Evidence                 Media;                                             // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C.BioIntelClicked__DelegateSignature
struct UW_Briefing_IntelList_Entry_C_BioIntelClicked__DelegateSignature_Params
{
public:
	struct FCharacterBio                         Bio;                                               // 0x0(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


