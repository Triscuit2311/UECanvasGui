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

// 0x10 (0x10 - 0x0)
// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.AlertOtherSuspectsInTeam_Blueprint
struct AFaction_BoltonSecurity_C_AlertOtherSuspectsInTeam_Blueprint_Params
{
public:
	class ASuspectCharacter*                     Suspect;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  Enemy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.OnAIAdded_Blueprint
struct AFaction_BoltonSecurity_C_OnAIAdded_Blueprint_Params
{
public:
	class ACyberneticCharacter*                  Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Faction_BoltonSecurity.Faction_BoltonSecurity_C.ExecuteUbergraph_Faction_BoltonSecurity
struct AFaction_BoltonSecurity_C_ExecuteUbergraph_Faction_BoltonSecurity_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3714[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASuspectCharacter*                     K2Node_Event_Suspect;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_Enemy;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  K2Node_Event_Character;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


