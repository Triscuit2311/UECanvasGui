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
	 * BlueprintGeneratedClass SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C
	 * Size -> 0x0068 (FullSize[0x02D0] - InheritedSize[0x0268])
	 */
	class ASplineTrigger_OutOfBounds_Base_C : public ASplineTrigger
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                        Greyscale_Timeline_Scalar_E06E2F124CDF28DBC436D7B5B4D0178A; // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                           Greyscale_Timeline__Direction_E06E2F124CDF28DBC436D7B5B4D0178A; // 0x0274(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                    Greyscale_Timeline;                                      // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerCharacter*                                      PlayerCharacter;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_OutOfBounds_C*                                      OutOfBoundsWidget;                                       // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                     MI_PostProcessGreyScale;                                 // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                              MID_PostProcessGreyScale;                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFMODEvent*                                            VoiceLineToPlayOnExit;                                   // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        VoiceLineCooldown;                                       // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        VoiceLineCooldown_MinDeviation;                          // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        VoiceLineCooldown_MaxDeviation;                          // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bVoiceLineCooldownStarted;                               // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      VoiceLineExitPlayCount;                                  // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                          TH_VoiceLineExit;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                          TH_VoiceLineCooldownExpiry;                              // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void PlaySplineExitVoiceLine();
		void Greyscale_Timeline__FinishedFunc();
		void Greyscale_Timeline__UpdateFunc();
		void OnSplineEnclosureEntered(class APlayerCharacter* PlayerCharacter);
		void OnSplineEnclosureExited(class APlayerCharacter* PlayerCharacter);
		void HideOutOfBoundsWidget();
		void OnAnimFinished();
		void ReceiveBeginPlay();
		void DestroyOutOfBoundsWidget();
		void ReceiveTick(float DeltaSeconds);
		void StartCountdown_Event_1();
		void StopCountdown_Event_1();
		void CustomEvent_1();
		void CustomEvent_2();
		void Delegate_OnOutOfBoundsTimeLimitEnded_Event_1();
		void ExecuteUbergraph_SplineTrigger_OutOfBounds_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
