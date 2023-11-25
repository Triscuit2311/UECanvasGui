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
	 * BlueprintGeneratedClass Primary_SawnOff.Primary_SawnOff_C
	 * Size -> 0x0020 (FullSize[0x1320] - InheritedSize[0x1300])
	 */
	class APrimary_SawnOff_C : public AShotgun
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                  PointLight;                                              // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                   PointLight1;                                             // 0x1310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          LightToggle1P;                                           // 0x1318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void Multicast_EnableLight();
		void Multicast_DisableLight();
		void OnAttachmentActivated_Event_1(EItemAttachment AttachmentChanged);
		void OnAttachmentDeactivated_Event_1(EItemAttachment AttachmentChanged);
		void ReceiveBeginPlay();
		void Server_DisableLight();
		void Server_EnableLight();
		void ExecuteUbergraph_Primary_SawnOff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
