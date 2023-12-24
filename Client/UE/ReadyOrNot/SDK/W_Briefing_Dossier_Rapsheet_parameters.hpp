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
// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.PreConstruct
struct UW_Briefing_Dossier_Rapsheet_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.Initialize
struct UW_Briefing_Dossier_Rapsheet_C_Initialize_Params
{
public:
	TArray<struct FCriminalRecord>               CriminalRecord;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x75 (0x75 - 0x0)
// Function W_Briefing_Dossier_Rapsheet.W_Briefing_Dossier_Rapsheet_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet
struct UW_Briefing_Dossier_Rapsheet_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_383E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCriminalRecord>               K2Node_CustomEvent_CriminalRecord;                 // 0x18(0x10)(ConstParm, ReferenceParm)
	class UW_Briefing_Dossier_Rapsheet_Entry_C*  CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCriminalRecord                       CallFunc_Array_Get_Item;                           // 0x30(0x38)(None)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


