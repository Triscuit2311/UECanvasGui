#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x8E - 0x58)
// BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
class UAIAction_Startle_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsRightStartle;                                   // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1705[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StartleAnimation;                                  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               StimulusLocation;                                  // 0x78(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTrackingTarget;                                   // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1706[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCoolingDown;                                    // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEverShotBefore;                                   // 0x8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAIAction_Startle_C* GetDefaultObj();

	void CanStartle(bool* Return_Value, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
	void AngleToAnimation(float InAngle, bool bRight, class FString* Return_Value, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& K2Node_Select_Default_2);
	void IsLocationRightOfUs(const struct FVector& InLocation, bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void Tick_Blueprint(float DeltaTime);
	void ResetData();
	void EndAction_Blueprint();
	void CustomEvent_0();
	void ExecuteUbergraph_AIAction_Startle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float K2Node_Event_DeltaTime, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsLocationRightOfUs_Return_Value, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, bool CallFunc_CanStartle_Return_Value, const class FString& CallFunc_AngleToAnimation_Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


