#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// BlueprintGeneratedClass Faction_BoltonSecurity.Faction_BoltonSecurity_C
class AFaction_BoltonSecurity_C : public AAIFactionManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  LeviShanks;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFaction_BoltonSecurity_C* GetDefaultObj();

	void AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy);
	void OnAIAdded_Blueprint(class ACyberneticCharacter* Character);
	void ExecuteUbergraph_Faction_BoltonSecurity(int32 EntryPoint, class ASuspectCharacter* K2Node_Event_Suspect, class AReadyOrNotCharacter* K2Node_Event_Enemy, class ACyberneticCharacter* K2Node_Event_Character, bool CallFunc_ActorHasTag_ReturnValue);
};

}


