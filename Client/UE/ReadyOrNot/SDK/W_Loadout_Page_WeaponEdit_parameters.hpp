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
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetFocusTarget
struct UW_Loadout_Page_WeaponEdit_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BackPage
struct UW_Loadout_Page_WeaponEdit_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetWeaponObject
struct UW_Loadout_Page_WeaponEdit_C_GetWeaponObject_Params
{
public:
	class ABaseWeapon*                           WeaponObject;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeSecondary
struct UW_Loadout_Page_WeaponEdit_C_InitializeSecondary_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseWeapon>               CallFunc_GetActiveSecondary_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializePrimary
struct UW_Loadout_Page_WeaponEdit_C_InitializePrimary_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseWeapon>               CallFunc_GetActivePrimary_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4F (0x4F - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.CloseAttachmentSelect
struct UW_Loadout_Page_WeaponEdit_C_CloseAttachmentSelect_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_LoadoutSlot_v2_C*>           CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_LoadoutSlot_v2_C*                   CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BP_GetDesiredFocusTarget
struct UW_Loadout_Page_WeaponEdit_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI_1;            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus_1;                   // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateStyle
struct UW_Loadout_Page_WeaponEdit_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetCurrentAttachmentByType
struct UW_Loadout_Page_WeaponEdit_C_GetCurrentAttachmentByType_Params
{
public:
	enum class EWeaponAttachmentType             Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponAttachment*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         CallFunc_GetActivePrimaryAttachmentByType_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWeaponAttachment*                     CallFunc_GetClassDefaultObject_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetStoredAttachmentByType
struct UW_Loadout_Page_WeaponEdit_C_GetStoredAttachmentByType_Params
{
public:
	TSubclassOf<class ABaseWeapon>               Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponAttachment*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponAttachment*                     CallFunc_GetDefaultAttachmentByType_Attachment;    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponAttachment*                     CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponAttachment*                     K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeByPageID
struct UW_Loadout_Page_WeaponEdit_C_InitializeByPageID_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetDefaultAttachmentByType
struct UW_Loadout_Page_WeaponEdit_C_GetDefaultAttachmentByType_Params
{
public:
	enum class EWeaponAttachmentType             Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponAttachment*                     Attachment;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_73D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         CallFunc_GetActivePrimaryAttachmentByType_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWeaponAttachment*                     CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA6 (0xA6 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.PopulateAttachmentCategories
struct UW_Loadout_Page_WeaponEdit_C_PopulateAttachmentCategories_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   NewSlot;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_753[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UW_LoadoutSlot_v2_C*                   CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UWeaponAttachment*                     CallFunc_GetCurrentAttachmentByType_ReturnValue;   // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x68(0x18)(None)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EWeaponAttachmentType>     CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue; // 0x90(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             CallFunc_Array_Get_Item;                           // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.GetWeaponImage
struct UW_Loadout_Page_WeaponEdit_C_GetWeaponImage_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSecondaryWeaponImage_ReturnValue;      // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetPrimaryWeaponImage_ReturnValue;        // 0x60(0x28)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature_Params
{
public:
	class UWeaponAttachment*                     Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_773[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature_Params
{
public:
	TSubclassOf<class UWeaponAttachment>         AttachmentClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.AttachmentCategoryHovered
struct UW_Loadout_Page_WeaponEdit_C_AttachmentCategoryHovered_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.AttachmentCategoryClicked
struct UW_Loadout_Page_WeaponEdit_C_AttachmentCategoryClicked_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature_Params
{
public:
	class ABaseWeapon*                           Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature_Params
{
public:
	TSubclassOf<class ABaseWeapon>               Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InitializeWeapon
struct UW_Loadout_Page_WeaponEdit_C_InitializeWeapon_Params
{
public:
	bool                                         Secondary;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Weapon;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.HeaderSubpageNavigation
struct UW_Loadout_Page_WeaponEdit_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.SetLoadoutWidget
struct UW_Loadout_Page_WeaponEdit_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateCurrentItemMap
struct UW_Loadout_Page_WeaponEdit_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateCurrentSlot
struct UW_Loadout_Page_WeaponEdit_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.UpdateActiveLoadout
struct UW_Loadout_Page_WeaponEdit_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.SetInputMode
struct UW_Loadout_Page_WeaponEdit_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.InputMethodChanged
struct UW_Loadout_Page_WeaponEdit_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.Hide
struct UW_Loadout_Page_WeaponEdit_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.Reveal
struct UW_Loadout_Page_WeaponEdit_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.ChangePage
struct UW_Loadout_Page_WeaponEdit_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C0 (0x3C0 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.ExecuteUbergraph_W_Loadout_Page_WeaponEdit
struct UW_Loadout_Page_WeaponEdit_C_ExecuteUbergraph_W_Loadout_Page_WeaponEdit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponAttachment*                     K2Node_ComponentBoundEvent_Attachment;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             K2Node_ComponentBoundEvent_AttachmentType_1;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_3;       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         K2Node_ComponentBoundEvent_AttachmentClass;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             K2Node_ComponentBoundEvent_AttachmentType;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_824[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   K2Node_CustomEvent_TriggeringSlot_1;               // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_CustomEvent_TriggeringSlot;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_827[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_2;       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           K2Node_ComponentBoundEvent_Weapon_1;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_1;       // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ABaseWeapon>               K2Node_ComponentBoundEvent_Weapon;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EItemType                         CallFunc_GetItemType_Item_Type;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_82B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class UWeaponAttachment>> CallFunc_GetAttachmentByWeaponAndType_ReturnValue; // 0x80(0x10)(ReferenceParm)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_82E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Secondary;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_831[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_Weapon;                         // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0xD8(0x50)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x130(0x188)(None)
	bool                                         K2Node_Event_IsGamepad;                            // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_834[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_836[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot;         // 0x2C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_83A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2DC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_83C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAttachmentSlotText_SlotText;           // 0x2F0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x308(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x348(0x10)(ReferenceParm)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x360(0x18)(None)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI_1;            // 0x380(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_840[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseWeapon*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus_1;                   // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2;          // 0x3A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_PageName;                             // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;        // 0x3B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnCurrentWeaponClicked__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_OnCurrentWeaponClicked__DelegateSignature_Params
{
public:
	bool                                         Secondary;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EItemClass                        ItemClass;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnAttachmentClicked__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_OnAttachmentClicked__DelegateSignature_Params
{
public:
	class UClass*                                AttachmentClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C.OnAttachmentHovered__DelegateSignature
struct UW_Loadout_Page_WeaponEdit_C_OnAttachmentHovered__DelegateSignature_Params
{
public:
	class UWeaponAttachment*                     Attachment;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


