#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpeedWarpingAxisMode : uint8
{
	IKFootRootLocalX               = 0,
	IKFootRootLocalY               = 1,
	IKFootRootLocalZ               = 2,
	WorldSpaceVectorInput          = 3,
	ComponentSpaceVectorInput      = 4,
	ActorSpaceVectorInput          = 5,
	ESpeedWarpingAxisMode_MAX      = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x90 - 0x38)
// ScriptStruct CustomAnimNode.AnimNode_DistanceMatching
struct FAnimNode_DistanceMatching : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_2043[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     PrevSequence;                                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2045[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Sequence;                                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DistanceCurveName;                                 // 0x6C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDistanceLimit : 1;                          // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_147 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2046[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceLimit;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistanceMatchFromPoint;                           // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2047[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2048[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x1B8 - 0xC8)
// ScriptStruct CustomAnimNode.AnimNode_LazySpringBone
struct FAnimNode_LazySpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               DrivingForce;                                      // 0xC8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrivingForceStrength;                              // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2049[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetDistance;                                    // 0xF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gravity;                                           // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                 LookAt_Axis;                                       // 0x10C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         FlipYawWithRoll;                                   // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204B[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        ReferenceBone;                                     // 0x144(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        DrivenBone;                                        // 0x154(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLimitDisplacement;                                // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDisplacement;                                   // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringStiffness;                                   // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDamping;                                     // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorResetThresh;                                  // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZSpring;                                        // 0x178(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateX;                                       // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateY;                                       // 0x17A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateZ;                                       // 0x17B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateX;                                          // 0x17C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateY;                                          // 0x17D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateZ;                                          // 0x17E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204E[0x39];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CustomAnimNode.OrientationWarpingSpineBoneSettings
struct FOrientationWarpingSpineBoneSettings
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CustomAnimNode.OrientationWarpingSettings
struct FOrientationWarpingSettings
{
public:
	enum class EAxis                             YawRotationAxis;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2051[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BodyOrientationAlpha;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOrientationWarpingSpineBoneSettings> SpineBones;                                        // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        IKFootRootBone;                                    // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                IKFootBones;                                       // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CustomAnimNode.OrientationWarpingSpineBoneData
struct FOrientationWarpingSpineBoneData
{
public:
	uint8                                        Pad_2054[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x160 - 0xC8)
// ScriptStruct CustomAnimNode.AnimNode_OrientationWarping
struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{
public:
	float                                        LocomotionAngle;                                   // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallyCalculateAngleBasedOnCurve;          // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2057[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DirectionCurveName;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DirectionAlphaCurveName;                           // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoDirectionInterpTime;                           // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootYawOffset;                                     // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOrientationWarpingSettings           Settings;                                          // 0xE8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FOrientationWarpingSpineBoneData> SpineBoneDataArray;                                // 0x120(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2059[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedDeltaTime;                                   // 0x144(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x100 - 0xC8)
// ScriptStruct CustomAnimNode.AnimNode_PivotBone
struct FAnimNode_PivotBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               Translation;                                       // 0xC8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ReferenceBone;                                     // 0xE0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        DrivenBone;                                        // 0xF0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x90 - 0x38)
// ScriptStruct CustomAnimNode.AnimNode_RSequencePlayer
struct FAnimNode_RSequencePlayer : public FAnimNode_AssetPlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRateBasis;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  PlayRateScaleBiasClamp;                            // 0x48(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartPosition;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopAnimation;                                    // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendAnimation;                                   // 0x7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendTime;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CustomAnimNode.SlopeWarpingFootDefinition
struct FSlopeWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToeSocketName;                                     // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeelSocketName;                                    // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootSize;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CustomAnimNode.SlopeWarpingFootData
struct FSlopeWarpingFootData
{
public:
	uint8                                        Pad_2064[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x228 - 0xC8)
// ScriptStruct CustomAnimNode.AnimNode_SlopeWarping
struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2067[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0xE0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        PelvisBone;                                        // 0xF0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootDefinition>   FeetDefinitions;                                   // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootData>         FeetData;                                          // 0x110(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          PelvisOffsetInterpolator;                          // 0x120(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206C[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityDir;                                        // 0x15C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CustomFloorOffset;                                 // 0x168(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedDeltaTime;                                   // 0x174(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetFloorNormalWorldSpace;                       // 0x178(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          FloorNormalInterpolator;                           // 0x184(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206F[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetFloorOffsetLocalSpace;                       // 0x1C0(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          FloorOffsetInterpolator;                           // 0x1CC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2071[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxStepHeight;                                     // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKeepMeshInsideOfCapsule : 1;                      // Mask: 0x1, PropSize: 0x10x20C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPullPelvisDown : 1;                               // Mask: 0x2, PropSize: 0x10x20C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCustomFloorOffset : 1;                         // Mask: 0x4, PropSize: 0x10x20C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCapsuleInfoInsteadOfFootTraces : 1;            // Mask: 0x8, PropSize: 0x10x20C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasOnGround : 1;                                  // Mask: 0x10, PropSize: 0x10x20C(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDebug : 1;                                    // Mask: 0x20, PropSize: 0x10x20C(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFloorSmoothingInitialized : 1;                    // Mask: 0x40, PropSize: 0x10x20C(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_149 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2075[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActorLocation;                                     // 0x210(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityDirCompSpace;                               // 0x21C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct CustomAnimNode.SpeedWarpingFootDefinition
struct FSpeedWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CustomAnimNode.SpeedWarpingFootData
struct FSpeedWarpingFootData
{
public:
	uint8                                        Pad_207A[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x1B8 - 0xC8)
// ScriptStruct CustomAnimNode.AnimNode_SpeedWarping
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_207E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0xD0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSpeedWarpingFootDefinition>   FeetDefinitions;                                   // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSpeedWarpingFootData>         FeetData;                                          // 0xF0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FBoneReference                        PelvisBone;                                        // 0x100(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESpeedWarpingAxisMode             SpeedWarpingAxisMode;                              // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpeedWarpingAxisMode             FloorNormalAxisMode;                               // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpeedWarpingAxisMode             GravityDirAxisMode;                                // 0x112(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2084[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedScaling;                                      // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  SpeedScalingScaleBiasClamp;                        // 0x118(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ManualSpeedWarpingDir;                             // 0x148(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ManualFloorNormalInput;                            // 0x154(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ManualGravityDirInput;                             // 0x160(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PelvisPostAdjustmentAlpha;                         // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PelvisAdjustmentMaxIter;                           // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          PelvisAdjustmentInterp;                            // 0x174(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2089[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAdjustThighBonesRotation : 1;                     // Mask: 0x1, PropSize: 0x10x1B0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClampIKUsingFKLeg : 1;                            // Mask: 0x2, PropSize: 0x10x1B0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;     // Mask: 0x4, PropSize: 0x10x1B0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_14C : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_208A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedDeltaTime;                                   // 0x1B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


