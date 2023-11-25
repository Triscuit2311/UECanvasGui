#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BasePlayer.BasePlayer_C
	 * Size -> 0x0060 (FullSize[0x2220] - InheritedSize[0x21C0])
	 */
	class ABasePlayer_C : public APlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x21C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                     ClothCollider;                                           // 0x21C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentMuscleStrength;                                   // 0x21D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        MuscleStrength;                                          // 0x21D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        MuscleStrengthDEAD;                                      // 0x21D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         InAirMuscleStrengthSwitch;                               // 0x21DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         InAirSwitchDelay;                                        // 0x21DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bSuppressionDebug;                                       // 0x21DE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x21DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                          VaultStepAnim;                                           // 0x21E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          VaultUpAnim;                                             // 0x21E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          VaultOverAnim;                                           // 0x21F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          CurrentVaultMontage;                                     // 0x21F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentSuppressionShakeAmount;                           // 0x2200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SuppressionShakeDecreaseRate;                            // 0x2204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ArmBreakShakeAmount;                                     // 0x2208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SuppressionShakeScale;                                   // 0x220C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        DefaultIdleShake;                                        // 0x2210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SprintShakeAmount;                                       // 0x2214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        SprintShakeDecreaseRate;                                 // 0x2218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        CurrentSprintShakeAmount;                                // 0x221C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddFirstPersonShakeFromSuppression(float Strength);
		void UpdateFirstPersonShake(float DeltaSeconds);
		void InpActEvt_F3_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_F2_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_F1_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnSupression(float Strength);
		void OnTurn();
		void OnLeanStart();
		void OnLeanEnd();
		void PlayVaultAnimation(const struct FVector& ledge, const struct FVector& ledgeWallNormal, const struct FVector& ledgeTraceDown, float ledgeZ, ELedgeWidth ledgeWidth, ELedgeHeight ledgeHeight);
		void ReceiveTick(float DeltaSeconds);
		void OnBulletImpact(float DirectionForward, float DirectionRight);
		void ReceiveUnpossessed(class AController* OldController);
		void OnJumpStart();
		void OnJumpLand();
		void OnKilledOrGoneUnconciousBP();
		void ExecuteUbergraph_BasePlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
