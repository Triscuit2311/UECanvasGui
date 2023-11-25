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
	 * BlueprintGeneratedClass SeekPlayerCombatMove.SeekPlayerCombatMove_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class USeekPlayerCombatMove_C : public UBaseCombatMoveActivity
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0218(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AReadyOrNotCharacter*                                  SeekingPlayer;                                           // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OverrideFocalPoint_Blueprint(struct FVector* FocalPoint);
		void RequestCombatMove_Blueprint(float DeltaTime);
		void StartActivity_Blueprint(class AAIController* Owner);
		void FinishedActivity_Blueprint(bool bSuccess);
		void ExecuteUbergraph_SeekPlayerCombatMove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
