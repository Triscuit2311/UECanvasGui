#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x268 - 0x220)
// BlueprintGeneratedClass SequencerCharacterTemplate.SequencerCharacterTemplate_C
class ASequencerCharacterTemplate_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                ArmorMesh;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                HeadMesh;                                          // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ItemMagMesh;                                       // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ItemMesh;                                          // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BodyMesh;                                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPoseAsset*                            FaceROMReference;                                  // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                RoNPlayerState;                                    // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASequencerCharacterTemplate_C* GetDefaultObj();

	void EquipLoadout(struct FSavedLoadout& SavedLoadout, class AReadyOrNotPlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ETeamType CallFunc_GetTeam_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterData& CallFunc_GetCharacterDataFromHandle_Data, class UObject* CallFunc_GetLazyLoadedObject_ReturnValue, class UPlayableCharacterData* K2Node_DynamicCast_AsPlayable_Character_Data, bool K2Node_DynamicCast_bSuccess, class USkeletalMesh* CallFunc_GetLazyLoadedSkeletalMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABaseItem* CallFunc_FinishSpawningActor_ReturnValue, class ABaseItem* CallFunc_FinishSpawningActor_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnSequenceStarted_Event_0(class ULevelSequence* LevelSequence);
	void ExecuteUbergraph_SequencerCharacterTemplate(int32 EntryPoint, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, float K2Node_Event_DeltaSeconds, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ULevelSequence* K2Node_CustomEvent_LevelSequence, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class FName Temp_name_Variable_6, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetPlayerStatesOnTeamOrderedByScore_PlayerStates, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State_2, bool K2Node_DynamicCast_bSuccess_2, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetPlayerStatesOnTeamOrderedByScore_PlayerStates_1, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_1, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_3, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_5, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_6, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_7, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item_8, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class FName Temp_name_Variable_7, bool CallFunc_Array_Contains_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


