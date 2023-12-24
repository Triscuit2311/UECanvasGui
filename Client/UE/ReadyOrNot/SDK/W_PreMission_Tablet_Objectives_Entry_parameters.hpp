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

// 0x4C (0x4C - 0x0)
// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.UpdateObjectiveState
struct UW_PreMission_Tablet_Objectives_Entry_C_UpdateObjectiveState_Params
{
public:
	enum class EObjectiveStatus                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1827[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EObjectiveStatus                  CallFunc_GetObjectiveStatus_ReturnValue;           // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EObjectiveStatus                  Temp_byte_Variable_1;                              // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                    Temp_byte_Variable_2;                              // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                    Temp_byte_Variable_3;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                    Temp_byte_Variable_4;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheckBoxState                    K2Node_Select_Default;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.PreConstruct
struct UW_PreMission_Tablet_Objectives_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.Tick
struct UW_PreMission_Tablet_Objectives_Entry_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.OnObjectiveUpdated
struct UW_PreMission_Tablet_Objectives_Entry_C_OnObjectiveUpdated_Params
{
public:
	class AObjective*                            Objective;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C.ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry
struct UW_PreMission_Tablet_Objectives_Entry_C_ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1846[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EObjectiveStatus                  CallFunc_GetObjectiveStatus_ReturnValue;           // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1848[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AObjective*                            CallFunc_GetClassDefaultObject_ReturnValue;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFormattedDescription_ReturnValue;      // 0x50(0x18)(None)
	class FText                                  CallFunc_GetFormattedName_ReturnValue;             // 0x68(0x18)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetFormattedDescription_ReturnValue_1;    // 0x88(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetFormattedName_ReturnValue_1;           // 0xA8(0x18)(None)
	class AObjective*                            K2Node_CustomEvent_Objective;                      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class ADefuseBombThreats*                    K2Node_DynamicCast_AsDefuse_Bomb_Threats;          // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


