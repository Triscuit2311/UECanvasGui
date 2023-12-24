#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass AIAction_DrawConcealedWeapon_AmosVoll.AIAction_DrawConcealedWeapon_AmosVoll_C
class UAIAction_DrawConcealedWeapon_AmosVoll_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                WeaponToSpawn;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_DrawConcealedWeapon_AmosVoll_C* GetDefaultObj();

	void BeginAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_PutItemInHands_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABaseWeapon* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_AddInventoryItem_ReturnValue);
};

}


