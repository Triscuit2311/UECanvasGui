#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x16D8 - 0x16C0)
// BlueprintGeneratedClass Secondary_Taser_V2.Secondary_Taser_V2_C
class ASecondary_Taser_V2_C : public ATaser
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x16C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        OverallTaserWireLength;                            // 0x16C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastLocation;                                      // 0x16CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_Taser_V2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_Secondary_Taser_V2(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector>& CallFunc_GetCableParticleLocations_Locations, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


