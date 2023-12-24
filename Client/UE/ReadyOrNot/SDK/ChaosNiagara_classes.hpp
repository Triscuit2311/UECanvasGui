#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x238 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x38(0x50)(Edit, NativeAccessSpecifierPublic)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1799[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DataProcessFrequency;                              // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoSpawn;                                           // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnChance;                                       // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0xA4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xAC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xB4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xC4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0xCC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0xD4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurfaceTypeToSpawn;                                // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0xE4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0xFC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0x104(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetExternalCollisionData;                         // 0x105(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoSpatialHash;                                     // 0x106(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpatialHashVolumeMin;                              // 0x108(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpatialHashVolumeMax;                              // 0x114(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x120(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDataPerCell;                                    // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyMaterialsFilter;                             // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x138(0x50)(Edit, NativeAccessSpecifierPublic)
	bool                                         bGetExternalBreakingData;                          // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetExternalTrailingData;                          // 0x189(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x18C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritedVelocityMultiplier;                       // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x19C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpreadAngleMax;                                    // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityOffsetMin;                                 // 0x1A8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityOffsetMax;                                 // 0x1B4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLatency;                                        // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastSpawnedPointID;                                // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastSpawnTime;                                     // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverTime;                                        // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeStampOfLastProcessedData;                      // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17A9[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsField* GetDefaultObj();

};

}


