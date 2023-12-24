#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x259 - 0x220)
// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
class ABP_Lantern_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight1;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lantern_Lantern_Hanger;                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lantern_Lantern;                                // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Lantern_Flames;                                 // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOn;                                              // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Lantern_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Lantern(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


