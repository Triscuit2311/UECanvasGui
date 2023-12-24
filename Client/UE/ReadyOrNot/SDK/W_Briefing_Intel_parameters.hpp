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

// 0x24 (0x24 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.InitMedia
struct UW_Briefing_Intel_C_InitMedia_Params
{
public:
	TArray<struct FST_Briefing_Evidence>         MediaIntel;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3903[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.InitCivilians
struct UW_Briefing_Intel_C_InitCivilians_Params
{
public:
	TArray<struct FCharacterBio>                 CivilianBios;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.InitSuspects
struct UW_Briefing_Intel_C_InitSuspects_Params
{
public:
	TArray<struct FCharacterBio>                 SuspectBios;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3922[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateBioIntel
struct UW_Briefing_Intel_C_UpdateBioIntel_Params
{
public:
	struct FCharacterBio                         Bio;                                               // 0x0(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA0 (0xA0 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.UpdateMediaIntel
struct UW_Briefing_Intel_C_UpdateMediaIntel_Params
{
public:
	struct FST_Briefing_Evidence                 Media;                                             // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.AddToList
struct UW_Briefing_Intel_C_AddToList_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.CreateLists
struct UW_Briefing_Intel_C_CreateLists_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UW_Briefing_IntelList_Entry_C*         CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_IntelList_Entry_C*         CallFunc_Create_ReturnValue_1;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UW_Briefing_IntelList_Entry_C*         CallFunc_Create_ReturnValue_2;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.PreConstruct
struct UW_Briefing_Intel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.Initialize
struct UW_Briefing_Intel_C_Initialize_Params
{
public:
	struct FST_Briefing_Intel                    Intel;                                             // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature
struct UW_Briefing_Intel_C_BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature_Params
{
public:
	struct FCharacterBio                         Bio;                                               // 0x0(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x140 (0x140 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature
struct UW_Briefing_Intel_C_BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature_Params
{
public:
	struct FCharacterBio                         Bio;                                               // 0x0(0x140)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2C0 (0x2C0 - 0x0)
// Function W_Briefing_Intel.W_Briefing_Intel_C.ExecuteUbergraph_W_Briefing_Intel
struct UW_Briefing_Intel_C_ExecuteUbergraph_W_Briefing_Intel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3963[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Briefing_Intel                    K2Node_CustomEvent_Intel;                          // 0x8(0x30)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3966[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterBio                         K2Node_ComponentBoundEvent_Bio_1;                  // 0x40(0x140)(None)
	struct FCharacterBio                         K2Node_ComponentBoundEvent_Bio;                    // 0x180(0x140)(None)
};

}
}


