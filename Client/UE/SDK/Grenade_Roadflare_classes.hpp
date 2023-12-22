#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xE7C - 0xE50)
// BlueprintGeneratedClass Grenade_Roadflare.Grenade_Roadflare_C
class AGrenade_Roadflare_C : public ABaseGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  FlareLight;                                        // 0xE58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeoutPeriod;                                     // 0xE60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadingOut_;                                       // 0xE64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityTarget;                                   // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4493[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_LenFlare_RoadFlare_C*              Lens_Flare;                                        // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessDefault;                                 // 0xE78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenade_Roadflare_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DetonateBind(class ABaseGrenade* Grenade);
	void GrenadeTimedOut();
	void ExecuteUbergraph_Grenade_Roadflare(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class ABaseGrenade* K2Node_CustomEvent_Grenade, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_LenFlare_RoadFlare_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


