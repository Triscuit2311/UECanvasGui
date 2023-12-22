#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x8F0 - 0x8E0)
// BlueprintGeneratedClass GS_COOP.GS_COOP_C
class AGS_COOP_C : public ACoopGS
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                NewVar_0;                                          // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGS_COOP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GS_COOP(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASceneCapturePlayerCamera_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


