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
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BackPage
struct UW_Loadout_Page_ArmorMunitions_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.GetFocusTarget
struct UW_Loadout_Page_ArmorMunitions_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveMaterial
struct UW_Loadout_Page_ArmorMunitions_C_UpdateActiveMaterial_Params
{
public:
	class UArmourMaterial*                       CurrentMaterial;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3630[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x18(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UArmourMaterial*>               CallFunc_Map_Values_Values;                        // 0x38(0x10)(ReferenceParm)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                       CallFunc_Array_Get_Item_1;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3631[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArmourMaterial*                       CallFunc_GetActiveArmorMaterial_ReturnValue;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveCoverage
struct UW_Loadout_Page_ArmorMunitions_C_UpdateActiveCoverage_Params
{
public:
	enum class EArmourCoverage                   CurrentCoverage;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x18(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<enum class EArmourCoverage>           CallFunc_Map_Values_Values;                        // 0x38(0x10)(ReferenceParm)
	enum class EArmourCoverage                   CallFunc_Array_Get_Item_1;                         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3634[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmourCoverage                   CallFunc_GetArmorCoverage_ReturnValue;             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BP_GetDesiredFocusTarget
struct UW_Loadout_Page_ArmorMunitions_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateMaterials
struct UW_Loadout_Page_ArmorMunitions_C_PopulateMaterials_Params
{
public:
	TMap<class FString, class FText>             ButtonOptions;                                     // 0x0(0x50)(Edit, BlueprintVisible)
	class FString                                ButtonID;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UArmourMaterial*                       ArmorMaterial;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x74(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x84(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x94(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3637[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UArmourMaterial*>               CallFunc_GetArmorMaterials_ReturnValue;            // 0xC0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3638[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UArmourMaterial*                       CallFunc_Array_Get_Item;                           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateCoverage
struct UW_Loadout_Page_ArmorMunitions_C_PopulateCoverage_Params
{
public:
	TMap<class FString, class FText>             ButtonOptions;                                     // 0x0(0x50)(Edit, BlueprintVisible)
	enum class EArmourCoverage                   CoverageValue;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ButtonID;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_363B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetArmorCoverageText_CoverageText;        // 0xB0(0x18)(None)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xCC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3640[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xF0(0x10)(ZeroConstructor, NoDestructor)
};

// 0xA5 (0xA5 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.PopulateArmor
struct UW_Loadout_Page_ArmorMunitions_C_PopulateArmor_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   NewWidget;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3648[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseItem>                 CallFunc_GetActiveBodyArmor_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetClassFromObject_ReturnValue;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3649[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABaseItem*>                     CallFunc_GetBodyArmors_ReturnValue;                // 0x88(0x10)(ReferenceParm)
	class ABaseItem*                             CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.OnArmorClicked
struct UW_Loadout_Page_ArmorMunitions_C_OnArmorClicked_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.OnArmorHovered
struct UW_Loadout_Page_ArmorMunitions_C_OnArmorHovered_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.CoverageOptionClicked
struct UW_Loadout_Page_ArmorMunitions_C_CoverageOptionClicked_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.CoverageOptionHovered
struct UW_Loadout_Page_ArmorMunitions_C_CoverageOptionHovered_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.SetLoadoutWidget
struct UW_Loadout_Page_ArmorMunitions_C_SetLoadoutWidget_Params
{
public:
	class UW_Loadout_C*                          LoadoutWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.MaterialClicked
struct UW_Loadout_Page_ArmorMunitions_C_MaterialClicked_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.MaterialHovered
struct UW_Loadout_Page_ArmorMunitions_C_MaterialHovered_Params
{
public:
	class FString                                ButtonID;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           TriggeringButton;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Carousel_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.ChangePage
struct UW_Loadout_Page_ArmorMunitions_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature
struct UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Ammo_K2Node_ComponentBoundEvent_1_OnMunitionHovered__DelegateSignature_Params
{
public:
	class UW_Loadout_Munitions_C*                TriggeringList;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateCurrentItemMap
struct UW_Loadout_Page_ArmorMunitions_C_UpdateCurrentItemMap_Params
{
public:
	TMap<enum class EItemCategory, class UClass*> ItemCategory;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateCurrentSlot
struct UW_Loadout_Page_ArmorMunitions_C_UpdateCurrentSlot_Params
{
public:
	class UW_LoadoutSlot_C*                      CurrentSlot;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature
struct UW_Loadout_Page_ArmorMunitions_C_BndEvt__W_Loadout_Page_ArmorMunitions_Deployables_K2Node_ComponentBoundEvent_2_OnMunitionHovered__DelegateSignature_Params
{
public:
	class UW_Loadout_Munitions_C*                TriggeringList;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.UpdateActiveLoadout
struct UW_Loadout_Page_ArmorMunitions_C_UpdateActiveLoadout_Params
{
public:
	struct FSavedLoadout                         ActiveLoadout;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.SetInputMode
struct UW_Loadout_Page_ArmorMunitions_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.Hide
struct UW_Loadout_Page_ArmorMunitions_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.Reveal
struct UW_Loadout_Page_ArmorMunitions_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.HeaderSubpageNavigation
struct UW_Loadout_Page_ArmorMunitions_C_HeaderSubpageNavigation_Params
{
public:
	class FName                                  OptionNameID;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function W_Loadout_Page_ArmorMunitions.W_Loadout_Page_ArmorMunitions_C.ExecuteUbergraph_W_Loadout_Page_ArmorMunitions
struct UW_Loadout_Page_ArmorMunitions_C_ExecuteUbergraph_W_Loadout_Page_ArmorMunitions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_OptionNameID;                         // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3650[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ButtonID_3;                     // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_TriggeringButton_3;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ButtonID_2;                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_TriggeringButton_2;             // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmourCoverage                   CallFunc_Map_Find_Value;                           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3651[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_C*                          K2Node_Event_LoadoutWidget;                        // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_CustomEvent_TriggeringSlot;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_CustomEvent_TriggeringSlot_1;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3652[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ButtonID_1;                     // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_TriggeringButton_1;             // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ButtonID;                       // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_CustomEvent_TriggeringButton;               // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;        // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                       CallFunc_Map_Find_Value_1;                         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3653[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;        // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                       CallFunc_Map_Find_Value_2;                         // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3654[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_PageName;                             // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3655[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_Munitions_C*                K2Node_ComponentBoundEvent_TriggeringList_1;       // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_1;       // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory;                         // 0x118(0x50)(None)
	class UW_LoadoutSlot_C*                      K2Node_Event_CurrentSlot;                          // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_Munitions_C*                K2Node_ComponentBoundEvent_TriggeringList;         // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot;         // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_Event_ActiveLoadout;                        // 0x180(0x188)(None)
	bool                                         K2Node_Event_IsGamepad;                            // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3656[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay_1;                              // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3657[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


