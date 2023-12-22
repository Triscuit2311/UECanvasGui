#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapAR.LuminARSessionFunctionLibrary
// (None)

class UClass* ULuminARSessionFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARSessionFunctionLibrary");

	return Clss;
}


// LuminARSessionFunctionLibrary MagicLeapAR.Default__LuminARSessionFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARSessionFunctionLibrary* ULuminARSessionFunctionLibrary::GetDefaultObj()
{
	static class ULuminARSessionFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARSessionFunctionLibrary*>(ULuminARSessionFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ULuminARSessionConfig*       Configuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULuminARSessionFunctionLibrary::StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARSessionFunctionLibrary", "StartLuminARSession");

	Params::ULuminARSessionFunctionLibrary_StartLuminARSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Configuration = Configuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// (None)

class UClass* ULuminARFrameFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARFrameFunctionLibrary");

	return Clss;
}


// LuminARFrameFunctionLibrary MagicLeapAR.Default__LuminARFrameFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARFrameFunctionLibrary* ULuminARFrameFunctionLibrary::GetDefaultObj()
{
	static class ULuminARFrameFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARFrameFunctionLibrary*>(ULuminARFrameFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<enum class ELuminARLineTraceChannel>TraceChannels                                                    (Parm, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>      OutHitResults                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULuminARFrameFunctionLibrary::LuminARLineTrace(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARFrameFunctionLibrary", "LuminARLineTrace");

	Params::ULuminARFrameFunctionLibrary_LuminARLineTrace_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;
	Parms.TraceChannels = TraceChannels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHitResults != nullptr)
		*OutHitResults = std::move(Parms.OutHitResults);

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ELuminARTrackingState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARFrameFunctionLibrary", "GetTrackingState");

	Params::ULuminARFrameFunctionLibrary_GetTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// (None)

class UClass* ULuminARImageTrackingFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARImageTrackingFunctionLibrary");

	return Clss;
}


// LuminARImageTrackingFunctionLibrary MagicLeapAR.Default__LuminARImageTrackingFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARImageTrackingFunctionLibrary* ULuminARImageTrackingFunctionLibrary::GetDefaultObj()
{
	static class ULuminARImageTrackingFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARImageTrackingFunctionLibrary*>(ULuminARImageTrackingFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  CandidateTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FriendlyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PhysicalWidth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseUnreliablePose                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImageIsStationary                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapImageTargetOrientationInAxisOrientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, enum class EMagicLeapImageTargetOrientation InAxisOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARImageTrackingFunctionLibrary", "AddLuminRuntimeCandidateImageEx");

	Params::ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImageEx_Params Parms{};

	Parms.SessionConfig = SessionConfig;
	Parms.CandidateTexture = CandidateTexture;
	Parms.FriendlyName = FriendlyName;
	Parms.PhysicalWidth = PhysicalWidth;
	Parms.bUseUnreliablePose = bUseUnreliablePose;
	Parms.bImageIsStationary = bImageIsStationary;
	Parms.InAxisOrientation = InAxisOrientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  CandidateTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FriendlyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PhysicalWidth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseUnreliablePose                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImageIsStationary                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULuminARCandidateImage*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARImageTrackingFunctionLibrary", "AddLuminRuntimeCandidateImage");

	Params::ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Params Parms{};

	Parms.SessionConfig = SessionConfig;
	Parms.CandidateTexture = CandidateTexture;
	Parms.FriendlyName = FriendlyName;
	Parms.PhysicalWidth = PhysicalWidth;
	Parms.bUseUnreliablePose = bUseUnreliablePose;
	Parms.bImageIsStationary = bImageIsStationary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapAR.LuminAROrigin
// (Actor)

class UClass* ALuminAROrigin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminAROrigin");

	return Clss;
}


// LuminAROrigin MagicLeapAR.Default__LuminAROrigin
// (Public, ClassDefaultObject, ArchetypeObject)

class ALuminAROrigin* ALuminAROrigin::GetDefaultObj()
{
	static class ALuminAROrigin* Default = nullptr;

	if (!Default)
		Default = static_cast<ALuminAROrigin*>(ALuminAROrigin::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapAR.LuminARSessionConfig
// (None)

class UClass* ULuminARSessionConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARSessionConfig");

	return Clss;
}


// LuminARSessionConfig MagicLeapAR.Default__LuminARSessionConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARSessionConfig* ULuminARSessionConfig::GetDefaultObj()
{
	static class ULuminARSessionConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARSessionConfig*>(ULuminARSessionConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapAR.LuminARLightEstimate
// (None)

class UClass* ULuminARLightEstimate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARLightEstimate");

	return Clss;
}


// LuminARLightEstimate MagicLeapAR.Default__LuminARLightEstimate
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARLightEstimate* ULuminARLightEstimate::GetDefaultObj()
{
	static class ULuminARLightEstimate* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARLightEstimate*>(ULuminARLightEstimate::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARLightEstimate", "GetAmbientIntensityNits");

	Params::ULuminARLightEstimate_GetAmbientIntensityNits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MagicLeapAR.LuminARCandidateImage
// (None)

class UClass* ULuminARCandidateImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LuminARCandidateImage");

	return Clss;
}


// LuminARCandidateImage MagicLeapAR.Default__LuminARCandidateImage
// (Public, ClassDefaultObject, ArchetypeObject)

class ULuminARCandidateImage* ULuminARCandidateImage::GetDefaultObj()
{
	static class ULuminARCandidateImage* Default = nullptr;

	if (!Default)
		Default = static_cast<ULuminARCandidateImage*>(ULuminARCandidateImage::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULuminARCandidateImage::GetUseUnreliablePose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARCandidateImage", "GetUseUnreliablePose");

	Params::ULuminARCandidateImage_GetUseUnreliablePose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULuminARCandidateImage::GetImageIsStationary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARCandidateImage", "GetImageIsStationary");

	Params::ULuminARCandidateImage_GetImageIsStationary_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMagicLeapImageTargetOrientationReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapImageTargetOrientation ULuminARCandidateImage::GetAxisOrientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LuminARCandidateImage", "GetAxisOrientation");

	Params::ULuminARCandidateImage_GetAxisOrientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


