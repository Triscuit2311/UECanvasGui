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
// Function W_Loadout_Overview.W_Loadout_Overview_C.BackPage
struct UW_Loadout_Overview_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.GetFocusTarget
struct UW_Loadout_Overview_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.ShowPresetModified
struct UW_Loadout_Overview_C_ShowPresetModified_Params
{
public:
	bool                                         Modified;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_StringNotEmpty_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)(None)
};

// 0x3E0 (0x3E0 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewPreview
struct UW_Loadout_Overview_C_InitializeOverviewPreview_Params
{
public:
	struct FSavedLoadout                         PreviewLoadout;                                    // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x198(0x188)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x368(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_DynamicCast_AsPanel_Widget;                 // 0x388(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x398(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x3A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_DynamicCast_AsPanel_Widget_1;               // 0x3C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_2;             // 0x3D0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x318 (0x318 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.GetLoadoutInfo
struct UW_Loadout_Overview_C_GetLoadoutInfo_Params
{
public:
	struct FSavedLoadout                         Active_Loadout;                                    // 0x0(0x188)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_Select_Default;                             // 0x190(0x188)(None)
};

// 0x230 (0x230 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeLoadoutPresets
struct UW_Loadout_Overview_C_InitializeLoadoutPresets_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FString                                Temp_string_Variable_1;                            // 0x28(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x48(0x188)(None)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1E8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1FC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x208(0x18)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x5B (0x5B - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.GetAttachmentSlotByType
struct UW_Loadout_Overview_C_GetAttachmentSlotByType_Params
{
public:
	enum class EWeaponAttachmentType             AttachmentSlot;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_Attachment_C*           AttachmentSlotRef;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_Attachment_C*           L_AttachmentSlot;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_Attachment_C*           K2Node_DynamicCast_AsW_Loadout_Slot_Attachment;    // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x471 (0x471 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeArmorSettings
struct UW_Loadout_Overview_C_InitializeArmorSettings_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ArmorData;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FText>             CoverageOptionsMap;                                // 0x10(0x50)(Edit, BlueprintVisible)
	enum class EArmourCoverage                   ArmorCoverage;                                     // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsSWATArmour;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_ByteByte_ReturnValue;           // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value;                           // 0xA8(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_RemoveSpacesFromString_ReturnString;      // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_RemoveSpacesFromString_ReturnText;        // 0xE8(0x18)(None)
	class FName                                  CallFunc_RemoveSpacesFromString_ReturnName;        // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x108(0x188)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_ByteByte_ReturnValue_1;         // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout_1;          // 0x2A8(0x188)(None)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x430(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_RemoveSpacesFromString_ReturnString_1;    // 0x440(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_RemoveSpacesFromString_ReturnText_1;      // 0x450(0x18)(None)
	class FName                                  CallFunc_RemoveSpacesFromString_ReturnName_1;      // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectTactical
struct UW_Loadout_Overview_C_SelectTactical_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectGrenade
struct UW_Loadout_Overview_C_SelectGrenade_Params
{
public:
	class UClass*                                ItemData;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x810 (0x810 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.ApplyWeaponPreset
struct UW_Loadout_Overview_C_ApplyWeaponPreset_Params
{
public:
	class UClass*                                Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPrimary;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_410A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPreset                         WeaponPreset;                                      // 0x10(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TSubclassOf<class USkinComponent>            PresetSkin;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetAmmunition;                                  // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetIlluminator;                                 // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetGrip;                                        // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetStock;                                       // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetOverbarrel;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetUnderbarrel;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetMuzzle;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         PresetScope;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable;                               // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_410F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_1;                             // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_2;               // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_3;               // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_4;               // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_5;               // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue_6;               // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4110[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default;                             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue_7;               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4111[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_2;                             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_1;                           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_3;                             // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4113[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_2;                           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_4;                             // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_3;                           // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_4;                           // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponAttachmentData            CallFunc_Map_Find_Value;                           // 0x148(0x58)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_5;                             // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4117[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_5;                           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x1C0(0x188)(None)
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout_1;          // 0x348(0x188)(None)
	struct FSavedLoadout                         K2Node_SetFieldsInStruct_StructOut;                // 0x4D0(0x188)(None)
	struct FSavedLoadout                         K2Node_SetFieldsInStruct_StructOut_1;              // 0x658(0x188)(None)
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_6;                             // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         Temp_class_Variable_7;                             // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_6;                           // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponAttachment>         K2Node_Select_Default_7;                           // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.DeselectCurrentWeaponPreset
struct UW_Loadout_Overview_C_DeselectCurrentWeaponPreset_Params
{
public:
	struct FWeaponPreset                         CallFunc_Map_Find_Value;                           // 0x0(0x68)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_411C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponPreset                         K2Node_SetFieldsInStruct_StructOut;                // 0x70(0x68)(NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SelectWeaponPreset
struct UW_Loadout_Overview_C_SelectWeaponPreset_Params
{
public:
	class FString                                PresetID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_411D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPreset                         CallFunc_Map_Find_Value;                           // 0x18(0x68)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_411E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponPreset                         K2Node_SetFieldsInStruct_StructOut;                // 0x88(0x68)(NoDestructor)
};

// 0x73 (0x73 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotAutoSelect
struct UW_Loadout_Overview_C_AttachmentSlotAutoSelect_Params
{
public:
	enum class EWeaponAttachmentType             AutoSelectAttachmentSlot;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4123[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4124[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_ByteToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4125[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4127[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_Attachment_C*           K2Node_DynamicCast_AsW_Loadout_Slot_Attachment;    // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC5 (0xC5 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeWeaponPresetOptions
struct UW_Loadout_Overview_C_InitializeWeaponPresetOptions_Params
{
public:
	TSubclassOf<class ABaseItem>                 Weapon;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedWeaponPreset                    CallFunc_GetWeaponPresetsData_ReturnValue;         // 0x28(0x10)(None)
	struct FWeaponPreset                         CallFunc_Array_Get_Item;                           // 0x38(0x68)(NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_412B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xA8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x228 (0x228 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.CreateQuartermasterAttachment
struct UW_Loadout_Overview_C_CreateQuartermasterAttachment_Params
{
public:
	enum class EWeaponAttachmentType             AttachmentType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4132[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RevealDelay;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4133[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_Attachment_C*           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4134[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4135[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable_1;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             Temp_byte_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4136[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x48(0x188)(None)
	class UClass*                                K2Node_Select_Default;                             // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_1;                           // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_2;                           // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1E8(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                K2Node_Select_Default_3;                           // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput;                    // 0x200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x218(0x10)(ZeroConstructor, NoDestructor)
};

// 0x5F8 (0x5F8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OpenWeaponQuartermaster
struct UW_Loadout_Overview_C_OpenWeaponQuartermaster_Params
{
public:
	class UClass*                                ItemToModify;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4140[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupTable;                                   // 0x10(0x5A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         AcceptsMagazine;                                   // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsIlluminator;                                // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsGrip;                                       // 0x5B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsStock;                                      // 0x5B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsOverbarrel;                                 // 0x5B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsUnderbarrel;                                // 0x5B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsMuzzle;                                     // 0x5B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AcceptsScope;                                      // 0x5B7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        RevealDelay;                                       // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4141[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AttachingItem;                                     // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     Temp_byte_Variable;                                // 0x5C8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x5CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4143[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput;                    // 0x5D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x5E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x5E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x5E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4144[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4145[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_Select_Default;                             // 0x5F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SetupBindings
struct UW_Loadout_Overview_C_SetupBindings_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UW_LoadoutSlot_C*>              K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4158[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4159[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CallFunc_Array_Get_Item_1;                         // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_415A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CallFunc_Array_Get_Item_2;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_415B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      CallFunc_Array_Get_Item_3;                         // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SetActiveQuatermasterWeaponButton
struct UW_Loadout_Overview_C_SetActiveQuatermasterWeaponButton_Params
{
public:
	bool                                         IsPrimary;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4161[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x298 (0x298 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.InitializeOverviewList
struct UW_Loadout_Overview_C_InitializeOverviewList_Params
{
public:
	bool                                         RemotePlayer;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_416F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x20(0x188)(None)
	class UW_LoadoutSlot_C*                      K2Node_Select_Default;                             // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x1D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4171[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4172[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_Select_Default_1;                           // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLoadoutPreset>                K2Node_MakeArray_Array;                            // 0x200(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4173[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x220(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4175[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_DynamicCast_AsPanel_Widget;                 // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4176[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x250(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4179[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_DynamicCast_AsPanel_Widget_1;               // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_417A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_2;             // 0x288(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.HeaderSubpageNavigation
struct UW_Loadout_Overview_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.Reveal
struct UW_Loadout_Overview_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.Hide
struct UW_Loadout_Overview_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SetInputMode
struct UW_Loadout_Overview_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.ChangePage
struct UW_Loadout_Overview_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.PreConstruct
struct UW_Loadout_Overview_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateActiveLoadout
struct UW_Loadout_Overview_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemDoubleClick
struct UW_Loadout_Overview_C_OverviewItemDoubleClick_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemClicked
struct UW_Loadout_Overview_C_OverviewItemClicked_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemHover
struct UW_Loadout_Overview_C_OverviewItemHover_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OverviewItemUnhover
struct UW_Loadout_Overview_C_OverviewItemUnhover_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_CleanWeapon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B0 (0x5B0 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OpenQuartermaster
struct UW_Loadout_Overview_C_OpenQuartermaster_Params
{
public:
	class UClass*                                ItemToModify;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4186[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupTable;                                   // 0x10(0x5A0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentSlot
struct UW_Loadout_Overview_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.UpdateCurrentItemMap
struct UW_Loadout_Overview_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SwapQuartermasterWeapon
struct UW_Loadout_Overview_C_SwapQuartermasterWeapon_Params
{
public:
	bool                                         IsPrimary;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotClicked
struct UW_Loadout_Overview_C_AttachmentSlotClicked_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachmentSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotHovered
struct UW_Loadout_Overview_C_AttachmentSlotHovered_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachmentSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.SetLoadoutWidget
struct UW_Loadout_Overview_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B0 (0x5B0 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.RefreshQuartermasterList
struct UW_Loadout_Overview_C_RefreshQuartermasterList_Params
{
public:
	class UClass*                                ItemToModify;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_418A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupTable;                                   // 0x10(0x5A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.HideOverviewWidgets
struct UW_Loadout_Overview_C_HideOverviewWidgets_Params
{
public:
	float                                        AnimationOffset;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_WeaponPresets_K2Node_ComponentBoundEvent_3_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_Dropdown_ArmorCoverage_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.AttachmentSlotUnhovered
struct UW_Loadout_Overview_C_AttachmentSlotUnhovered_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachmentSlot;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_6_OnOptionHovered__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_7_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_LoadoutPresets_K2Node_ComponentBoundEvent_8_OnFooterOptionSelected__DelegateSignature_Params
{
public:
	class FString                                OptionID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ModifiedPreset_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_ClearPresetWarning_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Primary_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature
struct UW_Loadout_Overview_C_BndEvt__W_Loadout_Overview_btn_Quartermaster_Sidearm_K2Node_ComponentBoundEvent_11_Selected__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17C0 (0x17C0 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.ExecuteUbergraph_W_Loadout_Overview
struct UW_Loadout_Overview_C_ExecuteUbergraph_W_Loadout_Overview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_41A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay_1;                              // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delay;                                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x88(0x188)(None)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot_3;               // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot_2;               // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot_1;               // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      K2Node_CustomEvent_TriggeringSlot;                 // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_4;               // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_ItemToModify_1;                 // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemLookupTable                      K2Node_CustomEvent_ItemLookupTable_1;              // 0x240(0x5A0)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x7E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x7E8(0x50)(None)
	bool                                         K2Node_CustomEvent_IsPrimary;                      // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x840(0x10)(ZeroConstructor, NoDestructor)
	class UW_LoadoutSlot_Attachment_C*           K2Node_CustomEvent_TriggeringAttachmentSlot_2;     // 0x850(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_Attachment_C*           K2Node_CustomEvent_TriggeringAttachmentSlot_1;     // 0x858(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x860(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_ItemToModify;                   // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemLookupTable                      K2Node_CustomEvent_ItemLookupTable;                // 0x870(0x5A0)(ConstParm)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0xE10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0xE20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0xE30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xE44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0xE48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xE4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0xE58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0xE60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0xE70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_AnimationOffset;                // 0xE84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID_4;             // 0xE88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xE9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xEA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xEA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      K2Node_Select_Default;                             // 0xEA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xEB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_2;  // 0xEB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2; // 0xEC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xEC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result_3;  // 0xED0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3; // 0xED8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xEE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_OptionID_3;             // 0xEE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EArmourCoverage                   CallFunc_Map_Find_Value;                           // 0xEF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xEF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41BB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Hide_self_CastInput;                      // 0xF00(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0xF10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0xF18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI_1;            // 0xF20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF3C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_41BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xF50(0x18)(None)
	class UW_LoadoutSlot_Attachment_C*           K2Node_CustomEvent_TriggeringAttachmentSlot;       // 0xF68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID_2;             // 0xF70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xF80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_OptionID_1;             // 0xF88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringNotEmpty_ReturnValue;               // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0xF9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_OptionID;               // 0xFA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xFB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadoutPreset                        CallFunc_Map_Find_Value_1;                         // 0xFC0(0x190)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x1150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadoutPreset                        CallFunc_Map_Find_Value_2;                         // 0x1158(0x190)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x12E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout;            // 0x12F0(0x188)(None)
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout_1;          // 0x1478(0x188)(None)
	struct FSavedLoadout                         CallFunc_GetLoadoutInfo_Active_Loadout_2;          // 0x1600(0x188)(None)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x1788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_3;               // 0x1790(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_2;               // 0x1798(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x17A0(0x10)(ZeroConstructor, NoDestructor)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x17B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x17B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotUnhovered__DelegateSignature
struct UW_Loadout_Overview_C_OnAttachmentSlotUnhovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachment;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotHovered__DelegateSignature
struct UW_Loadout_Overview_C_OnAttachmentSlotHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachment;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnAttachmentSlotClicked__DelegateSignature
struct UW_Loadout_Overview_C_OnAttachmentSlotClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_Attachment_C*           TriggeringAttachment;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnQuartermasterWeaponSwapped__DelegateSignature
struct UW_Loadout_Overview_C_OnQuartermasterWeaponSwapped__DelegateSignature_Params
{
public:
	bool                                         IsPrimary;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_C*                      NewLoadoutSlot;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemDoubleClicked__DelegateSignature
struct UW_Loadout_Overview_C_OnOverviewItemDoubleClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemClicked__DelegateSignature
struct UW_Loadout_Overview_C_OnOverviewItemClicked__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemUnhovered__DelegateSignature
struct UW_Loadout_Overview_C_OnOverviewItemUnhovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Overview.W_Loadout_Overview_C.OnOverviewItemHovered__DelegateSignature
struct UW_Loadout_Overview_C_OnOverviewItemHovered__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_C*                      TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


