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
	 * BlueprintGeneratedClass BP_Evidence_Meth_Contraband_3.BP_Evidence_Meth_Contraband_2_C
	 * Size -> 0x0029 (FullSize[0x02E9] - InheritedSize[0x02C0])
	 */
	class ABP_Evidence_Meth_Contraband_2_C : public AGenericEvidenceActor_C
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                  PickupStaticMesh7;                                       // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                  PickupStaticMesh2;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                  PickupStaticMesh1;                                       // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                          UpdatePhoneState_Handle;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                         bPhoneOn;                                                // 0x02E8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_bPhoneOn();
		void TurnOnPhone();
		void TurnOffPhone();
		void UpdatePhoneState();
		void Server_SetPhoneState(bool bOn);
		void OnActorPickedUp_Event_1(class AActor* PickedActor);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Evidence_Meth_Contraband_3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
