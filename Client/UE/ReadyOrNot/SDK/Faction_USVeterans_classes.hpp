#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// BlueprintGeneratedClass Faction_USVeterans.Faction_USVeterans_C
class AFaction_USVeterans_C : public AAIFactionManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  Sailor;                                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  Laurie;                                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFaction_USVeterans_C* GetDefaultObj();

	void OnAIAdded_Blueprint(class ACyberneticCharacter* Character);
	void AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy);
	void ExecuteUbergraph_Faction_USVeterans(int32 EntryPoint, class ACyberneticCharacter* K2Node_Event_Character, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, class ASuspectCharacter* K2Node_Event_Suspect, class AReadyOrNotCharacter* K2Node_Event_Enemy);
};

}


