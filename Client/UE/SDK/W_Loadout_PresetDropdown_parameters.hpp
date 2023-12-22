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

// 0x328 (0x328 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.GetPreset
struct UW_Loadout_PresetDropdown_C_GetPreset_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         ReturnValue;                                       // 0x10(0x188)(Parm, OutParm, ReturnParm)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetPreset_ReturnValue;                    // 0x1A0(0x188)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.ApplySelectedPreset
struct UW_Loadout_PresetDropdown_C_ApplySelectedPreset_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetSelection
struct UW_Loadout_PresetDropdown_C_SetSelection_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetPresetModified
struct UW_Loadout_PresetDropdown_C_SetPresetModified_Params
{
public:
	bool                                         Modified;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_StringNotEmpty_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_358D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)(None)
};

// 0x219 (0x219 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.PopulatePresets
struct UW_Loadout_PresetDropdown_C_PopulatePresets_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(ConstParm)
	bool                                         CallFunc_IsCurrentPresetDirty_IsDirty;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_358F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetAllPresetNames_ReturnValue;            // 0x50(0x10)(ReferenceParm)
	struct FSavedLoadout                         CallFunc_GetActiveLoadout_ReturnValue;             // 0x60(0x188)(None)
	class FString                                CallFunc_Array_Get_Item;                           // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1F8(0x18)(None)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3590[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateCurrentItemMap
struct UW_Loadout_PresetDropdown_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.SetLoadoutWidget
struct UW_Loadout_PresetDropdown_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.HeaderSubpageNavigation
struct UW_Loadout_PresetDropdown_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateCurrentSlot
struct UW_Loadout_PresetDropdown_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.PresetApplied
struct UW_Loadout_PresetDropdown_C_PresetApplied_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         Loadout;                                           // 0x10(0x188)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.UpdateActiveLoadout
struct UW_Loadout_PresetDropdown_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature_Params
{
public:
	class UW_Dropdown_C*                         TriggeringDropdown;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature
struct UW_Loadout_PresetDropdown_C_BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x5D8 (0x5D8 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.ExecuteUbergraph_W_Loadout_PresetDropdown
struct UW_Loadout_PresetDropdown_C_ExecuteUbergraph_W_Loadout_PresetDropdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3591[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID_3;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3592[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_OptionNameID;                         // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringNotEmpty_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3593[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_OptionID_2;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringIsEmpty_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3594[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x60(0x50)(None)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name;                           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_CustomEvent_Loadout;                        // 0xC8(0x188)(ConstParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x260(0x188)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3E8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_ComponentBoundEvent_OptionID_1;             // 0x3F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Dropdown_C*                         K2Node_ComponentBoundEvent_TriggeringDropdown;     // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetPreset_ReturnValue;                    // 0x410(0x188)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x598(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_ComponentBoundEvent_OptionID;               // 0x5A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_2;     // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentPresetDisplayName_ReturnValue;  // 0x5C0(0x18)(None)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnPresetHovered__DelegateSignature
struct UW_Loadout_PresetDropdown_C_OnPresetHovered__DelegateSignature_Params
{
public:
	struct FSavedLoadout                         SavedLoadout;                                      // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnPresetSelected__DelegateSignature
struct UW_Loadout_PresetDropdown_C_OnPresetSelected__DelegateSignature_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnDeletePresetClicked__DelegateSignature
struct UW_Loadout_PresetDropdown_C_OnDeletePresetClicked__DelegateSignature_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C.OnSaveModifiedPresetClicked__DelegateSignature
struct UW_Loadout_PresetDropdown_C_OnSaveModifiedPresetClicked__DelegateSignature_Params
{
public:
	class FString                                ModifiedPreset;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


