#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x2E8 - 0x228)
// BlueprintGeneratedClass BP_RoNBloodPool.BP_RoNBloodPool_C
class ABP_RoNBloodPool_C : public ABloodPool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x230(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        RandomPick;                                        // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BloodExpansionRate;                                // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BloodExpansionCurrent;                             // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBleeding;                                         // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    AnimationCurve;                                    // 0x260(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_RoNBloodPool_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_RoNBloodPool(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_FClamp_ReturnValue, float CallFunc_GetRuntimeFloatCurveValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


