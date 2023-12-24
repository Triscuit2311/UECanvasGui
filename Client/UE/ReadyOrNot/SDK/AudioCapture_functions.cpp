#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioCapture.AudioCapture
// (None)

class UClass* UAudioCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCapture");

	return Clss;
}


// AudioCapture AudioCapture.Default__AudioCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCapture* UAudioCapture::GetDefaultObj()
{
	static class UAudioCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCapture*>(UAudioCapture::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StopCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StopCapturingAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StartCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StartCapturingAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioCapture::IsCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "IsCapturingAudio");

	Params::UAudioCapture_IsCapturingAudio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioCaptureDeviceInfo     OutInfo                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "GetAudioCaptureDeviceInfo");

	Params::UAudioCapture_GetAudioCaptureDeviceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInfo != nullptr)
		*OutInfo = std::move(Parms.OutInfo);

	return Parms.ReturnValue;

}


// Class AudioCapture.AudioCaptureFunctionLibrary
// (None)

class UClass* UAudioCaptureFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureFunctionLibrary");

	return Clss;
}


// AudioCaptureFunctionLibrary AudioCapture.Default__AudioCaptureFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureFunctionLibrary* UAudioCaptureFunctionLibrary::GetDefaultObj()
{
	static class UAudioCaptureFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureFunctionLibrary*>(UAudioCaptureFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureFunctionLibrary", "CreateAudioCapture");

	Params::UAudioCaptureFunctionLibrary_CreateAudioCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioCapture.AudioCaptureComponent
// (SceneComponent)

class UClass* UAudioCaptureComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureComponent");

	return Clss;
}


// AudioCaptureComponent AudioCapture.Default__AudioCaptureComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureComponent* UAudioCaptureComponent::GetDefaultObj()
{
	static class UAudioCaptureComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureComponent*>(UAudioCaptureComponent::StaticClass()->DefaultObject);

	return Default;
}

}


