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
	 * WidgetBlueprintGeneratedClass W_DamagePaperdoll.W_DamagePaperdoll_C
	 * Size -> 0x00D8 (FullSize[0x0480] - InheritedSize[0x03A8])
	 */
	class UW_DamagePaperdoll_C : public UPlayerPaperdollWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                         bFlashingHead;                                           // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bFlashingLeftLeg;                                        // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bFlashingLeftArm;                                        // 0x03B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bFlashingRightLeg;                                       // 0x03B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bFlashingRightArm;                                       // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bFlashingBody;                                           // 0x03B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedLeftLeg;                                         // 0x03B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedRightLeg;                                        // 0x03B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedHead;                                            // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedBody;                                            // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedLeftArm;                                         // 0x03BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bDamagedRightArm;                                        // 0x03BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bShowFlashyBits;                                         // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        FlashingTime;                                            // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        FlashOnLength;                                           // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        FlashOffLength;                                          // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                        FlashOnDurationLeft;                                     // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        FlashOffDurationLeft;                                    // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          HealedPaperdollColor;                                    // 0x03D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                          DamagedPaperdollColor;                                   // 0x03E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                          FinalDamagedPaperdollColor;                              // 0x03F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                         bHealedLeftLeg;                                          // 0x0404(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHealedRightLeg;                                         // 0x0405(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHealedRightArm;                                         // 0x0406(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHealedLeftArm;                                          // 0x0407(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHealedHead;                                             // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UImage*>                                        HeadImages;                                              // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        BodyImages;                                              // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        LeftArmImages;                                           // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        RightArmImages;                                          // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        LeftLegImages;                                           // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        RightLegImages;                                          // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UImage*>                                        OutlineImages;                                           // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ApplyDamageState(class UImage* InImage, bool* bDamagedLimb, bool* bFlashingLimb, float LimbHealth, const class FScriptDelegate& Event);
		void SetLimbDamaged(bool* bLimb, bool* bNewlyDamaged);
		void UpdatePaperdollPartToHealedColor(bool bRightArm, bool LeftArm, bool Torso, bool Head, bool RightLeg, bool LeftLeg);
		void SetDamageState(bool bHeadHit, bool bBodyHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit);
		ESlateVisibility GetTorsoDmgVisibility();
		ESlateVisibility GetLegDmgRightVisibility();
		ESlateVisibility GetLegDmgLeftVisibility();
		ESlateVisibility GetHeadDmgVisibility();
		ESlateVisibility GetArmDmgRightVisibility();
		ESlateVisibility GetArmDmgLeftVisibility();
		void StopFlashingHead();
		void StopFlashingLeftLeg();
		void StopFlashingRightLeg();
		void StopFlashingLeftArm();
		void StopFlashingRightArm();
		void StopFlashingTorso();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnBodyPartHit(bool Head, bool bBodyHit, bool LeftArm, bool RightArm, bool LeftLeg, bool RightLeg);
		void UpdateHealth(float Health);
		void OnInitialized();
		void ExecuteUbergraph_W_DamagePaperdoll(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
