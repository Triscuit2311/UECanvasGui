#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// (None)

class UClass* UMagicLeapControllerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapControllerFunctionLibrary");

	return Clss;
}


// MagicLeapControllerFunctionLibrary MagicLeapController.Default__MagicLeapControllerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapControllerFunctionLibrary* UMagicLeapControllerFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapControllerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapControllerFunctionLibrary*>(UMagicLeapControllerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(enum class EControllerHand Hand, class FName MotionSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "SetMotionSourceForHand");

	Params::UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params Parms{};

	Parms.Hand = Hand;
	Parms.MotionSource = MotionSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapControllerTrackingModeTrackingMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "SetControllerTrackingMode");

	Params::UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params Parms{};

	Parms.TrackingMode = TrackingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDPatternLEDPattern                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDColorLEDColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationInSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(class FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayLEDPattern");

	Params::UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params Parms{};

	Parms.MotionSource = MotionSource;
	Parms.LEDPattern = LEDPattern;
	Parms.LEDColor = LEDColor;
	Parms.DurationInSec = DurationInSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDEffectLEDEffect                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDSpeedLEDSpeed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDPatternLEDPattern                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDColorLEDColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationInSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(class FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayLEDEffect");

	Params::UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params Parms{};

	Parms.MotionSource = MotionSource;
	Parms.LEDEffect = LEDEffect;
	Parms.LEDSpeed = LEDSpeed;
	Parms.LEDPattern = LEDPattern;
	Parms.LEDColor = LEDColor;
	Parms.DurationInSec = DurationInSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerHapticPatternHapticPattern                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerHapticIntensityIntensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(class FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayHapticPattern");

	Params::UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params Parms{};

	Parms.MotionSource = MotionSource;
	Parms.HapticPattern = HapticPattern;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDEffectLEDEffect                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDSpeedLEDSpeed                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDPatternLEDPattern                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDColorLEDColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationInSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayControllerLEDEffect");

	Params::UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params Parms{};

	Parms.Hand = Hand;
	Parms.LEDEffect = LEDEffect;
	Parms.LEDSpeed = LEDSpeed;
	Parms.LEDPattern = LEDPattern;
	Parms.LEDColor = LEDColor;
	Parms.DurationInSec = DurationInSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDPatternLEDPattern                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerLEDColorLEDColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationInSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayControllerLED");

	Params::UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params Parms{};

	Parms.Hand = Hand;
	Parms.LEDPattern = LEDPattern;
	Parms.LEDColor = LEDColor;
	Parms.DurationInSec = DurationInSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerHapticPatternHapticPattern                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerHapticIntensityIntensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "PlayControllerHapticFeedback");

	Params::UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params Parms{};

	Parms.Hand = Hand;
	Parms.HapticPattern = HapticPattern;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "MaxSupportedMagicLeapControllers");

	Params::UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(class FName MotionSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "IsMLControllerConnected");

	Params::UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params Parms{};

	Parms.MotionSource = MotionSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "InvertControllerMapping");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetMotionSourceForHand");

	Params::UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetMLControllerType");

	Params::UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(class FName MotionSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetHandForMotionSource");

	Params::UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params Parms{};

	Parms.MotionSource = MotionSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapControllerTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(class FName MotionSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetControllerType");

	Params::UMagicLeapControllerFunctionLibrary_GetControllerType_Params Parms{};

	Parms.MotionSource = MotionSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapControllerTrackingModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetControllerTrackingMode");

	Params::UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ControllerIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int32 ControllerIndex, enum class EControllerHand* Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapControllerFunctionLibrary", "GetControllerMapping");

	Params::UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params Parms{};

	Parms.ControllerIndex = ControllerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Hand != nullptr)
		*Hand = Parms.Hand;

	return Parms.ReturnValue;

}


// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// (None)

class UClass* UMagicLeapTouchpadGesturesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapTouchpadGesturesComponent");

	return Clss;
}


// MagicLeapTouchpadGesturesComponent MagicLeapController.Default__MagicLeapTouchpadGesturesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapTouchpadGesturesComponent* UMagicLeapTouchpadGesturesComponent::GetDefaultObj()
{
	static class UMagicLeapTouchpadGesturesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapTouchpadGesturesComponent*>(UMagicLeapTouchpadGesturesComponent::StaticClass()->DefaultObject);

	return Default;
}

}


