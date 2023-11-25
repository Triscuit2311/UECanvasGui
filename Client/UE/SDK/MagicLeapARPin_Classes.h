#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * Class MagicLeapARPin.MagicLeapARPinComponent
	 * Size -> 0x01B8 (FullSize[0x03B0] - InheritedSize[0x01F8])
	 */
	class UMagicLeapARPinComponent : public USceneComponent
	{
	public:
		class FString                                                ObjectUID;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      UserIndex;                                               // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapAutoPinType                                        AutoPinType;                                             // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShouldPinActor;                                         // 0x020D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x020E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMagicLeapARPinSaveGame*                               PinDataClass;                                            // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TSet<EMagicLeapARPinType>                                    SearchPinTypes;                                          // 0x0218(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USphereComponent*                                      SearchVolume;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMulticastInlineDelegate                               OnPersistentEntityPinned;                                // 0x0270(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0271(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnPersistentEntityPinLost;                               // 0x0280(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0281(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnPinDataLoadAttemptCompleted;                           // 0x0290(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0291(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FGuid                                                 PinnedCFUID;                                             // 0x02A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                       PinnedSceneComponent;                                    // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMagicLeapARPinSaveGame*                               PinData;                                                 // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0004[0xF0];                                  // 0x02C0(0x00F0) MISSED OFFSET (PADDING)

	public:
		void UnPin();
		class UMagicLeapARPinSaveGame* TryGetPinData(class UMagicLeapARPinSaveGame* InPinDataClass, bool* OutPinDataValid);
		bool PinToRestoredOrSyncedID();
		bool PinToID(const struct FGuid& PinId);
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
		class UMagicLeapARPinSaveGame* GetPinData(class UMagicLeapARPinSaveGame* PinDataClass);
		void AttemptPinDataRestorationAsync();
		bool AttemptPinDataRestoration();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnBindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate);
		void UnBindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate);
		EMagicLeapPassableWorldError SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter);
		void SetContentBindingSaveGameUserIndex(int32_t UserIndex);
		EMagicLeapPassableWorldError QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins);
		bool ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId);
		bool IsTrackerValid();
		EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t* Count);
		EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter);
		int32_t GetContentBindingSaveGameUserIndex();
		EMagicLeapPassableWorldError GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId);
		EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<struct FGuid>* Pins);
		class FString GetARPinStateToString(const struct FMagicLeapARPinState& State);
		EMagicLeapPassableWorldError GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State);
		bool GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
		bool GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
		EMagicLeapPassableWorldError DestroyTracker();
		EMagicLeapPassableWorldError CreateTracker();
		void BindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate);
		void BindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate);
		class FString ARPinIdToString(const struct FGuid& ARPinId);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinInfoActorBase
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AMagicLeapARPinInfoActorBase : public AActor
	{
	public:
		struct FGuid                                                 PinId;                                                   // 0x0220(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bVisibilityOverride;                                     // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnUpdateARPinState();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinRenderer
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class AMagicLeapARPinRenderer : public AActor
	{
	public:
		bool                                                         bInfoActorsVisibilityOverride;                           // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, class AMagicLeapARPinInfoActorBase*>      AllInfoActors;                                           // 0x0228(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMagicLeapARPinInfoActorBase*                          ClassToSpawn;                                            // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetVisibilityOverride(bool InVisibilityOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinSettings : public UObject
	{
	public:
		float                                                        UpdateCheckFrequency;                                    // 0x0028(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMagicLeapARPinState                                  OnUpdatedEventTriggerDelta;                              // 0x002C(0x0014) Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinSaveGame
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinSaveGame : public USaveGame
	{
	public:
		struct FGuid                                                 PinnedID;                                                // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct PCoreUObject_FTransform                               ComponentWorldTransform;                                 // 0x0040(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct PCoreUObject_FTransform                               PinTransform;                                            // 0x0070(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bShouldPinActor;                                         // 0x00A0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapARPin.MagicLeapARPinContentBindings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMagicLeapARPinContentBindings : public USaveGame
	{
	public:
		TMap<struct FGuid, struct FMagicLeapARPinObjectIdList>       AllContentBindings;                                      // 0x0028(0x0050) Edit, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
