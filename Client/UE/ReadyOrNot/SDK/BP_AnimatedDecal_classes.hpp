#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x2DC - 0x2B8)
// BlueprintGeneratedClass BP_AnimatedDecal.BP_AnimatedDecal_C
class ABP_AnimatedDecal_C : public AAnimatedDecal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   BillBoard;                                         // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTime;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TimeParameter;                                     // 0x2D4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnimatedDecal_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void SetAnimatedDecalMaterial(class UMaterialInterface* Material);
	void ExecuteUbergraph_BP_AnimatedDecal(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetRuntimeFloatCurveValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInterface* K2Node_Event_Material, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


