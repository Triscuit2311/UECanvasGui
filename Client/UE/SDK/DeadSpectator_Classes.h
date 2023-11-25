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
	 * BlueprintGeneratedClass DeadSpectator.DeadSpectator_C
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class ADeadSpectator_C : public ASpectatePawn
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceivePossessed(class AController* NewController);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ReceiveUnpossessed(class AController* OldController);
		void ClientRemoveHUID();
		void CreateHUD();
		void Client_SpecNextPlayer();
		void ExecuteUbergraph_DeadSpectator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
