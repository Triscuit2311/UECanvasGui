#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// (None)

class UClass* UMagicLeapEyeTrackerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapEyeTrackerFunctionLibrary");

	return Clss;
}


// MagicLeapEyeTrackerFunctionLibrary MagicLeapEyeTracker.Default__MagicLeapEyeTrackerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapEyeTrackerFunctionLibrary* UMagicLeapEyeTrackerFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapEyeTrackerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapEyeTrackerFunctionLibrary*>(UMagicLeapEyeTrackerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapEyeBlinkState     BlinkState                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapEyeTrackerFunctionLibrary", "GetEyeBlinkState");

	Params::UMagicLeapEyeTrackerFunctionLibrary_GetEyeBlinkState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlinkState != nullptr)
		*BlinkState = std::move(Parms.BlinkState);

	return Parms.ReturnValue;

}


// Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EMagicLeapEyeTrackingCalibrationStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapEyeTrackerFunctionLibrary", "GetCalibrationStatus");

	Params::UMagicLeapEyeTrackerFunctionLibrary_GetCalibrationStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


