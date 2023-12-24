#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x3B0 - 0x1F8)
// Class MagicLeapARPin.MagicLeapARPinComponent
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	class FString                                ObjectUID;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapAutoPinType             AutoPinType;                                       // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldPinActor;                                   // 0x20D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMagicLeapARPinSaveGame>   PinDataClass;                                      // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<enum class EMagicLeapARPinType>         SearchPinTypes;                                    // 0x218(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USphereComponent*                      SearchVolume;                                      // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPersistentEntityPinned;                          // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPersistentEntityPinLost;                         // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPinDataLoadAttemptCompleted;                     // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                 PinnedCFUID;                                       // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       PinnedSceneComponent;                              // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*               PinData;                                           // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19E6[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapARPinComponent* GetDefaultObj();

	void UnPin();
	class UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> InPinDataClass, bool* OutPinDataValid);
	bool PinToRestoredOrSyncedID();
	bool PinToID(struct FGuid& PinId);
	void PinToBestFit();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinId);
	class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
	void AttemptPinDataRestorationAsync();
	bool AttemptPinDataRestoration();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapARPinFunctionLibrary* GetDefaultObj();

	void UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty_& Delegate);
	void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);
	enum class EMagicLeapPassableWorldError SetGlobalQueryFilter(struct FMagicLeapARPinQuery& InGlobalFilter);
	void SetContentBindingSaveGameUserIndex(int32 UserIndex);
	enum class EMagicLeapPassableWorldError QueryARPins(struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins);
	bool ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId);
	bool IsTrackerValid();
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32* Count);
	enum class EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter);
	int32 GetContentBindingSaveGameUserIndex();
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid* PinId);
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins);
	class FString GetARPinStateToString(struct FMagicLeapARPinState& State);
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinId, struct FMagicLeapARPinState* State);
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool GetARPinPositionAndOrientation(struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	enum class EMagicLeapPassableWorldError DestroyTracker();
	enum class EMagicLeapPassableWorldError CreateTracker();
	void BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty_& Delegate);
	void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);
	class FString ARPinIdToString(struct FGuid& ARPinId);
};

// 0x18 (0x238 - 0x220)
// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
class AMagicLeapARPinInfoActorBase : public AActor
{
public:
	struct FGuid                                 PinId;                                             // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibilityOverride;                               // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A41[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMagicLeapARPinInfoActorBase* GetDefaultObj();

	void OnUpdateARPinState();
};

// 0x68 (0x288 - 0x220)
// Class MagicLeapARPin.MagicLeapARPinRenderer
class AMagicLeapARPinRenderer : public AActor
{
public:
	bool                                         bInfoActorsVisibilityOverride;                     // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;                                     // 0x228(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A52[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AMagicLeapARPinInfoActorBase> ClassToSpawn;                                      // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMagicLeapARPinRenderer* GetDefaultObj();

	void SetVisibilityOverride(bool InVisibilityOverride);
};

// 0x18 (0x40 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinSettings
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                        UpdateCheckFrequency;                              // 0x28(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                  OnUpdatedEventTriggerDelta;                        // 0x2C(0x14)(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMagicLeapARPinSettings* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinSaveGame
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                 PinnedID;                                          // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComponentWorldTransform;                           // 0x40(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PinTransform;                                      // 0x70(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShouldPinActor;                                   // 0xA0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapARPinSaveGame* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinContentBindings
class UMagicLeapARPinContentBindings : public USaveGame
{
public:
	TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings;                                // 0x28(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMagicLeapARPinContentBindings* GetDefaultObj();

};

}


