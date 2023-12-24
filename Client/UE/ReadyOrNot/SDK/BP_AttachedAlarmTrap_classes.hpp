#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x350 - 0x340)
// BlueprintGeneratedClass BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C
class ABP_AttachedAlarmTrap_C : public ATrapActorAttachedToDoor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   TrapDeactivateAudio;                               // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AttachedAlarmTrap_C* GetDefaultObj();

	void OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy);
	void OnTrapDisarmed(class AReadyOrNotCharacter* DisarmedBy);
	void ExecuteUbergraph_BP_AttachedAlarmTrap(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_Event_TriggeredBy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_DisarmedBy);
};

}


