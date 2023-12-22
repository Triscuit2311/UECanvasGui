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
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BackPage
struct UW_LoadoutInfo_AttachmentListEntry_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.GetFocusTarget
struct UW_LoadoutInfo_AttachmentListEntry_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInfo
struct UW_LoadoutInfo_AttachmentListEntry_C_SetInfo_Params
{
public:
	class UClass*                                AttachmentClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetInputMode
struct UW_LoadoutInfo_AttachmentListEntry_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ChangePage
struct UW_LoadoutInfo_AttachmentListEntry_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateActiveLoadout
struct UW_LoadoutInfo_AttachmentListEntry_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentSlot
struct UW_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.UpdateCurrentItemMap
struct UW_LoadoutInfo_AttachmentListEntry_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.SetLoadoutWidget
struct UW_LoadoutInfo_AttachmentListEntry_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.HeaderSubpageNavigation
struct UW_LoadoutInfo_AttachmentListEntry_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.PreConstruct
struct UW_LoadoutInfo_AttachmentListEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Reveal
struct UW_LoadoutInfo_AttachmentListEntry_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.Hide
struct UW_LoadoutInfo_AttachmentListEntry_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentListEntry_C_BndEvt__W_LoadoutInfo_AttachmentListEntry_btn_Remove_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry
struct UW_LoadoutInfo_AttachmentListEntry_C_ExecuteUbergraph_W_LoadoutInfo_AttachmentListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_87F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x10(0x188)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x1A0(0x50)(None)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_884[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_886[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnRemoveClicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentListEntry_C_OnRemoveClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeredBy;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutInfo_AttachmentListEntry.W_LoadoutInfo_AttachmentListEntry_C.OnClicked__DelegateSignature
struct UW_LoadoutInfo_AttachmentListEntry_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutInfo_AttachmentListEntry_C*  TriggeredBy;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


