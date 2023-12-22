#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xC8 - 0x28)
// Class ChaosCloth.ChaosClothConfig
class UChaosClothConfig : public UClothConfigCommon
{
public:
	enum class EClothMassMode                    MassMode;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1768[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UniformMass;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMass;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPerParticleMass;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeStiffness;                                     // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendingStiffness;                                  // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBendingElements;                               // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaStiffness;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeStiffness;                                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              TetherStiffness;                                   // 0x50(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LimitScale;                                        // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGeodesicDistance;                              // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShapeTargetStiffness;                              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionCoefficient;                               // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCCD;                                           // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSelfCollisions;                                // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1770[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfCollisionThickness;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyBackstop;                                // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1771[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DampingCoefficient;                                // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePointBasedWindModel;                           // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1772[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DragCoefficient;                                   // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftCoefficient;                                   // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1774[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GravityScale;                                      // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Gravity;                                           // 0x90(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              AnimDriveStiffness;                                // 0x9C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              AnimDriveDamping;                                  // 0xA4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocityScale;                               // 0xAC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityScale;                              // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FictitiousAngularScale;                            // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTetrahedralConstraints;                        // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseThinShellVolumeConstraints;                    // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContinuousCollisionDetection;                  // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1777[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothConfig* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ChaosCloth.ChaosClothSharedSimConfig
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	int32                                        IterationCount;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubdivisionCount;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLocalSpaceSimulation;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseXPBDConstraints;                               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothSharedSimConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosCloth.ChaosClothingSimulationFactory
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UChaosClothingSimulationFactory* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ChaosCloth.ChaosClothingInteractor
class UChaosClothingInteractor : public UClothingInteractor
{
public:
	uint8                                        Pad_1792[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothingInteractor* GetDefaultObj();

	void SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
	void SetLongRangeAttachmentLinear(float TetherStiffness);
	void SetLongRangeAttachment(const struct FVector2D& TetherStiffness);
	void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride);
	void SetDamping(float DampingCoefficient);
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
	void SetAnimDriveLinear(float AnimDriveStiffness);
	void SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping);
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity);
	void ResetAndTeleport(bool bReset, bool bTeleport);
};

// 0x10 (0xA0 - 0x90)
// Class ChaosCloth.ChaosClothingSimulationInteractor
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_1793[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothingSimulationInteractor* GetDefaultObj();

};

}


