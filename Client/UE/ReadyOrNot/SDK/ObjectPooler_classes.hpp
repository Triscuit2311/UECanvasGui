#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// Class ObjectPooler.AsyncRetrieveActorFromPool
class UAsyncRetrieveActorFromPool : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObjectPoolBase*                       ObjectPool;                                        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APooledActor*                          RetrievedActor;                                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAsyncRetrieveActorFromPool* GetDefaultObj();

	void OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolBase* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess);
	class UAsyncRetrieveActorFromPool* AsyncRetrieveActorFromPool(class UObject* WorldContextObject, class UObjectPoolBase* InObjectPool);
};

// 0x20 (0x50 - 0x30)
// Class ObjectPooler.AsyncRetrieveActorFromPool_Comp
class UAsyncRetrieveActorFromPool_Comp : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObjectPoolComponent*                  ObjectPoolComponent;                               // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APooledActor*                          RetrievedActor;                                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAsyncRetrieveActorFromPool_Comp* GetDefaultObj();

	void OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolComponent* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess);
	class UAsyncRetrieveActorFromPool_Comp* AsyncRetrieveActorFromPool_Component(class UObject* WorldContextObject, class UObjectPoolComponent* InObjectPoolComponent);
};

// 0xA8 (0xD0 - 0x28)
// Class ObjectPooler.ObjectPoolBase
class UObjectPoolBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnActorRetrievedFromPool;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorReturnedToPool;                             // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  OwningManagerName;                                 // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PoolName;                                          // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PoolSize;                                          // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EObjectPoolReuseSetting           ReuseSetting;                                      // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_719[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APooledActor>              ObjectClassToPool;                                 // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFillPoolOnBeginPlay : 1;                          // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_48 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_71A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FObjectPoolWarmUpSetting              WarmUp;                                            // 0x6A(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_71B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlatformPoolSettings                 PS4;                                               // 0x74(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPlatformPoolSettings                 PS5;                                               // 0x80(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPlatformPoolSettings                 XboxOne;                                           // 0x8C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPlatformPoolSettings                 XboxSeries;                                        // 0x98(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_71F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APooledActor*>                  PooledActors;                                      // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_720[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectPoolBase* GetDefaultObj();

	void OnActorReturnedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor);
	void OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor);
	bool IsWarmUpComplete();
	bool IsPoolEmpty();
	enum class EObjectPoolReuseSetting GetReuseSetting();
	int32 GetPoolSize();
	class FName GetPoolName();
	TArray<class APooledActor*> GetPooledActors();
	class APooledActor* GetActorFromPool(enum class EObjectPoolRetrieveActorResult* Results);
	void FillPool();
	void EmptyPool();
	bool AreAllActorsInUse();
	void AddActorToPool(class APooledActor* NewPooledActor);
};

// 0x70 (0x120 - 0xB0)
// Class ObjectPooler.ObjectPoolComponent
class UObjectPoolComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnActorRetrievedFromPool;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorReturnedToPool;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  PoolName;                                          // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoolSize;                                          // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectPoolReuseSetting           ReuseSetting;                                      // 0xDC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_743[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APooledActor>              ObjectClassToPool;                                 // 0xE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFillPoolOnBeginPlay : 1;                          // Mask: 0x1, PropSize: 0x10xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_744[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FObjectPoolWarmUpSetting              WarmUp;                                            // 0xEA(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_746[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APooledActor*>                  PooledActors;                                      // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_747[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectPoolComponent* GetDefaultObj();

	void OnActorReturnedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor);
	void OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor);
	bool IsWarmUpComplete();
	bool IsPoolEmpty();
	int32 GetPoolSize();
	class FName GetPoolName();
	class APooledActor* GetActorFromPool(enum class EObjectPoolRetrieveActorResult* Results);
	void FillPool();
	void EmptyPool();
	bool AreAllActorsInUse();
	void AddActorToPool(class APooledActor* NewPooledActor);
};

// 0x10 (0x38 - 0x28)
// Class ObjectPooler.ObjectPoolerSettings
class UObjectPoolerSettings : public UObject
{
public:
	TArray<struct FObjectPoolManager>            ObjectPoolManagers;                                // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UObjectPoolerSettings* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class ObjectPooler.ObjectPoolerWorldSubsystem
class UObjectPoolerWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_752[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnObjectPoolsInitialized;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UObjectPoolBase*>               ObjectPools;                                       // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UObjectPoolerWorldSubsystem* GetDefaultObj();

	void OnObjectPoolsInitialized__DelegateSignature();
	void InitializeObjectPools();
	void DestroyObjectPools();
};

// 0x0 (0x28 - 0x28)
// Class ObjectPooler.ObjectPoolFunctionLibrary
class UObjectPoolFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UObjectPoolFunctionLibrary* GetDefaultObj();

	void MarkActorNotInUse(class APooledActor* InPooledActor);
	void MarkActorInUse(class APooledActor* InPooledActor);
	bool IsActorInUse(class APooledActor* InPooledActor);
	int32 GetUnactivePooledActorCount(class UObject* WorldContext);
	int32 GetPooledActorCount(class UObject* WorldContext);
	class UObjectPoolBase* GetObjectPool(class UObject* WorldContext, class FName PoolName);
	int32 GetNumOfObjectPoolsInWorld(class UObject* WorldContext);
	TArray<class UObjectPoolBase*> GetAllObjectPools(class UObject* WorldContext);
	TArray<TSubclassOf<class UObjectPoolBase>> GetAllObjectPoolClassesFromManager(class FName ManagerName);
	int32 GetActivePooledActorCount(class UObject* WorldContext);
	bool DoesObjectPoolExist(class FName PoolName);
	void DestroyAllObjectPools();
};

// 0x48 (0x268 - 0x220)
// Class ObjectPooler.PooledActor
class APooledActor : public AActor
{
public:
	FMulticastInlineDelegateProperty_            InUse;                                             // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotInUse;                                          // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        MaxLifespan;                                       // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEverAllowTick : 1;                                // Mask: 0x1, PropSize: 0x10x244(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEverAllowCollisions : 1;                          // Mask: 0x2, PropSize: 0x10x244(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReturnToPoolAfterPhysicsHit : 1;                  // Mask: 0x4, PropSize: 0x10x244(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInUse : 1;                                        // Mask: 0x8, PropSize: 0x10x244(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_54 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x248(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObjectPoolBase*                       PoolOwner;                                         // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectPoolComponent*                  PoolOwner_Component;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APooledActor* GetDefaultObj();

	void SetActive(bool bActive);
	void PooledActor_EndPlay();
	void PooledActor_BeginPlay();
	void OnLifeSpanExpired();
	void NotInUseSignature__DelegateSignature(class APooledActor* PooledActor);
	void MarkNotInUse(bool bBroadcast);
	void MarkInUse(bool bBroadcast);
	bool IsNotInUse();
	bool IsInUse();
	void InUseSignature__DelegateSignature(class APooledActor* PooledActor);
	void DeactivateAllComponents();
	void ActivateAllComponents();
};

}


