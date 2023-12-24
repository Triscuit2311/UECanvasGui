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

// 0x31 (0x31 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromClass
struct UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromClass_Params
{
public:
	class UClass*                                InItemClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Return_Value;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetInventoryItemOfClass_ReturnValue;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.GetIconImageFromCategory
struct UW_ItemSelection_ItemGroup_V2_C_GetIconImageFromCategory_Params
{
public:
	enum class EItemCategory                     InItemCategory;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Return_Value;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetInventoryItemOfType_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.HasAnyItems
struct UW_ItemSelection_ItemGroup_V2_C_HasAnyItems_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABasePlayer_C*                         K2Node_DynamicCast_AsBase_Player;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyInventoryItemsOfType_ReturnValue;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.SetKeybindText
struct UW_ItemSelection_ItemGroup_V2_C_SetKeybindText_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyFromInputActionName_ReturnValue;    // 0x8(0x18)(HasGetValueTypeHash)
	struct FRonKey                               CallFunc_ConvertUnrealKeyToRonKey_ReturnValue;     // 0x20(0xA8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFadeOutAnim
struct UW_ItemSelection_ItemGroup_V2_C_PlayFadeOutAnim_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Set Icon Image
struct UW_ItemSelection_ItemGroup_V2_C_Set_Icon_Image_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlaySelectFailedAnim
struct UW_ItemSelection_ItemGroup_V2_C_PlaySelectFailedAnim_Params
{
public:
	bool                                         bPlaySound;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E88[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ShowScrollHint
struct UW_ItemSelection_ItemGroup_V2_C_ShowScrollHint_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayUnfocusAnim
struct UW_ItemSelection_ItemGroup_V2_C_PlayUnfocusAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.PlayFocusAnim
struct UW_ItemSelection_ItemGroup_V2_C_PlayFocusAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Initialize
struct UW_ItemSelection_ItemGroup_V2_C_Initialize_Params
{
public:
	struct FItemSelectionGroup                   ItemGroupSetting;                                  // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bLastGroup;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E89[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.Tick
struct UW_ItemSelection_ItemGroup_V2_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function W_ItemSelection_ItemGroup_V2.W_ItemSelection_ItemGroup_V2_C.ExecuteUbergraph_W_ItemSelection_ItemGroup_V2
struct UW_ItemSelection_ItemGroup_V2_C_ExecuteUbergraph_W_ItemSelection_ItemGroup_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyItems_Return_Value;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x48(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x70(0x28)(None)
	bool                                         CallFunc_HasAnyItems_Return_Value_1;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyItems_Return_Value_2;               // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


