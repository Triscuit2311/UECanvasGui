#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x428 - 0x220)
// Class NavigationSystem.NavigationData
class ANavigationData : public AActor
{
public:
	uint8                                        Pad_D66[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   RenderingComp;                                     // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                        NavDataConfig;                                     // 0x230(0x78)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnableDrawing : 1;                                // Mask: 0x1, PropSize: 0x10x2A8(0x1)(Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceRebuildOnLoad : 1;                           // Mask: 0x2, PropSize: 0x10x2A8(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoDestroyWhenNoNavigation : 1;                  // Mask: 0x4, PropSize: 0x10x2A8(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanBeMainNavData : 1;                             // Mask: 0x8, PropSize: 0x10x2A8(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanSpawnOnRebuild : 1;                            // Mask: 0x10, PropSize: 0x10x2A8(0x1)(Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRebuildAtRuntime : 1;                             // Mask: 0x20, PropSize: 0x10x2A8(0x1)(Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7F : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERuntimeGenerationType            RuntimeGeneration;                                 // 0x2AC(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObservedPathsTickInterval;                         // 0x2B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       DataVersion;                                       // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D71[0x108];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSupportedAreaData>            SupportedAreas;                                    // 0x3C0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D72[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavigationData* GetDefaultObj();

};

// 0xB0 (0x4D8 - 0x428)
// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData
{
public:
	uint8                                        bDrawTriangleEdges : 1;                            // Mask: 0x1, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolyEdges : 1;                                // Mask: 0x2, PropSize: 0x10x428(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFilledPolys : 1;                              // Mask: 0x4, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavMeshEdges : 1;                             // Mask: 0x8, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileBounds : 1;                               // Mask: 0x10, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPathCollidingGeometry : 1;                    // Mask: 0x20, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawTileLabels : 1;                               // Mask: 0x40, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolygonLabels : 1;                            // Mask: 0x80, PropSize: 0x10x428(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDefaultPolygonCost : 1;                       // Mask: 0x1, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawPolygonFlags : 1;                             // Mask: 0x2, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawLabelsOnPathNodes : 1;                        // Mask: 0x4, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawNavLinks : 1;                                 // Mask: 0x8, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawFailedNavLinks : 1;                           // Mask: 0x10, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawClusters : 1;                                 // Mask: 0x20, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctree : 1;                                   // Mask: 0x40, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawOctreeDetails : 1;                            // Mask: 0x80, PropSize: 0x10x429(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawMarkedForbiddenPolys : 1;                     // Mask: 0x1, PropSize: 0x10x42A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDistinctlyDrawTilesBeingBuilt : 1;                // Mask: 0x2, PropSize: 0x10x42A(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_81 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D9C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawOffset;                                        // 0x42C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x1, PropSize: 0x10x430(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_84 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TilePoolSize;                                      // 0x434(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSizeUU;                                        // 0x438(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x43C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellHeight;                                        // 0x440(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentRadius;                                       // 0x444(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentHeight;                                       // 0x448(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxSlope;                                     // 0x44C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentMaxStepHeight;                                // 0x450(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRegionArea;                                     // 0x454(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MergeRegionSize;                                   // 0x458(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSimplificationError;                            // 0x45C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimultaneousTileGenerationJobsCount;            // 0x460(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileNumberHardLimit;                               // 0x464(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefTileBits;                                   // 0x468(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefNavPolyBits;                                // 0x46C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyRefSaltBits;                                   // 0x470(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NavMeshOriginOffset;                               // 0x474(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultDrawDistance;                               // 0x480(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxSearchNodes;                             // 0x484(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxHierarchicalSearchNodes;                 // 0x488(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x48C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x48D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegionChunkSplits;                                 // 0x490(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerChunkSplits;                                  // 0x494(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x2, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x4, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x8, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x10, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x20, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoFullyAsyncNavDataGathering : 1;                 // Mask: 0x40, PropSize: 0x10x498(0x1)(Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseBetterOffsetsFromCorners : 1;                  // Mask: 0x80, PropSize: 0x10x498(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStoreEmptyTileLayers : 1;                         // Mask: 0x1, PropSize: 0x10x499(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVirtualFilters : 1;                            // Mask: 0x2, PropSize: 0x10x499(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowNavLinkAsPathEnd : 1;                        // Mask: 0x4, PropSize: 0x10x499(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVoxelCache : 1;                                // Mask: 0x8, PropSize: 0x10x499(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_86 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_DAB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TileSetUpdateInterval;                             // 0x49C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HeuristicScale;                                    // 0x4A0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalDeviationFromGroundCompensation;           // 0x4A4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAC[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARecastNavMesh* GetDefaultObj();

	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.CrowdManagerBase
class UCrowdManagerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCrowdManagerBase* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase
{
public:
	float                                        DefaultCost;                                       // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FixedAreaEnteringCost;                             // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x3C(0x4)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x40(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x41(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBD[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavArea* GetDefaultObj();

};

// 0x15B8 (0x15E0 - 0x28)
// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                       MainNavData;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                       AbstractNavData;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultAgentName;                                  // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UCrowdManagerBase>       CrowdManagerClass;                                 // 0x40(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoCreateNavigationData : 1;                     // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowClientSideNavigation : 1;                    // Mask: 0x4, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldDiscardSubLevelNavData : 1;                 // Mask: 0x8, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickWhilePaused : 1;                              // Mask: 0x10, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSupportRebuilding : 1;                            // Mask: 0x20, PropSize: 0x10x68(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInitialBuildingLocked : 1;                        // Mask: 0x40, PropSize: 0x10x68(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_91 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSkipAgentHeightCheckWhenPickingNavData : 1;       // Mask: 0x1, PropSize: 0x10x69(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateNavigationOnlyAroundNavigationInvokers : 1; // Mask: 0x2, PropSize: 0x10x69(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_92 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EEF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActiveTilesUpdateInterval;                         // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavDataGatheringModeConfig       DataGatheringMode;                                 // 0x70(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EF2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirtyAreaWarningSizeThreshold;                     // 0x74(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                SupportedAgents;                                   // 0x78(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgentsMask;                               // 0x88(0x4)(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_EF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ANavigationData*>               NavDataSet;                                        // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class ANavigationData*>               NavDataRegistrationQueue;                          // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNavDataRegisteredEvent;                          // 0xC0(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigationGenerationFinishedDelegate;            // 0xD0(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFB[0xDC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFNavigationSystemRunMode         OperationMode;                                     // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EFF[0x13FF];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirtyAreasUpdateFreq;                              // 0x15BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F00[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationSystemV1* GetDefaultObj();

	void UnregisterNavigationInvoker(class AActor* Invoker);
	void SimpleMoveToLocation(class AController* Controller, struct FVector& Goal);
	void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool NavigationRaycast(class UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector* HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea);
	bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent);
	bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	struct FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector& Origin, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	enum class ENavigationQueryResult GetPathLength(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	enum class ENavigationQueryResult GetPathCost(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
};

// 0x20 (0x48 - 0x28)
// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>         Areas;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                IncludeFlags;                                      // 0x38(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                ExcludeFlags;                                      // 0x3C(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationQueryFilter* GetDefaultObj();

};

// 0x0 (0x428 - 0x428)
// Class NavigationSystem.AbstractNavData
class AAbstractNavData : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class AAbstractNavData* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Default
class UNavArea_Default : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Default* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_LowHeight
class UNavArea_LowHeight : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_LowHeight* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Null
class UNavArea_Null : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Null* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Obstacle
class UNavArea_Obstacle : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Obstacle* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavAreaMeta
class UNavAreaMeta : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavAreaMeta* GetDefaultObj();

};

// 0x80 (0xC8 - 0x48)
// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	TSubclassOf<class UNavArea>                  Agent0Area;                                        // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent1Area;                                        // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent2Area;                                        // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent3Area;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent4Area;                                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent5Area;                                        // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent6Area;                                        // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent7Area;                                        // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent8Area;                                        // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent9Area;                                        // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent10Area;                                       // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent11Area;                                       // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent12Area;                                       // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent13Area;                                       // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent14Area;                                       // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  Agent15Area;                                       // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNavAreaMeta_SwitchByAgent* GetDefaultObj();

};

// 0x68 (0xD8 - 0x70)
// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase
{
public:
	uint8                                        Pad_F42[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavCollisionCylinder>         CylinderCollision;                                 // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>              BoxCollision;                                      // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherConvexGeometry : 1;                         // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F43[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavCollision* GetDefaultObj();

};

// 0x0 (0x428 - 0x428)
// Class NavigationSystem.NavigationGraph
class ANavigationGraph : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraph* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class NavigationSystem.NavigationGraphNode
class ANavigationGraphNode : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraphNode* GetDefaultObj();

};

// 0x28 (0x220 - 0x1F8)
// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                         Node;                                              // 0x1F8(0x18)(NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         NextNodeComponent;                                 // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*         PrevNodeComponent;                                 // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNavigationGraphNodeComponent* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                        TileGenerationRadius;                              // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileRemovalRadius;                                 // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNavigationInvokerComponent* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class NavigationSystem.NavigationPath
class UNavigationPath : public UObject
{
public:
	FMulticastInlineDelegateProperty_            PathUpdatedNotifier;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENavigationOptionFlag             RecalculateOnInvalidation;                         // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8A[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationPath* GetDefaultObj();

	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	class FString GetDebugString();
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavigationPathGenerator
class INavigationPathGenerator : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavigationPathGenerator* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                        bStrictlyStatic : 1;                               // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoSpawnMissingNavData : 1;                      // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x8, PropSize: 0x10x50(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F93[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationSystemModuleConfig* GetDefaultObj();

};

// 0xF0 (0x310 - 0x220)
// Class NavigationSystem.NavigationTestingActor
class ANavigationTestingActor : public AActor
{
public:
	uint8                                        Pad_F97[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*           InvokerComponent;                                  // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bActAsNavigationInvoker : 1;                       // Mask: 0x1, PropSize: 0x10x240(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_96 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F99[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x248(0x30)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               QueryingExtent;                                    // 0x278(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       MyNavData;                                         // 0x288(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ProjectedLocation;                                 // 0x290(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectedLocationValid : 1;                       // Mask: 0x1, PropSize: 0x10x29C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x2, PropSize: 0x10x29C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_97 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CostLimitFactor;                                   // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumCostLimit;                                  // 0x2A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBacktracking : 1;                                 // Mask: 0x1, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHierarchicalPathfinding : 1;                   // Mask: 0x2, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherDetailedInfo : 1;                           // Mask: 0x4, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDistanceToWall : 1;                           // Mask: 0x8, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowNodePool : 1;                                 // Mask: 0x10, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowBestPath : 1;                                 // Mask: 0x20, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDiffWithPreviousStep : 1;                     // Mask: 0x40, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x80, PropSize: 0x10x2A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavCostDisplay                   CostDisplayMode;                                   // 0x2AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextCanvasOffset;                                  // 0x2B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPathSearchOutOfNodes : 1;                         // Mask: 0x4, PropSize: 0x10x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_98 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FB2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PathfindingTime;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PathCost;                                          // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathfindingSteps;                                  // 0x2C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationTestingActor*               OtherActor;                                        // 0x2C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x2D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShowStepIndex;                                     // 0x2D8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetFromCornersDistance;                         // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBA[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavigationTestingActor* GetDefaultObj();

};

// 0x20 (0x470 - 0x450)
// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_FC2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavigationLink>               Links;                                             // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavLinkComponent* GetDefaultObj();

};

// 0x30 (0xE0 - 0xB0)
// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                        Pad_FD0[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAttachToOwnersRoot : 1;                           // Mask: 0x1, PropSize: 0x10xD4(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_9A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FD2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CachedNavParent;                                   // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNavRelevantComponent* GetDefaultObj();

	void SetNavigationRelevancy(bool bRelevant);
};

// 0xB0 (0x190 - 0xE0)
// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_FD9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NavLinkUserId;                                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FDA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  EnabledAreaClass;                                  // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavArea>                  DisabledAreaClass;                                 // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x100(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                               LinkRelativeStart;                                 // 0x104(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LinkRelativeEnd;                                   // 0x110(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavLinkDirection                 LinkDirection;                                     // 0x11C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bLinkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenEnabled : 1;                            // Mask: 0x2, PropSize: 0x10x120(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNotifyWhenDisabled : 1;                           // Mask: 0x4, PropSize: 0x10x120(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateBoxObstacle : 1;                            // Mask: 0x8, PropSize: 0x10x120(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_9B : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ObstacleOffset;                                    // 0x124(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ObstacleExtent;                                    // 0x130(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  ObstacleAreaClass;                                 // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastRadius;                                   // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BroadcastInterval;                                 // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 BroadcastChannel;                                  // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE9[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavLinkCustomComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkCustomInterface
class INavLinkCustomInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkCustomInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkHostInterface
class INavLinkHostInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkHostInterface* GetDefaultObj();

};

// 0x0 (0x450 - 0x450)
// Class NavigationSystem.NavLinkRenderingComponent
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UNavLinkRenderingComponent* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class NavigationSystem.NavLinkTrivial
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static class UClass* StaticClass();
	static class UNavLinkTrivial* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x258(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavMeshBoundsVolume* GetDefaultObj();

};

// 0x10 (0x460 - 0x450)
// Class NavigationSystem.NavMeshRenderingComponent
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1002[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavMeshRenderingComponent* GetDefaultObj();

};

// 0x60 (0x140 - 0xE0)
// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FailsafeExtent;                                    // 0xE8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeAgentHeight : 1;                           // Mask: 0x1, PropSize: 0x10xF4(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100F[0x4B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavModifierComponent* GetDefaultObj();

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x18 (0x270 - 0x258)
// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume
{
public:
	uint8                                        Pad_1017[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMaskFillCollisionUnderneathForNavmesh;            // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1018[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavModifierVolume* GetDefaultObj();

	void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavNodeInterface
class INavNodeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavNodeInterface* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class NavigationSystem.NavSystemConfigOverride
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*               NavigationSystemConfig;                            // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavSystemOverridePolicy          OverridePolicy;                                    // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLoadOnClient : 1;                                 // Mask: 0x1, PropSize: 0x10x229(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavSystemConfigOverride* GetDefaultObj();

};

// 0x0 (0x450 - 0x450)
// Class NavigationSystem.NavTestRenderingComponent
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UNavTestRenderingComponent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.RecastFilter_UseDefaultArea
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class URecastFilter_UseDefaultArea* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class NavigationSystem.RecastNavMeshDataChunk
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	uint8                                        Pad_101E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecastNavMeshDataChunk* GetDefaultObj();

};

}


