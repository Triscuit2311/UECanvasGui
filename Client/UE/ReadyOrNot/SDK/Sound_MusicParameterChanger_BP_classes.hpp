#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x275 - 0x220)
// BlueprintGeneratedClass Sound_MusicParameterChanger_BP.Sound_MusicParameterChanger_BP_C
class ASound_MusicParameterChanger_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   BillBoard;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            Event;                                             // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    Event_Instance;                                    // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                  Parameter_Name;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Sphere_Origin;                                     // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Parameter_Distance;                                // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         _Outdoor_Check;                                    // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AmbSwitch_min_value_to_check;                      // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmbSwitch_max_value_to_check;                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Debug;                                      // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASound_MusicParameterChanger_BP_C* GetDefaultObj();

	void UserConstructionScript();
	void Sound_Manipulator();
	void ReceiveBeginPlay();
	void BndEvt__Sound_MusicParameterChanger_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Sound_MusicParameterChanger_BP_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Sound_MusicParameterChanger_BP(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<struct FFMODEventInstance>& CallFunc_FindEventInstances_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_Distance2D_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetGlobalParameterValueByName_UserValue, float CallFunc_GetGlobalParameterValueByName_FinalValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_InRange_FloatFloat_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
};

}


