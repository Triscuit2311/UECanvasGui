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

// 0x8 (0x8 - 0x0)
// Function Faction_USVeterans.Faction_USVeterans_C.OnAIAdded_Blueprint
struct AFaction_USVeterans_C_OnAIAdded_Blueprint_Params
{
public:
	class ACyberneticCharacter*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Faction_USVeterans.Faction_USVeterans_C.AlertOtherSuspectsInTeam_Blueprint
struct AFaction_USVeterans_C_AlertOtherSuspectsInTeam_Blueprint_Params
{
public:
	class ASuspectCharacter*                     Suspect;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  Enemy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Faction_USVeterans.Faction_USVeterans_C.ExecuteUbergraph_Faction_USVeterans
struct AFaction_USVeterans_C_ExecuteUbergraph_Faction_USVeterans_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4611[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACyberneticCharacter*                  K2Node_Event_Character;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActorHasTag_ReturnValue_1;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4612[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASuspectCharacter*                     K2Node_Event_Suspect;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_Enemy;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


