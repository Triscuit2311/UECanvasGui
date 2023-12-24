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

// 0x44 (0x44 - 0x0)
// Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText
struct UBulletImpactDebug_C_AddDebugText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBulletImpactDebugText_C*              CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle
struct UBulletImpactDebug_C_SetDebugTitle_Params
{
public:
	class FString                                NewTitle;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText
struct UBulletImpactDebug_C_SetDebugText_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NewText;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug
struct UBulletImpactDebug_C_ExecuteUbergraph_BulletImpactDebug_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_NewTitle;                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
	int32                                        K2Node_Event_ID;                                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_NewText;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(None)
	TArray<class UBulletImpactDebugText_C*>      CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x68(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBulletImpactDebugText_C*              CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


