#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C
class ASound_StarterAmbience_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   BillBoard;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Starting_Ambience;                                 // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Starting_Reverb;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Starting_Ambience_Parameter;                       // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Additional_Starting_Ambience_Parameter;            // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    FMOD_Instance_Starting_Ambience;                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                  Starting_Global_Parameter;                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Starting_Global_Parameter_Value;                   // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1927[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            Reverb_Master;                                     // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASound_StarterAmbience_BP_C* GetDefaultObj();

	void FMODInitializer();
	void ReverbInitializer();
	void ReceiveBeginPlay();
	void InitialOverlap();
	void ExecuteUbergraph_Sound_StarterAmbience_BP(int32 EntryPoint, bool CallFunc_NotEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, int32 Temp_int_Array_Index_Variable, TArray<struct FFMODEventInstance>& CallFunc_FindEventInstances_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class ASound_StarterAmbience_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class ASound_StarterAmbience_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue, bool CallFunc_AllAudioVolumesTicked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


