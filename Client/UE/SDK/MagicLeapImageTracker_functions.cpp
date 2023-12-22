#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// (SceneComponent)

class UClass* UMagicLeapImageTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapImageTrackerComponent");

	return Clss;
}


// MagicLeapImageTrackerComponent MagicLeapImageTracker.Default__MagicLeapImageTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapImageTrackerComponent* UMagicLeapImageTrackerComponent::GetDefaultObj()
{
	static class UMagicLeapImageTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapImageTrackerComponent*>(UMagicLeapImageTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  ImageTarget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerComponent", "SetTargetAsync");

	Params::UMagicLeapImageTrackerComponent_SetTargetAsync_Params Parms{};

	Parms.ImageTarget = ImageTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerComponent", "RemoveTargetAsync");

	Params::UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// (None)

class UClass* UMagicLeapImageTrackerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapImageTrackerFunctionLibrary");

	return Clss;
}


// MagicLeapImageTrackerFunctionLibrary MagicLeapImageTracker.Default__MagicLeapImageTrackerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapImageTrackerFunctionLibrary* UMagicLeapImageTrackerFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapImageTrackerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapImageTrackerFunctionLibrary*>(UMagicLeapImageTrackerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxSimultaneousTargets                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerFunctionLibrary", "SetMaxSimultaneousTargets");

	Params::UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params Parms{};

	Parms.MaxSimultaneousTargets = MaxSimultaneousTargets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerFunctionLibrary", "IsImageTrackingEnabled");

	Params::UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerFunctionLibrary", "GetMaxSimultaneousTargets");

	Params::UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapImageTrackerFunctionLibrary", "EnableImageTracking");

	Params::UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


