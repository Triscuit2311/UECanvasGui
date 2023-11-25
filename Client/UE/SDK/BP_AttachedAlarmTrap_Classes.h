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
	 * BlueprintGeneratedClass BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class ABP_AttachedAlarmTrap_C : public ATrapActorAttachedToDoor
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFMODAudioComponent*                                   TrapDeactivateAudio;                                     // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy);
		void OnTrapDisarmed(class AReadyOrNotCharacter* DisarmedBy);
		void ExecuteUbergraph_BP_AttachedAlarmTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
