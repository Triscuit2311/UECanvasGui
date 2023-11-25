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
	 * Class MotivityRuntime.MotivityPreprocessor
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMotivityPreprocessor : public UObject
	{
	public:
		float                                                        TimeStep;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMotivityTimeData                                     PredictionData;                                          // 0x0030(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USkeleton*                                             Skeleton;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                         MeshPreviewOverride;                                     // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                          ReferencedBones;                                         // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                                 ReferencedAnimations;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                                 ReferencedIdleAnimations;                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityTweakData
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMotivityTweakData : public UObject
	{
	public:
		struct FMotivityTimeData                                     PredictionData;                                          // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMotivityCalibrationData                              CalibrationData;                                         // 0x0038(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityAnimInstance
	 * Size -> 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
	 */
	class UMotivityAnimInstance : public UAnimInstance
	{
	public:
		struct FTrajectoryData                                       CurrentCharacterInput;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		int32_t                                                      CurrentMoveStyleIndex;                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      CurrentGaitIndex;                                        // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasMovementInput;                                       // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  CurrentMotivityTag;                                      // 0x02D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityAIController
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class AMotivityAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityPathFollowingComp
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class UMotivityPathFollowingComp : public UPathFollowingComponent
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0250(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityProcessedData
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UMotivityProcessedData : public UObject
	{
	public:
		float                                                        PoseInterval;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMotionCandidate>                              PoseCandidates;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FMotionCandidate>                              IdlePoseCandidates;                                      // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FName>                                          ReferencedBones;                                         // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                                 AnimationsInMemory;                                      // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAnimSequence*>                                 IdleAnimationsInMemory;                                  // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class USkeleton*                                             ReferencedSkeleton;                                      // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMotivityTimeData                                     PredictionData;                                          // 0x0088(0x0010) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		struct FMotivityCalibrationData                              CalibrationData;                                         // 0x0098(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityMoveData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMotivityMoveData : public UDataAsset
	{
	public:
		TArray<struct FMovementStyle>                                MovementStyles;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityThreadManager
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMotivityThreadManager : public UObject
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityCharacter
	 * Size -> 0x0298 (FullSize[0x0750] - InheritedSize[0x04B8])
	 */
	class AMotivityCharacter : public ACharacter
	{
	public:
		class USpringArmComponent*                                   CameraBoom;                                              // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                      FollowCamera;                                            // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        BaseTurnRate;                                            // 0x04C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        BaseLookUpRate;                                          // 0x04CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x20];                                  // 0x04D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTrajectoryData                                       Goal;                                                    // 0x04F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x78];                                  // 0x0500(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MaxSpeed;                                                // 0x0578(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x4C];                                  // 0x057C(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  CurInputVector;                                          // 0x05C8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xC];                                   // 0x05D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SampleRate;                                              // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        posBias;                                                 // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        dirBias;                                                 // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        posBiasMultiplier;                                       // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        dirBiasMultiplier;                                       // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMotivityInputMode                                           CurrentInputMode;                                        // 0x05F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x1];                                   // 0x05F5(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMotivityMovementMode                                        CurrentMovementMode;                                     // 0x05F6(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsStrafing;                                             // 0x05F7(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsMoving;                                               // 0x05F8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         bIsNearlyAtDestination;                                  // 0x0600(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0006[0x1F];                                  // 0x0601(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         bUseDecoupling;                                          // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0007[0x1B];                                  // 0x0621(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        maxDecouple;                                             // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        maxAngleDecouple;                                        // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  LastInputVector_Replicated;                              // 0x0644(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  StickInput_Replicated;                                   // 0x0650(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0008[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                            CurrentMoveDatabase;                                     // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      DefaultMoveStyleIndex;                                   // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0009[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovementStyle                                        CurrentMoveStyle;                                        // 0x0670(0x0028) Net, NativeAccessSpecifierPublic
		int32_t                                                      CurMoveStyleIndex;                                       // 0x0698(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      CurrentGaitIndex;                                        // 0x069C(0x0004) Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bhasInputThisFrame;                                      // 0x06A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0010[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  CurrentMotivityTag;                                      // 0x06A4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0011[0x58];                                  // 0x06AC(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        TrajectoryGoalReachTolerance;                            // 0x0704(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DestinationRotation_Replicated;                          // 0x0708(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasOverridenGait;                                       // 0x070C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bHasReachedLastPoint;                                    // 0x070D(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableTrajErrorWarping;                                 // 0x070E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0012[0x1];                                   // 0x070F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        WarpRate;                                                // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinTrajectoryLength;                                     // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                ErrorActivationRange;                                    // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0013[0x30];                                  // 0x0720(0x0030) MISSED OFFSET (PADDING)

	public:
		void ToggleMotivityStrafing();
		void ToggleMotivityMovementMode();
		void ToggleMotivityInputMode();
		void SwitchMotivityMoveStyle();
		void SwitchMotivityGait();
		void SetTrajectoryGoals(TArray<struct FVector> GoalLocations, TArray<float> GoalRotations);
		void SetTrajectoryGoal(const struct FVector& GoalLocation, float GoalRotation);
		void SetMovementStyleByName(const class FName& Name);
		void SetMovementStyleByIndex(int32_t Index);
		bool SetMovementGaitByName(const class FString& Name);
		void SetMovementGaitByIndex(int32_t Index);
		void SetDesireSpeed(float NewSpeed);
		void OnRep_IsStrafing();
		float CalculateTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed);
		void ApplyTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class MotivityRuntime.MotivityTagAnimNotifyState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UMotivityTagAnimNotifyState : public UAnimNotifyState
	{
	public:
		class FName                                                  TagName;                                                 // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
