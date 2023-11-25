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
	 * BlueprintGeneratedClass CyberneticsSuspect_V2.CyberneticsSuspect_V2_C
	 * Size -> 0x0010 (FullSize[0x1FE0] - InheritedSize[0x1FD0])
	 */
	class ACyberneticsSuspect_V2_C : public ASuspectCharacter
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1FD0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                  InBoneName;                                              // 0x1FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__CyberneticsSuspect_V2_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_CyberneticsSuspect_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
