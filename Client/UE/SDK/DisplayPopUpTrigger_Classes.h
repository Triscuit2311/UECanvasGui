#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * BlueprintGeneratedClass DisplayPopUpTrigger.DisplayPopUpTrigger_C
	 * Size -> 0x0024 (FullSize[0x0274] - InheritedSize[0x0250])
	 */
	class ADisplayPopUpTrigger_C : public AReadyOrNotTriggerVolume
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                  Text;                                                    // 0x0258(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                        Cooldown;                                                // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor);
		void ExecuteUbergraph_DisplayPopUpTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
