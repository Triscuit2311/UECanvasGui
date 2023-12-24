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

// 0x20 (0x20 - 0x0)
// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.CreateAttachmentElement
struct UW_LoadoutInformationBox_C_CreateAttachmentElement_Params
{
public:
	TArray<class UWeaponAttachment*>             Attachments;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<enum class EWeaponAttachmentType>     AttachmentTypes;                                   // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.CreateEffectsElement
struct UW_LoadoutInformationBox_C_CreateEffectsElement_Params
{
public:
	TArray<struct FAttachmentEffects>            AttachmentEffects;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.UpdateAmmoInfo
struct UW_LoadoutInformationBox_C_UpdateAmmoInfo_Params
{
public:
	class FName                                  AmmoName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x418 (0x418 - 0x0)
// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.ExecuteUbergraph_W_LoadoutInformationBox
struct UW_LoadoutInformationBox_C_ExecuteUbergraph_W_LoadoutInformationBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWeaponAttachment*>             K2Node_Event_Attachments;                          // 0x20(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<enum class EWeaponAttachmentType>     K2Node_Event_AttachmentTypes;                      // 0x30(0x10)(ConstParm, ReferenceParm)
	enum class EWeaponAttachmentType             CallFunc_Array_Get_Item;                           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWeaponAttachment*                     CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_String__CombineStrings_ReturnValue;       // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x90(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutInformationElement_C*        CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInformationElement_C*        CallFunc_Create_ReturnValue_1;                     // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutInformationElement_C*        CallFunc_Create_ReturnValue_2;                     // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttachmentEffects>            K2Node_Event_AttachmentEffects;                    // 0xF8(0x10)(ConstParm, ReferenceParm)
	struct FAttachmentEffects                    CallFunc_Array_Get_Item_2;                         // 0x108(0x20)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin_2;                        // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x160(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x178(0x18)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x190(0x28)(None)
	class FName                                  K2Node_CustomEvent_AmmoName;                       // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_CategoryText;                   // 0x1C0(0x18)(None)
	struct FAmmoTypeData                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x1D8(0x160)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x340(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x358(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x398(0x40)(HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_2;                           // 0x3D8(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3F0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x400(0x18)(None)
};

}
}


