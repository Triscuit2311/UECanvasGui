#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x260 - 0x1F8)
// Class MagicLeapPlanes.MagicLeapPlanesComponent
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags;                                        // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBoxComponent*                         SearchVolume;                                      // 0x208(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHolePerimeter;                                  // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlaneArea;                                      // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapPlaneQueryType          QueryType;                                         // 0x21C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1934[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimilarityThreshold;                               // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1936[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlanesQueryResult;                               // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPersistentPlanesQueryResult;                     // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1937[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapPlanesComponent* GetDefaultObj();

	bool RequestPlanesAsync();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapPlanesFunctionLibrary* GetDefaultObj();

	void ReorderPlaneFlags(TArray<enum class EMagicLeapPlaneQueryFlags>& InPriority, TArray<enum class EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<enum class EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	bool RemovePersistentQuery(const struct FGuid& Handle);
	void RemoveFlagsNotInQuery(TArray<enum class EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<enum class EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<enum class EMagicLeapPlaneQueryFlags>* OutFlags);
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, FDelegateProperty_& ResultDelegate);
	bool PlanesPersistentQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, struct FGuid& Handle, FDelegateProperty_& ResultDelegate);
	bool IsTrackerValid();
	struct FTransform GetContentScale(class AActor* ContentActor, struct FMagicLeapPlaneResult& PlaneResult);
	bool DestroyTracker();
	bool CreateTracker();
	struct FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType);
};

}


