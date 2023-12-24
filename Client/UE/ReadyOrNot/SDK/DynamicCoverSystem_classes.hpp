#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2A8 - 0x258)
// Class DynamicCoverSystem.CoverGenOverrideVolume
class ACoverGenOverrideVolume : public AVolume
{
public:
	struct FCoverGenSettings                     CoverGenSettings;                                  // 0x258(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumCoverPoints;                                    // 0x288(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverGenTime;                                      // 0x28C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D53[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACoverGenOverrideVolume* GetDefaultObj();

	void GenerateCoverPoints();
};

// 0x80 (0x2A0 - 0x220)
// Class DynamicCoverSystem.CoverPoint
class ACoverPoint : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 CoverActor;                                        // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverRail                            CoverRail;                                         // 0x230(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FCoverDirection                       StandCoverDirection;                               // 0x268(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverDirection                       CrouchCoverDirection;                              // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x298(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCrouchOnlyCover : 1;                            // Mask: 0x1, PropSize: 0x10x29C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCoverType : 1;                            // Mask: 0x2, PropSize: 0x10x29C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7E : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EStandCoverType                   StandCoverType;                                    // 0x29D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrouchCoverType                  CrouchCoverType;                                   // 0x29E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D67[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACoverPoint* GetDefaultObj();

	void StopPreviewCoverAnim();
	void SetStandCoverType(enum class EStandCoverType& NewCoverType);
	void SetCrouchCoverType(enum class ECrouchCoverType& NewCoverType);
	void ResetCoverTypes();
	void PreviewCoverAnim();
};

// 0x88 (0xC8 - 0x40)
// Class DynamicCoverSystem.CoverSystem
class UCoverSystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_D8D[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCoverSystem* GetDefaultObj();

	bool ReleaseCover(struct FVector& InCoverPoint);
	bool OccupyCover(struct FVector& InCoverPoint);
	bool IsCoverPointOccupied(struct FVector& InCoverLocation);
};

// 0xD0 (0x5A8 - 0x4D8)
// Class DynamicCoverSystem.NotifyingRecastNavMesh
class ANotifyingRecastNavMesh : public ARecastNavMesh
{
public:
	int32                                        NumCoverPoints;                                    // 0x4D8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverGenTimeMs;                                    // 0x4DC(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverGenSettings                     CoverGenSettings;                                  // 0x4E0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDistanceBetweenCoverPoints;                     // 0x510(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPhysicalSurface>          IgnoredPhysicalSurfacesForGeoTest;                 // 0x518(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          IgnoredPhysicalSurfacesForEdgeTests;               // 0x528(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9A[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANotifyingRecastNavMesh* GetDefaultObj();

	void GenerateCoverPoints();
	void DeleteAllCoverPoints();
};

}


