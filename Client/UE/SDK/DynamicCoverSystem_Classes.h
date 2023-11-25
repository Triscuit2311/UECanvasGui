#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * Class DynamicCoverSystem.CoverGenOverrideVolume
	 * Size -> 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
	 */
	class ACoverGenOverrideVolume : public AVolume
	{
	public:
		struct FCoverGenSettings                                     CoverGenSettings;                                        // 0x0258(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      NumCoverPoints;                                          // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CoverGenTime;                                            // 0x028C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (PADDING)

	public:
		void GenerateCoverPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicCoverSystem.CoverSystem
	 * Size -> 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
	 */
	class UCoverSystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                                UnknownData_0000[0x88];                                  // 0x0040(0x0088) MISSED OFFSET (PADDING)

	public:
		bool ReleaseCover(const struct FVector& InCoverPoint);
		bool OccupyCover(const struct FVector& InCoverPoint);
		bool IsCoverPointOccupied(const struct FVector& InCoverLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicCoverSystem.CoverPoint
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ACoverPoint : public AActor
	{
	public:
		class USceneComponent*                                       SceneComponent;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                                 CoverActor;                                              // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverRail                                            CoverRail;                                               // 0x0230(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
		struct FCoverDirection                                       StandCoverDirection;                                     // 0x0268(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FCoverDirection                                       CrouchCoverDirection;                                    // 0x0280(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      Index;                                                   // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bIsCrouchOnlyCover : 1;                                  // 0x029C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bOverrideCoverType : 1;                                  // 0x029C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EStandCoverType                                              StandCoverType;                                          // 0x029D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECrouchCoverType                                             CrouchCoverType;                                         // 0x029E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x029F(0x0001) MISSED OFFSET (PADDING)

	public:
		void StopPreviewCoverAnim();
		void SetStandCoverType(EStandCoverType NewCoverType);
		void SetCrouchCoverType(ECrouchCoverType NewCoverType);
		void ResetCoverTypes();
		void PreviewCoverAnim();
		static UClass* StaticClass();
	};

	/**
	 * Class DynamicCoverSystem.NotifyingRecastNavMesh
	 * Size -> 0x00D0 (FullSize[0x05A8] - InheritedSize[0x04D8])
	 */
	class ANotifyingRecastNavMesh : public ARecastNavMesh
	{
	public:
		int32_t                                                      NumCoverPoints;                                          // 0x04D8(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CoverGenTimeMs;                                          // 0x04DC(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverGenSettings                                     CoverGenSettings;                                        // 0x04E0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                        MinDistanceBetweenCoverPoints;                           // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                     IgnoredPhysicalSurfacesForGeoTest;                       // 0x0518(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                     IgnoredPhysicalSurfacesForEdgeTests;                     // 0x0528(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x70];                                  // 0x0538(0x0070) MISSED OFFSET (PADDING)

	public:
		void GenerateCoverPoints();
		void DeleteAllCoverPoints();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
