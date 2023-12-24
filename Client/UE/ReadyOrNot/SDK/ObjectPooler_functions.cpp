#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ObjectPooler.AsyncRetrieveActorFromPool
// (None)

class UClass* UAsyncRetrieveActorFromPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncRetrieveActorFromPool");

	return Clss;
}


// AsyncRetrieveActorFromPool ObjectPooler.Default__AsyncRetrieveActorFromPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncRetrieveActorFromPool* UAsyncRetrieveActorFromPool::GetDefaultObj()
{
	static class UAsyncRetrieveActorFromPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncRetrieveActorFromPool*>(UAsyncRetrieveActorFromPool::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ObjectPooler.AsyncRetrieveActorFromPool.OnAsyncHandleRetrieveActor__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolBase*             ObjectPool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                RetrievedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncRetrieveActorFromPool::OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolBase* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncRetrieveActorFromPool", "OnAsyncHandleRetrieveActor__DelegateSignature");

	Params::UAsyncRetrieveActorFromPool_OnAsyncHandleRetrieveActor__DelegateSignature_Params Parms{};

	Parms.ObjectPool = ObjectPool;
	Parms.RetrievedActor = RetrievedActor;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.AsyncRetrieveActorFromPool.AsyncRetrieveActorFromPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectPoolBase*             InObjectPool                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncRetrieveActorFromPool* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncRetrieveActorFromPool* UAsyncRetrieveActorFromPool::AsyncRetrieveActorFromPool(class UObject* WorldContextObject, class UObjectPoolBase* InObjectPool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncRetrieveActorFromPool", "AsyncRetrieveActorFromPool");

	Params::UAsyncRetrieveActorFromPool_AsyncRetrieveActorFromPool_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InObjectPool = InObjectPool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ObjectPooler.AsyncRetrieveActorFromPool_Comp
// (None)

class UClass* UAsyncRetrieveActorFromPool_Comp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncRetrieveActorFromPool_Comp");

	return Clss;
}


// AsyncRetrieveActorFromPool_Comp ObjectPooler.Default__AsyncRetrieveActorFromPool_Comp
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncRetrieveActorFromPool_Comp* UAsyncRetrieveActorFromPool_Comp::GetDefaultObj()
{
	static class UAsyncRetrieveActorFromPool_Comp* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncRetrieveActorFromPool_Comp*>(UAsyncRetrieveActorFromPool_Comp::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ObjectPooler.AsyncRetrieveActorFromPool_Comp.OnAsyncHandleRetrieveActor__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolComponent*        ObjectPool                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                RetrievedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncRetrieveActorFromPool_Comp::OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolComponent* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncRetrieveActorFromPool_Comp", "OnAsyncHandleRetrieveActor__DelegateSignature");

	Params::UAsyncRetrieveActorFromPool_Comp_OnAsyncHandleRetrieveActor__DelegateSignature_Params Parms{};

	Parms.ObjectPool = ObjectPool;
	Parms.RetrievedActor = RetrievedActor;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.AsyncRetrieveActorFromPool_Comp.AsyncRetrieveActorFromPool_Component
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectPoolComponent*        InObjectPoolComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncRetrieveActorFromPool_Comp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncRetrieveActorFromPool_Comp* UAsyncRetrieveActorFromPool_Comp::AsyncRetrieveActorFromPool_Component(class UObject* WorldContextObject, class UObjectPoolComponent* InObjectPoolComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncRetrieveActorFromPool_Comp", "AsyncRetrieveActorFromPool_Component");

	Params::UAsyncRetrieveActorFromPool_Comp_AsyncRetrieveActorFromPool_Component_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InObjectPoolComponent = InObjectPoolComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ObjectPooler.ObjectPoolBase
// (None)

class UClass* UObjectPoolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPoolBase");

	return Clss;
}


// ObjectPoolBase ObjectPooler.Default__ObjectPoolBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPoolBase* UObjectPoolBase::GetDefaultObj()
{
	static class UObjectPoolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPoolBase*>(UObjectPoolBase::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ObjectPooler.ObjectPoolBase.OnActorReturnedFromPool__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolBase*             PoolOwner                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolBase::OnActorReturnedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "OnActorReturnedFromPool__DelegateSignature");

	Params::UObjectPoolBase_OnActorReturnedFromPool__DelegateSignature_Params Parms{};

	Parms.PoolOwner = PoolOwner;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ObjectPooler.ObjectPoolBase.OnActorRetrievedFromPool__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolBase*             PoolOwner                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolBase::OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "OnActorRetrievedFromPool__DelegateSignature");

	Params::UObjectPoolBase_OnActorRetrievedFromPool__DelegateSignature_Params Parms{};

	Parms.PoolOwner = PoolOwner;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.ObjectPoolBase.IsWarmUpComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolBase::IsWarmUpComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "IsWarmUpComplete");

	Params::UObjectPoolBase_IsWarmUpComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.IsPoolEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolBase::IsPoolEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "IsPoolEmpty");

	Params::UObjectPoolBase_IsPoolEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.GetReuseSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EObjectPoolReuseSetting ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EObjectPoolReuseSetting UObjectPoolBase::GetReuseSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "GetReuseSetting");

	Params::UObjectPoolBase_GetReuseSetting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.GetPoolSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolBase::GetPoolSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "GetPoolSize");

	Params::UObjectPoolBase_GetPoolSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.GetPoolName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UObjectPoolBase::GetPoolName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "GetPoolName");

	Params::UObjectPoolBase_GetPoolName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.GetPooledActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class APooledActor*>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class APooledActor*> UObjectPoolBase::GetPooledActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "GetPooledActors");

	Params::UObjectPoolBase_GetPooledActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.GetActorFromPool
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EObjectPoolRetrieveActorResultResults                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APooledActor* UObjectPoolBase::GetActorFromPool(enum class EObjectPoolRetrieveActorResult* Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "GetActorFromPool");

	Params::UObjectPoolBase_GetActorFromPool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Results != nullptr)
		*Results = Parms.Results;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolBase::FillPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "FillPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolBase.EmptyPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolBase::EmptyPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "EmptyPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolBase.AreAllActorsInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolBase::AreAllActorsInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "AreAllActorsInUse");

	Params::UObjectPoolBase_AreAllActorsInUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolBase.AddActorToPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APooledActor*                NewPooledActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolBase::AddActorToPool(class APooledActor* NewPooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolBase", "AddActorToPool");

	Params::UObjectPoolBase_AddActorToPool_Params Parms{};

	Parms.NewPooledActor = NewPooledActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ObjectPooler.ObjectPoolComponent
// (None)

class UClass* UObjectPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPoolComponent");

	return Clss;
}


// ObjectPoolComponent ObjectPooler.Default__ObjectPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPoolComponent* UObjectPoolComponent::GetDefaultObj()
{
	static class UObjectPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPoolComponent*>(UObjectPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ObjectPooler.ObjectPoolComponent.OnActorReturnedFromPool__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolComponent*        PoolOwner                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolComponent::OnActorReturnedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "OnActorReturnedFromPool__DelegateSignature");

	Params::UObjectPoolComponent_OnActorReturnedFromPool__DelegateSignature_Params Parms{};

	Parms.PoolOwner = PoolOwner;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ObjectPooler.ObjectPoolComponent.OnActorRetrievedFromPool__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObjectPoolComponent*        PoolOwner                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolComponent::OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "OnActorRetrievedFromPool__DelegateSignature");

	Params::UObjectPoolComponent_OnActorRetrievedFromPool__DelegateSignature_Params Parms{};

	Parms.PoolOwner = PoolOwner;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.ObjectPoolComponent.IsWarmUpComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolComponent::IsWarmUpComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "IsWarmUpComplete");

	Params::UObjectPoolComponent_IsWarmUpComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.IsPoolEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolComponent::IsPoolEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "IsPoolEmpty");

	Params::UObjectPoolComponent_IsPoolEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.GetPoolSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolComponent::GetPoolSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "GetPoolSize");

	Params::UObjectPoolComponent_GetPoolSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.GetPoolName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UObjectPoolComponent::GetPoolName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "GetPoolName");

	Params::UObjectPoolComponent_GetPoolName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.GetActorFromPool
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EObjectPoolRetrieveActorResultResults                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APooledActor*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APooledActor* UObjectPoolComponent::GetActorFromPool(enum class EObjectPoolRetrieveActorResult* Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "GetActorFromPool");

	Params::UObjectPoolComponent_GetActorFromPool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Results != nullptr)
		*Results = Parms.Results;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolComponent::FillPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "FillPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolComponent.EmptyPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolComponent::EmptyPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "EmptyPool");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolComponent.AreAllActorsInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolComponent::AreAllActorsInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "AreAllActorsInUse");

	Params::UObjectPoolComponent_AreAllActorsInUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolComponent.AddActorToPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APooledActor*                NewPooledActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolComponent::AddActorToPool(class APooledActor* NewPooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolComponent", "AddActorToPool");

	Params::UObjectPoolComponent_AddActorToPool_Params Parms{};

	Parms.NewPooledActor = NewPooledActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ObjectPooler.ObjectPoolerSettings
// (None)

class UClass* UObjectPoolerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPoolerSettings");

	return Clss;
}


// ObjectPoolerSettings ObjectPooler.Default__ObjectPoolerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPoolerSettings* UObjectPoolerSettings::GetDefaultObj()
{
	static class UObjectPoolerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPoolerSettings*>(UObjectPoolerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ObjectPooler.ObjectPoolerWorldSubsystem
// (None)

class UClass* UObjectPoolerWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPoolerWorldSubsystem");

	return Clss;
}


// ObjectPoolerWorldSubsystem ObjectPooler.Default__ObjectPoolerWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPoolerWorldSubsystem* UObjectPoolerWorldSubsystem::GetDefaultObj()
{
	static class UObjectPoolerWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPoolerWorldSubsystem*>(UObjectPoolerWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ObjectPooler.ObjectPoolerWorldSubsystem.OnObjectPoolsInitialized__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UObjectPoolerWorldSubsystem::OnObjectPoolsInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolerWorldSubsystem", "OnObjectPoolsInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ObjectPooler.ObjectPoolerWorldSubsystem.InitializeObjectPools
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolerWorldSubsystem::InitializeObjectPools()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolerWorldSubsystem", "InitializeObjectPools");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolerWorldSubsystem.DestroyObjectPools
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UObjectPoolerWorldSubsystem::DestroyObjectPools()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolerWorldSubsystem", "DestroyObjectPools");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ObjectPooler.ObjectPoolFunctionLibrary
// (None)

class UClass* UObjectPoolFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectPoolFunctionLibrary");

	return Clss;
}


// ObjectPoolFunctionLibrary ObjectPooler.Default__ObjectPoolFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectPoolFunctionLibrary* UObjectPoolFunctionLibrary::GetDefaultObj()
{
	static class UObjectPoolFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectPoolFunctionLibrary*>(UObjectPoolFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ObjectPooler.ObjectPoolFunctionLibrary.MarkActorNotInUse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APooledActor*                InPooledActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolFunctionLibrary::MarkActorNotInUse(class APooledActor* InPooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "MarkActorNotInUse");

	Params::UObjectPoolFunctionLibrary_MarkActorNotInUse_Params Parms{};

	Parms.InPooledActor = InPooledActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.MarkActorInUse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APooledActor*                InPooledActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectPoolFunctionLibrary::MarkActorInUse(class APooledActor* InPooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "MarkActorInUse");

	Params::UObjectPoolFunctionLibrary_MarkActorInUse_Params Parms{};

	Parms.InPooledActor = InPooledActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.IsActorInUse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APooledActor*                InPooledActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolFunctionLibrary::IsActorInUse(class APooledActor* InPooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "IsActorInUse");

	Params::UObjectPoolFunctionLibrary_IsActorInUse_Params Parms{};

	Parms.InPooledActor = InPooledActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetUnactivePooledActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolFunctionLibrary::GetUnactivePooledActorCount(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetUnactivePooledActorCount");

	Params::UObjectPoolFunctionLibrary_GetUnactivePooledActorCount_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetPooledActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolFunctionLibrary::GetPooledActorCount(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetPooledActorCount");

	Params::UObjectPoolFunctionLibrary_GetPooledActorCount_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetObjectPool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PoolName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectPoolBase*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObjectPoolBase* UObjectPoolFunctionLibrary::GetObjectPool(class UObject* WorldContext, class FName PoolName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetObjectPool");

	Params::UObjectPoolFunctionLibrary_GetObjectPool_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.PoolName = PoolName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetNumOfObjectPoolsInWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolFunctionLibrary::GetNumOfObjectPoolsInWorld(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetNumOfObjectPoolsInWorld");

	Params::UObjectPoolFunctionLibrary_GetNumOfObjectPoolsInWorld_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPools
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObjectPoolBase*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObjectPoolBase*> UObjectPoolFunctionLibrary::GetAllObjectPools(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetAllObjectPools");

	Params::UObjectPoolFunctionLibrary_GetAllObjectPools_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPoolClassesFromManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ManagerName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class UObjectPoolBase>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSubclassOf<class UObjectPoolBase>> UObjectPoolFunctionLibrary::GetAllObjectPoolClassesFromManager(class FName ManagerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetAllObjectPoolClassesFromManager");

	Params::UObjectPoolFunctionLibrary_GetAllObjectPoolClassesFromManager_Params Parms{};

	Parms.ManagerName = ManagerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.GetActivePooledActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UObjectPoolFunctionLibrary::GetActivePooledActorCount(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "GetActivePooledActorCount");

	Params::UObjectPoolFunctionLibrary_GetActivePooledActorCount_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.DoesObjectPoolExist
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        PoolName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UObjectPoolFunctionLibrary::DoesObjectPoolExist(class FName PoolName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "DoesObjectPoolExist");

	Params::UObjectPoolFunctionLibrary_DoesObjectPoolExist_Params Parms{};

	Parms.PoolName = PoolName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.ObjectPoolFunctionLibrary.DestroyAllObjectPools
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UObjectPoolFunctionLibrary::DestroyAllObjectPools()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectPoolFunctionLibrary", "DestroyAllObjectPools");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ObjectPooler.PooledActor
// (Actor)

class UClass* APooledActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PooledActor");

	return Clss;
}


// PooledActor ObjectPooler.Default__PooledActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APooledActor* APooledActor::GetDefaultObj()
{
	static class APooledActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APooledActor*>(APooledActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ObjectPooler.PooledActor.SetActive
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APooledActor::SetActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "SetActive");

	Params::APooledActor_SetActive_Params Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.PooledActor_EndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APooledActor::PooledActor_EndPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "PooledActor_EndPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.PooledActor_BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APooledActor::PooledActor_BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "PooledActor_BeginPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.OnLifeSpanExpired
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void APooledActor::OnLifeSpanExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "OnLifeSpanExpired");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ObjectPooler.PooledActor.NotInUseSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APooledActor*                PooledActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APooledActor::NotInUseSignature__DelegateSignature(class APooledActor* PooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "NotInUseSignature__DelegateSignature");

	Params::APooledActor_NotInUseSignature__DelegateSignature_Params Parms{};

	Parms.PooledActor = PooledActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.PooledActor.MarkNotInUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBroadcast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APooledActor::MarkNotInUse(bool bBroadcast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "MarkNotInUse");

	Params::APooledActor_MarkNotInUse_Params Parms{};

	Parms.bBroadcast = bBroadcast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.MarkInUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBroadcast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APooledActor::MarkInUse(bool bBroadcast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "MarkInUse");

	Params::APooledActor_MarkInUse_Params Parms{};

	Parms.bBroadcast = bBroadcast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.IsNotInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APooledActor::IsNotInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "IsNotInUse");

	Params::APooledActor_IsNotInUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ObjectPooler.PooledActor.IsInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APooledActor::IsInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "IsInUse");

	Params::APooledActor_IsInUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction ObjectPooler.PooledActor.InUseSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APooledActor*                PooledActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APooledActor::InUseSignature__DelegateSignature(class APooledActor* PooledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "InUseSignature__DelegateSignature");

	Params::APooledActor_InUseSignature__DelegateSignature_Params Parms{};

	Parms.PooledActor = PooledActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectPooler.PooledActor.DeactivateAllComponents
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void APooledActor::DeactivateAllComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "DeactivateAllComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ObjectPooler.PooledActor.ActivateAllComponents
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void APooledActor::ActivateAllComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PooledActor", "ActivateAllComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


