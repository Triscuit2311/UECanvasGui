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

// 0x14D (0x14D - 0x0)
// Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData
struct ULibrary_UI_BriefingFunctions_C_GetTimelineEventTestData_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            Audio_Asset;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimelineEvent>                Events;                                            // 0x10(0x10)(Parm, OutParm)
	TMap<float, struct FTimelineEvent>           EventEntries;                                      // 0x20(0x50)(Parm, OutParm)
	TMap<float, struct FTimelineEvent>           TestDataEntries;                                   // 0x70(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Briefing_Entry                    CallFunc_GetDataTableRowFromName_OutRow;           // 0xD0(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimelineEvent                        CallFunc_Array_Get_Item;                           // 0xF8(0x50)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


