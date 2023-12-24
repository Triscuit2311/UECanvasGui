#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2E0 - 0x278)
// BlueprintGeneratedClass SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C
class ASplineTrigger_OutOfBounds_Base_C : public ASplineTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Greyscale_Timeline_Scalar_E06E2F124CDF28DBC436D7B5B4D0178A; // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Greyscale_Timeline__Direction_E06E2F124CDF28DBC436D7B5B4D0178A; // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_447D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Greyscale_Timeline;                                // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      PlayerCharacter;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_OutOfBounds_C*                      OutOfBoundsWidget;                                 // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     MI_PostProcessGreyScale;                           // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_PostProcessGreyScale;                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            VoiceLineToPlayOnExit;                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoiceLineCooldown;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoiceLineCooldown_MinDeviation;                    // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoiceLineCooldown_MaxDeviation;                    // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bVoiceLineCooldownStarted;                         // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_447E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoiceLineExitPlayCount;                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_447F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_VoiceLineExit;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TH_VoiceLineCooldownExpiry;                        // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASplineTrigger_OutOfBounds_Base_C* GetDefaultObj();

	void PlaySplineExitVoiceLine(bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Greyscale_Timeline__FinishedFunc();
	void Greyscale_Timeline__UpdateFunc();
	void OnSplineEnclosureEntered(class APlayerCharacter* PlayerCharacter);
	void OnSplineEnclosureExited(class APlayerCharacter* PlayerCharacter);
	void HideOutOfBoundsWidget();
	void OnAnimFinished();
	void ReceiveBeginPlay();
	void DestroyOutOfBoundsWidget();
	void ReceiveTick(float DeltaSeconds);
	void StartCountdown_Event_0();
	void StopCountdown_Event_0();
	void CustomEvent_0();
	void CustomEvent_1();
	void Delegate_OnOutOfBoundsTimeLimitEnded_Event_0();
	void ExecuteUbergraph_SplineTrigger_OutOfBounds_Base(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerCharacter* K2Node_Event_PlayerCharacter_1, class APlayerCharacter* K2Node_Event_PlayerCharacter, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UW_OutOfBounds_C* CallFunc_Create_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Variable, bool CallFunc_IsAnyAnimationPlaying_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_1, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_3, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_4, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_6, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_7, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue_2, bool CallFunc_IsDeadOrUnconscious_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


