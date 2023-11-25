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
	 * BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
	 * Size -> 0x002D (FullSize[0x0075] - InheritedSize[0x0048])
	 */
	class UAIAction_Startle_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                         bIsRightStartle;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                StartleAnimation;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector                                  StimulusLocation;                                        // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bTrackingTarget;                                         // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanStartle(bool* ReturnValue);
		void AngleToAnimation(float InAngle, bool bRight, class FString* ReturnValue);
		void IsLocationRightOfUs(const struct FVector& InLocation, bool* ReturnValue);
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void InitAction_Blueprint(class ACyberneticController* Controller);
		void Tick_Blueprint(float DeltaTime);
		void ResetData();
		void ExecuteUbergraph_AIAction_Startle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
