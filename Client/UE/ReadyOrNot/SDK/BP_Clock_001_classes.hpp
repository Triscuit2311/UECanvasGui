#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass BP_Clock_001.BP_Clock_001_C
class ABP_Clock_001_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Seconds;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_clock_Minutes_001;                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Clock_Hours_001;                                // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Clock_001;                                      // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ENUM_Clock_002                    Clock_Function;                                    // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Adjust_Timezone_PlusMinus;                         // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Pick_Hour;                                         // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Pick_Minute;                                       // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENUM_CLock_001                    Pick_material;                                     // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Plastic_Color;                                     // 0x26C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Plastic_Roughness;                                 // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Plastic_Specular;                                  // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Store_Hour;                                        // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Store_minute;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reset_Minutes;                                     // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Reset_Hours;                                       // 0x28D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Second_hold;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USoundWave*>                    Clicking_sounds;                                   // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Clock_001_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Clock_001(int32 EntryPoint, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_BreakDateTime_Year_1, int32 CallFunc_BreakDateTime_Month_1, int32 CallFunc_BreakDateTime_Day_1, int32 CallFunc_BreakDateTime_Hour_1, int32 CallFunc_BreakDateTime_Minute_1, int32 CallFunc_BreakDateTime_Second_1, int32 CallFunc_BreakDateTime_Millisecond_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


