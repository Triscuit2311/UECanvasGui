#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// (None)

class UClass* UMagicLeapLightingTrackingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapLightingTrackingComponent");

	return Clss;
}


// MagicLeapLightingTrackingComponent MagicLeapLightEstimation.Default__MagicLeapLightingTrackingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapLightingTrackingComponent* UMagicLeapLightingTrackingComponent::GetDefaultObj()
{
	static class UMagicLeapLightingTrackingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapLightingTrackingComponent*>(UMagicLeapLightingTrackingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// (None)

class UClass* UMagicLeapLightEstimationFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapLightEstimationFunctionLibrary");

	return Clss;
}


// MagicLeapLightEstimationFunctionLibrary MagicLeapLightEstimation.Default__MagicLeapLightEstimationFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapLightEstimationFunctionLibrary* UMagicLeapLightEstimationFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapLightEstimationFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapLightEstimationFunctionLibrary*>(UMagicLeapLightEstimationFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapLightEstimationFunctionLibrary", "IsTrackerValid");

	Params::UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationColorTemperatureStateColorTemperatureState                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapLightEstimationFunctionLibrary", "GetColorTemperatureState");

	Params::UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorTemperatureState != nullptr)
		*ColorTemperatureState = std::move(Parms.ColorTemperatureState);

	return Parms.ReturnValue;

}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMagicLeapLightEstimationAmbientGlobalStateGlobalAmbientState                                               (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapLightEstimationFunctionLibrary", "GetAmbientGlobalState");

	Params::UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GlobalAmbientState != nullptr)
		*GlobalAmbientState = std::move(Parms.GlobalAmbientState);

	return Parms.ReturnValue;

}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapLightEstimationFunctionLibrary", "DestroyTracker");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapLightEstimationFunctionLibrary", "CreateTracker");

	Params::UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


