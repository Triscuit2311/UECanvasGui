#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClothMassMode : uint8
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4,
};

enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2,
};

enum class EWeightMapTargetCommon : uint8
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping               = 5,
	EWeightMapTargetCommon_MAX     = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchLimit;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompressionLimit;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD4 (0xD4 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1753[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x4(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x14(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x24(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x34(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Damping;                                           // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindDragCoefficient;                               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindLiftCoefficient;                               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearDrag;                                        // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularDrag;                                       // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearInertiaScale;                                // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularInertiaScale;                               // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CentrifugalInertiaScale;                           // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityOverride;                                   // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetherStiffness;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveSpringStiffness;                          // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveDamperStiffness;                          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint32, struct FPointWeightMap>         WeightMaps;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxBoneWeights;                                    // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFixedVerts;                                     // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                MaxDistances;                                      // 0xB8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopDistances;                                 // 0xC8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopRadiuses;                                  // 0xD8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                AnimDriveMultipliers;                              // 0xE8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
public:
	struct FClothPhysicalMeshData                PhysicalMeshData;                                  // 0x0(0xF8)(Edit, NativeAccessSpecifierPublic)
	struct FClothCollisionData                   CollisionData;                                     // 0xF8(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseMultipleInfluences;                            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkinningKernelRadius;                              // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1760[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxValue;                                          // 0xC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x10(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1764[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Values;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1765[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


