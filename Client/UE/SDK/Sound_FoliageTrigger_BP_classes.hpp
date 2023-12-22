#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x30C - 0x220)
// BlueprintGeneratedClass Sound_FoliageTrigger_BP.Sound_FoliageTrigger_BP_C
class ASound_FoliageTrigger_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Sound_to_Play;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Height_of_Foliage;                                 // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AReadyOrNotCharacter*, class UFMODAudioComponent*> Actors_FMOD;                                       // 0x240(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ChildCollide;                                      // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMODParam>                     Params;                                            // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EOcclusionType                    Occlusion_Type;                                    // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ABC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AReadyOrNotCharacter*, class USoundSource*> Actors_SoundSource;                                // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Debug_;                                            // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ABE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Parameter_Name;                                    // 0x304(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASound_FoliageTrigger_BP_C* GetDefaultObj();

	void BndEvt__Sound_CharacterTrigger_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Sound_FoliageTrigger_BP_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Debug();
	void FoliageMovement();
	void HealthCheck();
	void HealthSend(class AReadyOrNotCharacter* ReadyOrNotChar);
	void ExecuteUbergraph_Sound_FoliageTrigger_BP(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UFMODAudioComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UFMODAudioComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWorld* CallFunc_GetWorldStatic_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USoundSource* CallFunc_CreateThirdPersonSound_ReturnValue, const struct FFMODOcclusionDetails& K2Node_MakeStruct_FMODOcclusionDetails, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class USceneComponent* CallFunc_Array_Get_Item, class UBoxComponent* K2Node_DynamicCast_AsBox_Collision, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsOverlappingActor_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, TArray<class AReadyOrNotCharacter*>& CallFunc_Map_Keys_Keys, class AReadyOrNotCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, class USoundSource* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_VSize_ReturnValue, class AReadyOrNotCharacter* K2Node_CustomEvent_ReadyOrNotChar, int32 CallFunc_Map_Length_ReturnValue, TArray<class AReadyOrNotCharacter*>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class AReadyOrNotCharacter* CallFunc_Array_Get_Item_2, float CallFunc_GetCurrentHealth_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class UFMODAudioComponent* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class USceneComponent* CallFunc_Array_Get_Item_3, class UBoxComponent* K2Node_DynamicCast_AsBox_Collision_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOverlappingActor_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


