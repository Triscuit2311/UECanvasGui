#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// DelegateFunction ObjectPooler.AsyncRetrieveActorFromPool.OnAsyncHandleRetrieveActor__DelegateSignature
struct UAsyncRetrieveActorFromPool_OnAsyncHandleRetrieveActor__DelegateSignature_Params
{
public:
	class UObjectPoolBase*                       ObjectPool;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          RetrievedActor;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ObjectPooler.AsyncRetrieveActorFromPool.AsyncRetrieveActorFromPool
struct UAsyncRetrieveActorFromPool_AsyncRetrieveActorFromPool_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectPoolBase*                       InObjectPool;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncRetrieveActorFromPool*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction ObjectPooler.AsyncRetrieveActorFromPool_Comp.OnAsyncHandleRetrieveActor__DelegateSignature
struct UAsyncRetrieveActorFromPool_Comp_OnAsyncHandleRetrieveActor__DelegateSignature_Params
{
public:
	class UObjectPoolComponent*                  ObjectPool;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          RetrievedActor;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ObjectPooler.AsyncRetrieveActorFromPool_Comp.AsyncRetrieveActorFromPool_Component
struct UAsyncRetrieveActorFromPool_Comp_AsyncRetrieveActorFromPool_Component_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectPoolComponent*                  InObjectPoolComponent;                             // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncRetrieveActorFromPool_Comp*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ObjectPooler.ObjectPoolBase.OnActorReturnedFromPool__DelegateSignature
struct UObjectPoolBase_OnActorReturnedFromPool__DelegateSignature_Params
{
public:
	class UObjectPoolBase*                       PoolOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ObjectPooler.ObjectPoolBase.OnActorRetrievedFromPool__DelegateSignature
struct UObjectPoolBase_OnActorRetrievedFromPool__DelegateSignature_Params
{
public:
	class UObjectPoolBase*                       PoolOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolBase.IsWarmUpComplete
struct UObjectPoolBase_IsWarmUpComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolBase.IsPoolEmpty
struct UObjectPoolBase_IsPoolEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolBase.GetReuseSetting
struct UObjectPoolBase_GetReuseSetting_Params
{
public:
	enum class EObjectPoolReuseSetting           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ObjectPooler.ObjectPoolBase.GetPoolSize
struct UObjectPoolBase_GetPoolSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolBase.GetPoolName
struct UObjectPoolBase_GetPoolName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolBase.GetPooledActors
struct UObjectPoolBase_GetPooledActors_Params
{
public:
	TArray<class APooledActor*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolBase.GetActorFromPool
struct UObjectPoolBase_GetActorFromPool_Params
{
public:
	enum class EObjectPoolRetrieveActorResult    Results;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_705[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APooledActor*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolBase.AreAllActorsInUse
struct UObjectPoolBase_AreAllActorsInUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolBase.AddActorToPool
struct UObjectPoolBase_AddActorToPool_Params
{
public:
	class APooledActor*                          NewPooledActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ObjectPooler.ObjectPoolComponent.OnActorReturnedFromPool__DelegateSignature
struct UObjectPoolComponent_OnActorReturnedFromPool__DelegateSignature_Params
{
public:
	class UObjectPoolComponent*                  PoolOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ObjectPooler.ObjectPoolComponent.OnActorRetrievedFromPool__DelegateSignature
struct UObjectPoolComponent_OnActorRetrievedFromPool__DelegateSignature_Params
{
public:
	class UObjectPoolComponent*                  PoolOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APooledActor*                          Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.IsWarmUpComplete
struct UObjectPoolComponent_IsWarmUpComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.IsPoolEmpty
struct UObjectPoolComponent_IsPoolEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.GetPoolSize
struct UObjectPoolComponent_GetPoolSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.GetPoolName
struct UObjectPoolComponent_GetPoolName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.GetActorFromPool
struct UObjectPoolComponent_GetActorFromPool_Params
{
public:
	enum class EObjectPoolRetrieveActorResult    Results;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_738[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APooledActor*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.AreAllActorsInUse
struct UObjectPoolComponent_AreAllActorsInUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolComponent.AddActorToPool
struct UObjectPoolComponent_AddActorToPool_Params
{
public:
	class APooledActor*                          NewPooledActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.MarkActorNotInUse
struct UObjectPoolFunctionLibrary_MarkActorNotInUse_Params
{
public:
	class APooledActor*                          InPooledActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.MarkActorInUse
struct UObjectPoolFunctionLibrary_MarkActorInUse_Params
{
public:
	class APooledActor*                          InPooledActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.IsActorInUse
struct UObjectPoolFunctionLibrary_IsActorInUse_Params
{
public:
	class APooledActor*                          InPooledActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_766[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetUnactivePooledActorCount
struct UObjectPoolFunctionLibrary_GetUnactivePooledActorCount_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetPooledActorCount
struct UObjectPoolFunctionLibrary_GetPooledActorCount_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_774[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetObjectPool
struct UObjectPoolFunctionLibrary_GetObjectPool_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PoolName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectPoolBase*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetNumOfObjectPoolsInWorld
struct UObjectPoolFunctionLibrary_GetNumOfObjectPoolsInWorld_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPools
struct UObjectPoolFunctionLibrary_GetAllObjectPools_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObjectPoolBase*>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPoolClassesFromManager
struct UObjectPoolFunctionLibrary_GetAllObjectPoolClassesFromManager_Params
{
public:
	class FName                                  ManagerName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UObjectPoolBase>>   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.GetActivePooledActorCount
struct UObjectPoolFunctionLibrary_GetActivePooledActorCount_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_796[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ObjectPooler.ObjectPoolFunctionLibrary.DoesObjectPoolExist
struct UObjectPoolFunctionLibrary_DoesObjectPoolExist_Params
{
public:
	class FName                                  PoolName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.PooledActor.SetActive
struct APooledActor_SetActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ObjectPooler.PooledActor.NotInUseSignature__DelegateSignature
struct APooledActor_NotInUseSignature__DelegateSignature_Params
{
public:
	class APooledActor*                          PooledActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.PooledActor.MarkNotInUse
struct APooledActor_MarkNotInUse_Params
{
public:
	bool                                         bBroadcast;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.PooledActor.MarkInUse
struct APooledActor_MarkInUse_Params
{
public:
	bool                                         bBroadcast;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.PooledActor.IsNotInUse
struct APooledActor_IsNotInUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ObjectPooler.PooledActor.IsInUse
struct APooledActor_IsInUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ObjectPooler.PooledActor.InUseSignature__DelegateSignature
struct APooledActor_InUseSignature__DelegateSignature_Params
{
public:
	class APooledActor*                          PooledActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


