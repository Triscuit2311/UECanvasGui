#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x78 - 0x70)
// BlueprintGeneratedClass Challenge_ArrestSomeone.Challenge_ArrestSomeone_C
class UChallenge_ArrestSomeone_C : public UChallenge
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UChallenge_ArrestSomeone_C* GetDefaultObj();

	void OnChallengeInit(class AReadyOrNotGameState* Gs);
	void OnChallengeAchieved();
	void OnCharacterArrested_Event_0(class AReadyOrNotCharacter* Character, class AReadyOrNotCharacter* ArrestedBy);
	void ExecuteUbergraph_Challenge_ArrestSomeone(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_CustomEvent_Character, class AReadyOrNotCharacter* K2Node_CustomEvent_ArrestedBy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotGameState* K2Node_Event_gs);
};

}


