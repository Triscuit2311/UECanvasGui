#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapARPin.MagicLeapARPinComponent
// (SceneComponent)

class UClass* UMagicLeapARPinComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinComponent");

	return Clss;
}


// MagicLeapARPinComponent MagicLeapARPin.Default__MagicLeapARPinComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapARPinComponent* UMagicLeapARPinComponent::GetDefaultObj()
{
	static class UMagicLeapARPinComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapARPinComponent*>(UMagicLeapARPinComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMagicLeapARPinComponent::UnPin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "UnPin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMagicLeapARPinSaveGame>InPinDataClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutPinDataValid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> InPinDataClass, bool* OutPinDataValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "TryGetPinData");

	Params::UMagicLeapARPinComponent_TryGetPinData_Params Parms{};

	Parms.InPinDataClass = InPinDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPinDataValid != nullptr)
		*OutPinDataValid = Parms.OutPinDataValid;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinToRestoredOrSyncedID");

	Params::UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PinId                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinToID(struct FGuid& PinId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinToID");

	Params::UMagicLeapARPinComponent_PinToID_Params Parms{};

	Parms.PinId = PinId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMagicLeapARPinComponent::PinToBestFit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinToBestFit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinSceneComponent");

	Params::UMagicLeapARPinComponent_PinSceneComponent_Params Parms{};

	Parms.ComponentToPin = ComponentToPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinRestoredOrSynced");

	Params::UMagicLeapARPinComponent_PinRestoredOrSynced_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorToPin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PinActor");

	Params::UMagicLeapARPinComponent_PinActor_Params Parms{};

	Parms.ActorToPin = ActorToPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bRestoredOrSynced                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PersistentEntityPinned__DelegateSignature");

	Params::UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params Parms{};

	Parms.bRestoredOrSynced = bRestoredOrSynced;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "PersistentEntityPinLost__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bDataRestored                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature");

	Params::UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params Parms{};

	Parms.bDataRestored = bDataRestored;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::IsPinned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "IsPinned");

	Params::UMagicLeapARPinComponent_IsPinned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMagicLeapARPinState        State                                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "GetPinState");

	Params::UMagicLeapARPinComponent_GetPinState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       PinId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "GetPinnedPinID");

	Params::UMagicLeapARPinComponent_GetPinnedPinID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PinId != nullptr)
		*PinId = std::move(Parms.PinId);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMagicLeapARPinSaveGame>PinDataClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "GetPinData");

	Params::UMagicLeapARPinComponent_GetPinData_Params Parms{};

	Parms.PinDataClass = PinDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "AttemptPinDataRestorationAsync");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinComponent", "AttemptPinDataRestoration");

	Params::UMagicLeapARPinComponent_AttemptPinDataRestoration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// (None)

class UClass* UMagicLeapARPinFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinFunctionLibrary");

	return Clss;
}


// MagicLeapARPinFunctionLibrary MagicLeapARPin.Default__MagicLeapARPinFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapARPinFunctionLibrary* UMagicLeapARPinFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapARPinFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapARPinFunctionLibrary*>(UMagicLeapARPinFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "UnBindToOnMagicLeapContentBindingFoundDelegate");

	Params::UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "UnBindToOnMagicLeapARPinUpdatedDelegate");

	Params::UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery        InGlobalFilter                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(struct FMagicLeapARPinQuery& InGlobalFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "SetGlobalQueryFilter");

	Params::UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params Parms{};

	Parms.InGlobalFilter = InGlobalFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "SetContentBindingSaveGameUserIndex");

	Params::UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapARPinQuery        Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGuid>               Pins                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "QueryARPins");

	Params::UMagicLeapARPinFunctionLibrary_QueryARPins_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pins != nullptr)
		*Pins = std::move(Parms.Pins);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PinIdString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ARPinId                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "ParseStringToARPinId");

	Params::UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params Parms{};

	Parms.PinIdString = PinIdString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ARPinId != nullptr)
		*ARPinId = std::move(Parms.ARPinId);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "IsTrackerValid");

	Params::UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetNumAvailableARPins");

	Params::UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Count != nullptr)
		*Count = Parms.Count;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinQuery        CurrentGlobalFilter                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetGlobalQueryFilter");

	Params::UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurrentGlobalFilter != nullptr)
		*CurrentGlobalFilter = std::move(Parms.CurrentGlobalFilter);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetContentBindingSaveGameUserIndex");

	Params::UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     SearchPoint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       PinId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(struct FVector& SearchPoint, struct FGuid* PinId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetClosestARPin");

	Params::UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params Parms{};

	Parms.SearchPoint = SearchPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PinId != nullptr)
		*PinId = std::move(Parms.PinId);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumRequested                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGuid>               Pins                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetAvailableARPins");

	Params::UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params Parms{};

	Parms.NumRequested = NumRequested;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pins != nullptr)
		*Pins = std::move(Parms.Pins);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinState        State                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(struct FMagicLeapARPinState& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetARPinStateToString");

	Params::UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PinId                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapARPinState        State                                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(struct FGuid& PinId, struct FMagicLeapARPinState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetARPinState");

	Params::UMagicLeapARPinFunctionLibrary_GetARPinState_Params Parms{};

	Parms.PinId = PinId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PinId                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               PinFoundInEnvironment                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetARPinPositionAndOrientation_TrackingSpace");

	Params::UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params Parms{};

	Parms.PinId = PinId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = Parms.PinFoundInEnvironment;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PinId                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               PinFoundInEnvironment                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "GetARPinPositionAndOrientation");

	Params::UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params Parms{};

	Parms.PinId = PinId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = Parms.PinFoundInEnvironment;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "DestroyTracker");

	Params::UMagicLeapARPinFunctionLibrary_DestroyTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapPassableWorldErrorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "CreateTracker");

	Params::UMagicLeapARPinFunctionLibrary_CreateTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "BindToOnMagicLeapContentBindingFoundDelegate");

	Params::UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "BindToOnMagicLeapARPinUpdatedDelegate");

	Params::UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGuid                       ARPinId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(struct FGuid& ARPinId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinFunctionLibrary", "ARPinIdToString");

	Params::UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params Parms{};

	Parms.ARPinId = ARPinId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// (Actor)

class UClass* AMagicLeapARPinInfoActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinInfoActorBase");

	return Clss;
}


// MagicLeapARPinInfoActorBase MagicLeapARPin.Default__MagicLeapARPinInfoActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AMagicLeapARPinInfoActorBase* AMagicLeapARPinInfoActorBase::GetDefaultObj()
{
	static class AMagicLeapARPinInfoActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagicLeapARPinInfoActorBase*>(AMagicLeapARPinInfoActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinInfoActorBase", "OnUpdateARPinState");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MagicLeapARPin.MagicLeapARPinRenderer
// (Actor)

class UClass* AMagicLeapARPinRenderer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinRenderer");

	return Clss;
}


// MagicLeapARPinRenderer MagicLeapARPin.Default__MagicLeapARPinRenderer
// (Public, ClassDefaultObject, ArchetypeObject)

class AMagicLeapARPinRenderer* AMagicLeapARPinRenderer::GetDefaultObj()
{
	static class AMagicLeapARPinRenderer* Default = nullptr;

	if (!Default)
		Default = static_cast<AMagicLeapARPinRenderer*>(AMagicLeapARPinRenderer::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                               InVisibilityOverride                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapARPinRenderer", "SetVisibilityOverride");

	Params::AMagicLeapARPinRenderer_SetVisibilityOverride_Params Parms{};

	Parms.InVisibilityOverride = InVisibilityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MagicLeapARPin.MagicLeapARPinSettings
// (None)

class UClass* UMagicLeapARPinSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinSettings");

	return Clss;
}


// MagicLeapARPinSettings MagicLeapARPin.Default__MagicLeapARPinSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapARPinSettings* UMagicLeapARPinSettings::GetDefaultObj()
{
	static class UMagicLeapARPinSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapARPinSettings*>(UMagicLeapARPinSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// (None)

class UClass* UMagicLeapARPinSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinSaveGame");

	return Clss;
}


// MagicLeapARPinSaveGame MagicLeapARPin.Default__MagicLeapARPinSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapARPinSaveGame* UMagicLeapARPinSaveGame::GetDefaultObj()
{
	static class UMagicLeapARPinSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapARPinSaveGame*>(UMagicLeapARPinSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapARPin.MagicLeapARPinContentBindings
// (None)

class UClass* UMagicLeapARPinContentBindings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapARPinContentBindings");

	return Clss;
}


// MagicLeapARPinContentBindings MagicLeapARPin.Default__MagicLeapARPinContentBindings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapARPinContentBindings* UMagicLeapARPinContentBindings::GetDefaultObj()
{
	static class UMagicLeapARPinContentBindings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapARPinContentBindings*>(UMagicLeapARPinContentBindings::StaticClass()->DefaultObject);

	return Default;
}

}


