#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x261 - 0x220)
// BlueprintGeneratedClass Sound_LookAtParameterTrigger_BP.Sound_LookAtParameterTrigger_BP_C
class ASound_LookAtParameterTrigger_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      LookAt_Trigger;                                    // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Persistent_Line_Check_;                            // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3996[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Range_Of_Trace;                                    // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMOD_Event_to_Change;                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FMOD_Parameter_to_Change;                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFMODEventInstance>            FMOD_Instances;                                    // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsLookedAt;                                        // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASound_LookAtParameterTrigger_BP_C* GetDefaultObj();

	void BndEvt__Sound_LookAtParameterTrigger_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void LookTrigger();
	void BndEvt__Sound_LookAtParameterTrigger_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void LookTriggerPersistent();
	void ExecuteUbergraph_Sound_LookAtParameterTrigger_BP(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation_1, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FFMODEventInstance>& CallFunc_FindEventInstances_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, const struct FFMODEventInstance& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, const struct FFMODEventInstance& CallFunc_Array_Get_Item_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


