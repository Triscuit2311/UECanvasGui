#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Challenge_ArrestSomeone.Challenge_ArrestSomeone_C
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UChallenge_ArrestSomeone_C : public UChallenge
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0070(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnChallengeInit(class AReadyOrNotGameState* gs);
		void OnCharacterArrested(class AReadyOrNotCharacter* ArrestedCharacter, class AReadyOrNotCharacter* Arrester);
		void OnChallengeAchieved();
		void ExecuteUbergraph_Challenge_ArrestSomeone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
