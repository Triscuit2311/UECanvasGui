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
	 * BlueprintGeneratedClass BP_BallisticShield.BP_BallisticShield_C
	 * Size -> 0x0014 (FullSize[0x0924] - InheritedSize[0x0910])
	 */
	class ABP_BallisticShield_C : public ABallisticsShield
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0910(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFMODAudioComponent*                                   FMOD_3P_Hit;                                             // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                        GlassPhaseParam;                                         // 0x0920(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void Server_UpdateGlass(float ParamValue);
		void BndEvt__BP_BallisticShield_FBI_ItemMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_BallisticShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
