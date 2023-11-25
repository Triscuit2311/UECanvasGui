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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum CustomAnimNode.ESpeedWarpingAxisMode
	 */
	enum class ESpeedWarpingAxisMode : uint8_t
	{
		IKFootRootLocalX          = 0,
		IKFootRootLocalY          = 1,
		IKFootRootLocalZ          = 2,
		WorldSpaceVectorInput     = 3,
		ComponentSpaceVectorInput = 4,
		ActorSpaceVectorInput     = 5,
		MAX                       = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CustomAnimNode.AnimNode_LazySpringBone
	 * Size -> 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_LazySpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                  DrivingForce;                                            // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DrivingForceStrength;                                    // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  TargetDistance;                                          // 0x00F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Stiffness;                                               // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Mass;                                                    // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Damping;                                                 // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Gravity;                                                 // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                                 LookAt_Axis;                                             // 0x010C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         FlipYawWithRoll;                                         // 0x011C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x27];                                  // 0x011D(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                        ReferenceBone;                                           // 0x0144(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        DrivenBone;                                              // 0x0154(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bLimitDisplacement;                                      // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MaxDisplacement;                                         // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpringStiffness;                                         // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        SpringDamping;                                           // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ErrorResetThresh;                                        // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bNoZSpring;                                              // 0x0178(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTranslateX;                                             // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTranslateY;                                             // 0x017A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTranslateZ;                                             // 0x017B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRotateX;                                                // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRotateY;                                                // 0x017D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRotateZ;                                                // 0x017E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x39];                                  // 0x017F(0x0039) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomAnimNode.OrientationWarpingSpineBoneSettings
	 * Size -> 0x0010
	 */
	struct FOrientationWarpingSpineBoneSettings
	{
	public:
		struct FBoneReference                                        Bone;                                                    // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.OrientationWarpingSettings
	 * Size -> 0x0038
	 */
	struct FOrientationWarpingSettings
	{
	public:
		EAxis                                                        YawRotationAxis;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        BodyOrientationAlpha;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOrientationWarpingSpineBoneSettings>          SpineBones;                                              // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        IKFootRootBone;                                          // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                                IKFootBones;                                             // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.OrientationWarpingSpineBoneData
	 * Size -> 0x0008
	 */
	struct FOrientationWarpingSpineBoneData
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomAnimNode.AnimNode_OrientationWarping
	 * Size -> 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                        LocomotionAngle;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrientationWarpingSettings                           Settings;                                                // 0x00D0(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOrientationWarpingSpineBoneData>              SpineBoneDataArray;                                      // 0x0108(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x14];                                  // 0x0118(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        CachedDeltaTime;                                         // 0x012C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.AnimNode_PivotBone
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_PivotBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                  Translation;                                             // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 Rotation;                                                // 0x00D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        ReferenceBone;                                           // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        DrivenBone;                                              // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.SlopeWarpingFootDefinition
	 * Size -> 0x0038
	 */
	struct FSlopeWarpingFootDefinition
	{
	public:
		struct FBoneReference                                        IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  ToeSocketName;                                           // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  HeelSocketName;                                          // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        FootSize;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.SlopeWarpingFootData
	 * Size -> 0x00A0
	 */
	struct FSlopeWarpingFootData
	{
	public:
		unsigned char                                                UnknownData_0000[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomAnimNode.AnimNode_SlopeWarping
	 * Size -> 0x0160 (FullSize[0x0228] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                        IKFootRootBone;                                          // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        PelvisBone;                                              // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootDefinition>                   FeetDefinitions;                                         // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootData>                         FeetData;                                                // 0x0110(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                          PelvisOffsetInterpolator;                                // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x34];                                  // 0x0128(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  GravityDir;                                              // 0x015C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  CustomFloorOffset;                                       // 0x0168(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CachedDeltaTime;                                         // 0x0174(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  TargetFloorNormalWorldSpace;                             // 0x0178(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                          FloorNormalInterpolator;                                 // 0x0184(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x34];                                  // 0x018C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  TargetFloorOffsetLocalSpace;                             // 0x01C0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                          FloorOffsetInterpolator;                                 // 0x01CC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x34];                                  // 0x01D4(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MaxStepHeight;                                           // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bKeepMeshInsideOfCapsule : 1;                            // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bPullPelvisDown : 1;                                     // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCustomFloorOffset : 1;                               // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCapsuleInfoInsteadOfFootTraces : 1;                  // 0x020C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bWasOnGround : 1;                                        // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShowDebug : 1;                                          // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bFloorSmoothingInitialized : 1;                          // 0x020C(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  ActorLocation;                                           // 0x0210(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  GravityDirCompSpace;                                     // 0x021C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct CustomAnimNode.SpeedWarpingFootDefinition
	 * Size -> 0x0024
	 */
	struct FSpeedWarpingFootDefinition
	{
	public:
		struct FBoneReference                                        IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                        FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.SpeedWarpingFootData
	 * Size -> 0x0040
	 */
	struct FSpeedWarpingFootData
	{
	public:
		unsigned char                                                UnknownData_0000[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomAnimNode.AnimNode_SpeedWarping
	 * Size -> 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                        IKFootRootBone;                                          // 0x00D0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSpeedWarpingFootDefinition>                   FeetDefinitions;                                         // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSpeedWarpingFootData>                         FeetData;                                                // 0x00F0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FBoneReference                                        PelvisBone;                                              // 0x0100(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESpeedWarpingAxisMode                                        SpeedWarpingAxisMode;                                    // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpeedWarpingAxisMode                                        FloorNormalAxisMode;                                     // 0x0111(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpeedWarpingAxisMode                                        GravityDirAxisMode;                                      // 0x0112(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x1];                                   // 0x0113(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SpeedScaling;                                            // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                  SpeedScalingScaleBiasClamp;                              // 0x0118(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                  ManualSpeedWarpingDir;                                   // 0x0148(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  ManualFloorNormalInput;                                  // 0x0154(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  ManualGravityDirInput;                                   // 0x0160(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PelvisPostAdjustmentAlpha;                               // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      PelvisAdjustmentMaxIter;                                 // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                          PelvisAdjustmentInterp;                                  // 0x0174(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x34];                                  // 0x017C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         bAdjustThighBonesRotation : 1;                           // 0x01B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bClampIKUsingFKLeg : 1;                                  // 0x01B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;           // 0x01B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        CachedDeltaTime;                                         // 0x01B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CustomAnimNode.AnimNode_DistanceMatching
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	struct FAnimNode_DistanceMatching : public FAnimNode_AssetPlayerBase
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                     PrevSequence;                                            // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                     Sequence;                                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Distance;                                                // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  DistanceCurveName;                                       // 0x006C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableDistanceLimit : 1;                                // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DistanceLimit;                                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PlayRate;                                                // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDistanceMatchFromPoint;                                 // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        StartTime;                                               // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
