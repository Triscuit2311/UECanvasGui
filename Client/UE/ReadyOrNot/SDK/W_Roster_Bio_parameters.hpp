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

// 0x18 (0x18 - 0x0)
// Function W_Roster_Bio.W_Roster_Bio_C.SetBioText
struct UW_Roster_Bio_C_SetBioText_Params
{
public:
	class FText                                  BioText;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function W_Roster_Bio.W_Roster_Bio_C.ExecuteUbergraph_W_Roster_Bio
struct UW_Roster_Bio_C_ExecuteUbergraph_W_Roster_Bio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1667[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_BioText;                        // 0x8(0x18)(None)
};

}
}


