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
// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.PreConstruct
struct UW_Briefing_Dossier_Rapsheet_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C.ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry
struct UW_Briefing_Dossier_Rapsheet_Entry_C_ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_383D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x20(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


