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
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BackPage
struct UW_LoadoutSlot_Attachment_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetFocusTarget
struct UW_LoadoutSlot_Attachment_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetIsNullAttachment
struct UW_LoadoutSlot_Attachment_C_GetIsNullAttachment_Params
{
public:
	class UClass*                                AttachmentData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNull;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EWeaponAttachmentType             Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D0F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D11[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWorld*                                CallFunc_GetWorldBP_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemData*                             CallFunc_GetItemData_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetEquipped
struct UW_LoadoutSlot_Attachment_C_SetEquipped_Params
{
public:
	bool                                         Equipped;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsNullAttachment_IsNull;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.RefreshItemInfo
struct UW_LoadoutSlot_Attachment_C_RefreshItemInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetMinimalLayout
struct UW_LoadoutSlot_Attachment_C_SetMinimalLayout_Params
{
public:
	bool                                         MinimalLayout;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D3D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.GetHoverState
struct UW_LoadoutSlot_Attachment_C_GetHoverState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetActive
struct UW_LoadoutSlot_Attachment_C_SetActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHoverState_ReturnValue;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_2;                // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Style_Text                        K2Node_Select_Default;                             // 0x40(0xA0)(HasGetValueTypeHash)
	struct FST_Style_Text                        K2Node_Select_Default_1;                           // 0xE0(0xA0)(HasGetValueTypeHash)
	struct FST_Style_Text                        K2Node_Select_Default_2;                           // 0x180(0xA0)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.PreConstruct
struct UW_LoadoutSlot_Attachment_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetInputMode
struct UW_LoadoutSlot_Attachment_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.HeaderSubpageNavigation
struct UW_LoadoutSlot_Attachment_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnListItemObjectSet
struct UW_LoadoutSlot_Attachment_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutSlot_SlotButton_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.InitializeAttachmentData
struct UW_LoadoutSlot_Attachment_C_InitializeAttachmentData_Params
{
public:
	class UClass*                                AttachmentData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemSelectionChanged
struct UW_LoadoutSlot_Attachment_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_BndEvt__W_LoadoutAttachment_SlotButton_1_K2Node_ComponentBoundEvent_7_DoubleClicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateActiveLoadout
struct UW_LoadoutSlot_Attachment_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.BP_OnItemExpansionChanged
struct UW_LoadoutSlot_Attachment_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.SetLoadoutWidget
struct UW_LoadoutSlot_Attachment_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Hide
struct UW_LoadoutSlot_Attachment_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.Reveal
struct UW_LoadoutSlot_Attachment_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentItemMap
struct UW_LoadoutSlot_Attachment_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.UpdateCurrentSlot
struct UW_LoadoutSlot_Attachment_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ChangePage
struct UW_LoadoutSlot_Attachment_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D0 (0x2D0 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.ExecuteUbergraph_W_LoadoutSlot_Attachment
struct UW_LoadoutSlot_Attachment_C_ExecuteUbergraph_W_LoadoutSlot_Attachment_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DE3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_OptionNameID;                         // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DEB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_5;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x48(0x18)(None)
	class UClass*                                K2Node_CustomEvent_AttachmentData;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DED[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x98(0x188)(None)
	struct FVector2D                             K2Node_Select_Default_1;                           // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsNullAttachment_IsNull;               // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x270(0x50)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_PageName;                             // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnDoubleClicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_OnDoubleClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnUnhovered__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnHovered__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_OnHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_LoadoutSlot_Attachment.W_LoadoutSlot_Attachment_C.OnClicked__DelegateSignature
struct UW_LoadoutSlot_Attachment_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


