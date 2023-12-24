#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeap.InAppPurchaseComponent
// (None)

class UClass* UInAppPurchaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseComponent");

	return Clss;
}


// InAppPurchaseComponent MagicLeap.Default__InAppPurchaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseComponent* UInAppPurchaseComponent::GetDefaultObj()
{
	static class UInAppPurchaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseComponent*>(UInAppPurchaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPurchaseItemDetails        ItemDetails                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryPurchaseItemAsync(struct FPurchaseItemDetails& ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "TryPurchaseItemAsync");

	Params::UInAppPurchaseComponent_TryPurchaseItemAsync_Params Parms{};

	Parms.ItemDetails = ItemDetails;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumPages                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int32 InNumPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "TryGetPurchaseHistoryAsync");

	Params::UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params Parms{};

	Parms.InNumPages = InNumPages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              ItemIDs                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<class FString>& ItemIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "TryGetItemsDetailsAsync");

	Params::UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params Parms{};

	Parms.ItemIDs = ItemIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FPurchaseConfirmation       PurchaseConfirmations                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation& PurchaseConfirmations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "PurchaseConfirmationSuccess__DelegateSignature");

	Params::UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params Parms{};

	Parms.PurchaseConfirmations = PurchaseConfirmations;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "PurchaseConfirmationFailure__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      LogMessage                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const class FString& LogMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "InAppPurchaseLogMessage__DelegateSignature");

	Params::UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params Parms{};

	Parms.LogMessage = LogMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FPurchaseConfirmation>PurchaseHistory                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation>& PurchaseHistory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "GetPurchaseHistorySuccess__DelegateSignature");

	Params::UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params Parms{};

	Parms.PurchaseHistory = PurchaseHistory;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "GetPurchaseHistoryFailure__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FPurchaseItemDetails>ItemsDetails                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails>& ItemsDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "GetItemsDetailsSuccess__DelegateSignature");

	Params::UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params Parms{};

	Parms.ItemsDetails = ItemsDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseComponent", "GetItemsDetailsFailure__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MagicLeap.LuminApplicationLifecycleComponent
// (None)

class UClass* ULuminApplicationLifecycleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminApplicationLifecycleComponent");

	return Clss;
}


// LuminApplicationLifecycleComponent MagicLeap.Default__LuminApplicationLifecycleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminApplicationLifecycleComponent* ULuminApplicationLifecycleComponent::GetDefaultObj()
{
	static class ULuminApplicationLifecycleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminApplicationLifecycleComponent*>(ULuminApplicationLifecycleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// (None)

class UClass* UMagicLeapHeadTrackingNotificationsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapHeadTrackingNotificationsComponent");

	return Clss;
}


// MagicLeapHeadTrackingNotificationsComponent MagicLeap.Default__MagicLeapHeadTrackingNotificationsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapHeadTrackingNotificationsComponent* UMagicLeapHeadTrackingNotificationsComponent::GetDefaultObj()
{
	static class UMagicLeapHeadTrackingNotificationsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapHeadTrackingNotificationsComponent*>(UMagicLeapHeadTrackingNotificationsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeap.MagicLeapHMDFunctionLibrary
// (None)

class UClass* UMagicLeapHMDFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapHMDFunctionLibrary");

	return Clss;
}


// MagicLeapHMDFunctionLibrary MagicLeap.Default__MagicLeapHMDFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapHMDFunctionLibrary* UMagicLeapHMDFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapHMDFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapHMDFunctionLibrary*>(UMagicLeapHMDFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InStabilizationDepthActor                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetFocusActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetStabilizationDepthActor");

	Params::UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params Parms{};

	Parms.InStabilizationDepthActor = InStabilizationDepthActor;
	Parms.bSetFocusActor = bSetFocusActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InFocusActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetStabilizationActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetFocusActor");

	Params::UMagicLeapHMDFunctionLibrary_SetFocusActor_Params Parms{};

	Parms.InFocusActor = InFocusActor;
	Parms.bSetStabilizationActor = bSetStabilizationActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InBaseRotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBaseRotation(struct FRotator& InBaseRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetBaseRotation");

	Params::UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params Parms{};

	Parms.InBaseRotation = InBaseRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InBasePosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBasePosition(struct FVector& InBasePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetBasePosition");

	Params::UMagicLeapHMDFunctionLibrary_SetBasePosition_Params Parms{};

	Parms.InBasePosition = InBasePosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       InBaseOrientation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapHMDFunctionLibrary::SetBaseOrientation(struct FQuat& InBaseOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetBaseOrientation");

	Params::UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params Parms{};

	Parms.InBaseOrientation = InBaseOrientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::SetAppReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "SetAppReady");

	Params::UMagicLeapHMDFunctionLibrary_SetAppReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "IsRunningOnMagicLeapHMD");

	Params::UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapHMDFunctionLibrary::GetPlatformAPILevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetPlatformAPILevel");

	Params::UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetMLSDKVersionRevision");

	Params::UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetMLSDKVersionMinor");

	Params::UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetMLSDKVersionMajor");

	Params::UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMagicLeapHMDFunctionLibrary::GetMLSDKVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetMLSDKVersion");

	Params::UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapHMDFunctionLibrary::GetMinimumAPILevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetMinimumAPILevel");

	Params::UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapHeadTrackingState State                                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetHeadTrackingState");

	Params::UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TSet<enum class EMagicLeapHeadTrackingMapEvent>MapEvents                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents(TSet<enum class EMagicLeapHeadTrackingMapEvent>* MapEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetHeadTrackingMapEvents");

	Params::UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MapEvents != nullptr)
		*MapEvents = Parms.MapEvents;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapGraphicsClientPerformanceInfoPerformanceInfo                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHMDFunctionLibrary::GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHMDFunctionLibrary", "GetGraphicsClientPerformanceInfo");

	Params::UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PerformanceInfo != nullptr)
		*PerformanceInfo = std::move(Parms.PerformanceInfo);

	return Parms.ReturnValue;

}


// Class MagicLeap.MagicLeapMeshTrackerComponent
// (SceneComponent)

class UClass* UMagicLeapMeshTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapMeshTrackerComponent");

	return Clss;
}


// MagicLeapMeshTrackerComponent MagicLeap.Default__MagicLeapMeshTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapMeshTrackerComponent* UMagicLeapMeshTrackerComponent::GetDefaultObj()
{
	static class UMagicLeapMeshTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapMeshTrackerComponent*>(UMagicLeapMeshTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo  NewMeshInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest>RequestedMesh                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "SelectMeshBlocks");

	Params::UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params Parms{};

	Parms.NewMeshInfo = NewMeshInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedMesh != nullptr)
		*RequestedMesh = std::move(Parms.RequestedMesh);

}


// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      Confidence                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<float>& Confidence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "OnMeshTrackerUpdated__DelegateSignature");

	Params::UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params Parms{};

	Parms.ID = ID;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.Confidence = Confidence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "GetNumQueuedBlockUpdates");

	Params::UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "DisconnectMRMesh");

	Params::UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "DisconnectBlockSelector");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent*            InMRMeshPtr                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "ConnectMRMesh");

	Params::UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params Parms{};

	Parms.InMRMeshPtr = InMRMeshPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IMagicLeapMeshBlockSelectorInterface>Selector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UMagicLeapMeshTrackerComponent::ConnectBlockSelector(TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshTrackerComponent", "ConnectBlockSelector");

	Params::UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params Parms{};

	Parms.Selector = Selector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MagicLeap.MagicLeapSettings
// (None)

class UClass* UMagicLeapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapSettings");

	return Clss;
}


// MagicLeapSettings MagicLeap.Default__MagicLeapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapSettings* UMagicLeapSettings::GetDefaultObj()
{
	static class UMagicLeapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapSettings*>(UMagicLeapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// (None)

class UClass* IMagicLeapMeshBlockSelectorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapMeshBlockSelectorInterface");

	return Clss;
}


// MagicLeapMeshBlockSelectorInterface MagicLeap.Default__MagicLeapMeshBlockSelectorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMagicLeapMeshBlockSelectorInterface* IMagicLeapMeshBlockSelectorInterface::GetDefaultObj()
{
	static class IMagicLeapMeshBlockSelectorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMagicLeapMeshBlockSelectorInterface*>(IMagicLeapMeshBlockSelectorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo  NewMeshInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapMeshBlockRequest>RequestedMesh                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapMeshBlockSelectorInterface", "SelectMeshBlocks");

	Params::IMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params Parms{};

	Parms.NewMeshInfo = NewMeshInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedMesh != nullptr)
		*RequestedMesh = std::move(Parms.RequestedMesh);

}


// Class MagicLeap.MagicLeapRaycastComponent
// (None)

class UClass* UMagicLeapRaycastComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapRaycastComponent");

	return Clss;
}


// MagicLeapRaycastComponent MagicLeap.Default__MagicLeapRaycastComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapRaycastComponent* UMagicLeapRaycastComponent::GetDefaultObj()
{
	static class UMagicLeapRaycastComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapRaycastComponent*>(UMagicLeapRaycastComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapRaycastQueryParamsRequestParams                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapRaycastComponent::RequestRaycast(struct FMagicLeapRaycastQueryParams& RequestParams, FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapRaycastComponent", "RequestRaycast");

	Params::UMagicLeapRaycastComponent_RequestRaycast_Params Parms{};

	Parms.RequestParams = RequestParams;
	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FMagicLeapRaycastHitResult  HitResult                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapRaycastComponent", "RaycastResultDelegate__DelegateSignature");

	Params::UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// (None)

class UClass* UMagicLeapRaycastFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapRaycastFunctionLibrary");

	return Clss;
}


// MagicLeapRaycastFunctionLibrary MagicLeap.Default__MagicLeapRaycastFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapRaycastFunctionLibrary* UMagicLeapRaycastFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapRaycastFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapRaycastFunctionLibrary*>(UMagicLeapRaycastFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpVector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HorizontalFovDegrees                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CollideWithUnobserved                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserData                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapRaycastQueryParamsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapRaycastFunctionLibrary", "MakeRaycastQueryParams");

	Params::UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params Parms{};

	Parms.Position = Position;
	Parms.Direction = Direction;
	Parms.UpVector = UpVector;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.HorizontalFovDegrees = HorizontalFovDegrees;
	Parms.CollideWithUnobserved = CollideWithUnobserved;
	Parms.UserData = UserData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


