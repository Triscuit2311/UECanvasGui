#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x140 - 0x28)
// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigCommon
{
public:
	enum class EClothingWindMethodNv             ClothingWindMethod;                                // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetupNv               VerticalConstraint;                                // 0x2C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv               HorizontalConstraint;                              // 0x3C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv               BendConstraint;                                    // 0x4C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv               ShearConstraint;                                   // 0x5C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Damping;                                           // 0x78(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindDragCoefficient;                               // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindLiftCoefficient;                               // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearDrag;                                        // 0x90(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularDrag;                                       // 0x9C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularInertiaScale;                               // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CentrifugalInertiaScale;                           // 0xC0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityOverride;                                   // 0xD8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetherStiffness;                                   // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveSpringStiffness;                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveDamperStiffness;                          // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0xFC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x100(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x110(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x120(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x130(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UClothConfigNv* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactoryNv* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_CB4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothingSimulationInteractorNv* GetDefaultObj();

	void SetAnimDriveDamperStiffness(float InStiffness);
};

// 0x40 (0x120 - 0xE0)
// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj();

};

}


