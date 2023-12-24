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
// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.PreConstruct
struct UW_RoundupWidgetEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.Set Text
struct UW_RoundupWidgetEntry_C_Set_Text_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function W_RoundupWidgetEntry.W_RoundupWidgetEntry_C.ExecuteUbergraph_W_RoundupWidgetEntry
struct UW_RoundupWidgetEntry_C_ExecuteUbergraph_W_RoundupWidgetEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Text;                           // 0x8(0x18)(None)
};

}
}


