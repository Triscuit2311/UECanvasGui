﻿#pragma once

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
	 * Class GameplayTasks.GameplayTask
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGameplayTask : public UObject
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  InstanceName;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0001[0x2];                                   // 0x0038(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETaskResourceOverlapPolicy                                   ResourceOverlapPolicy;                                   // 0x003A(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0002[0x25];                                  // 0x003B(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTask*                                         ChildTask;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReadyForActivation();
		void GenericGameplayTaskDelegate__DelegateSignature();
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_ClaimResource
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UGameplayTask_ClaimResource : public UGameplayTask
	{
	public:
		class UGameplayTask_ClaimResource* ClaimResources(const TScriptInterface<class IGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UGameplayTaskResource*> ResourceClasses, uint8_t Priority, const class FName& TaskInstanceName);
		class UGameplayTask_ClaimResource* ClaimResource(const TScriptInterface<class IGameplayTaskOwnerInterface>& InTaskOwner, class UGameplayTaskResource* ResourceClass, uint8_t Priority, const class FName& TaskInstanceName);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTaskOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class IGameplayTaskOwnerInterface : public IInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTaskResource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayTaskResource : public UObject
	{
	public:
		int32_t                                                      ManualResourceID;                                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int8_t                                                       AutoResourceID;                                          // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         bManuallySetID : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_SpawnActor
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class UGameplayTask_SpawnActor : public UGameplayTask
	{
	public:
		class UMulticastInlineDelegate                               Success;                                                 // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0069(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               DidNotSpawn;                                             // 0x0078(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0079(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                                ClassToSpawn;                                            // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* Class, bool bSpawnOnlyOnAuthority);
		void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTasksComponent
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class UGameplayTasksComponent : public UActorComponent
	{
	public:
		unsigned char                                                UnknownData_0000[0xC];                                   // 0x00B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                         UnknownData_0001 : 1;                                    // 0x00BC(0x0001) BIT_FIELD (PADDING)
		bool                                                         bIsNetDirty : 1;                                         // 0x00BC(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                                 SimulatedTasks;                                          // 0x00C0(0x0010) Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<class UGameplayTask*>                                 TaskPriorityQueue;                                       // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0003[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                                 TickingTasks;                                            // 0x00F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UGameplayTask*>                                 KnownTasks;                                              // 0x0100(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UMulticastInlineDelegate                               OnClaimedResourcesChange;                                // 0x0110(0x0001) ELEMENT_SIZE_MISMATCH BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0111(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		void OnRep_SimulatedTasks();
		EGameplayTaskRunResult K2_RunGameplayTask(const TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, uint8_t Priority, TArray<class UGameplayTaskResource*> AdditionalRequiredResources, TArray<class UGameplayTaskResource*> AdditionalClaimedResources);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_TimeLimitedExecution
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UGameplayTask_TimeLimitedExecution : public UGameplayTask
	{
	public:
		class UMulticastInlineDelegate                               OnFinished;                                              // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0069(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnTimeExpired;                                           // 0x0078(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0079(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTasks.GameplayTask_WaitDelay
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UGameplayTask_WaitDelay : public UGameplayTask
	{
	public:
		class UMulticastInlineDelegate                               OnFinish;                                                // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0069(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0001[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, float Time, uint8_t Priority);
		void TaskDelayDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
