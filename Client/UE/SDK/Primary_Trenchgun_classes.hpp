#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x14C0 - 0x14A0)
// BlueprintGeneratedClass Primary_Trenchgun.Primary_Trenchgun_C
class APrimary_Trenchgun_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x14A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   PointLight1;                                       // 0x14B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightToggle1P;                                     // 0x14B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APrimary_Trenchgun_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void Multicast_EnableLight();
	void Multicast_DisableLight();
	void OnAttachmentActivated_Event_0(enum class EItemAttachment AttachmentChanged);
	void OnAttachmentDeactivated_Event_0(enum class EItemAttachment AttachmentChanged);
	void ReceiveBeginPlay();
	void Server_DisableLight();
	void Server_EnableLight();
	void ExecuteUbergraph_Primary_Trenchgun(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged_1, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged, bool K2Node_SwitchEnum_CmpSuccess);
};

}


