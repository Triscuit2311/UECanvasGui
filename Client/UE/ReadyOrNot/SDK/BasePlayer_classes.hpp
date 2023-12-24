#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x25B8 - 0x2510)
// BlueprintGeneratedClass BasePlayer.BasePlayer_C
class ABasePlayer_C : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     ClothCollider;                                     // 0x2518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Current_Muscle_Strength;                           // 0x2520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muscle_Strength;                                   // 0x2524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muscle_Strength_DEAD;                              // 0x2528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Air_Muscle_Strength_Switch;                     // 0x252C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         In_Air_Switch_Delay;                               // 0x252D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSuppressionDebug;                                 // 0x252E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E73[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          VaultStepAnim;                                     // 0x2530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          VaultUpAnim;                                       // 0x2538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          VaultOverAnim;                                     // 0x2540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CurrentVaultMontage;                               // 0x2548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentSuppressionShakeAmount;                     // 0x2550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SuppressionShakeDecreaseRate;                      // 0x2554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmBreakShakeAmount;                               // 0x2558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SuppressionShakeScale;                             // 0x255C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultIdleShake;                                  // 0x2560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintShakeAmount;                                 // 0x2564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintShakeDecreaseRate;                           // 0x2568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentSprintShakeAmount;                          // 0x256C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletCursor;                                      // 0x2570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentFoV;                                        // 0x2574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletFocusTimer;                                  // 0x2578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TabletOpen;                                        // 0x2579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TabletFocusDelay;                                  // 0x257C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTabletFocusDelay;                           // 0x2580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletFocused;                                     // 0x2584(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TabletLerp;                                        // 0x2588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Minhfov;                                           // 0x258C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tgtvfov;                                           // 0x2590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCrouchStarted;                                   // 0x2598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCrouchEnded;                                     // 0x25A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABasePlayer_C* GetDefaultObj();

	void GetTabletZoomFOV(float* FOV, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_DegTan_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue);
	void AddFirstPersonShakeFromSuppression(float Strength, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
	void UpdateFirstPersonShake(float DeltaSeconds, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsSprinting_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2);
	void InpActEvt_F3_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnJumpStart();
	void OnJumpLand();
	void ReceiveTick(float DeltaSeconds);
	void FocusTablet();
	void PlayVaultAnimation(const struct FVector& Ledge, const struct FVector& LedgeWallNormal, const struct FVector& LedgeTraceDown, float LedgeZ, enum class ELedgeWidth LedgeWidth, enum class ELedgeHeight LedgeHeight);
	void OnKilledOrGoneUnconciousBP();
	void OnSupression(float Strength);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnTurn();
	void OnLeanStart();
	void OnLeanEnd();
	void ToggleTabletCursor(bool Active);
	void OnBulletImpact(float DirectionForward, float DirectionRight);
	void ExecuteUbergraph_BasePlayer(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocalPlayer_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsLocalPlayer_ReturnValue_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, bool CallFunc_IsLocalPlayer_ReturnValue_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_3, bool CallFunc_IsLocalPlayer_ReturnValue_3, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_4, bool CallFunc_IsLocalPlayer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_ledge, const struct FVector& K2Node_Event_ledgeWallNormal, const struct FVector& K2Node_Event_ledgeTraceDown, float K2Node_Event_ledgeZ, enum class ELedgeWidth K2Node_Event_ledgeWidth, enum class ELedgeHeight K2Node_Event_ledgeHeight, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_4, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, float K2Node_Event_Strength, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_5, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_2, bool K2Node_CustomEvent_Active, float K2Node_Event_DirectionForward, float K2Node_Event_DirectionRight);
	void OnCrouchEnded__DelegateSignature();
	void OnCrouchStarted__DelegateSignature();
};

}


