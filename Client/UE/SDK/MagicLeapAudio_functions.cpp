#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// (None)

class UClass* UMagicLeapAudioFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapAudioFunctionLibrary");

	return Clss;
}


// MagicLeapAudioFunctionLibrary MagicLeapAudio.Default__MagicLeapAudioFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapAudioFunctionLibrary* UMagicLeapAudioFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapAudioFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapAudioFunctionLibrary*>(UMagicLeapAudioFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapAudioFunctionLibrary", "SetOnAudioJackUnpluggedDelegate");

	Params::UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Params Parms{};

	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapAudioFunctionLibrary", "SetOnAudioJackPluggedDelegate");

	Params::UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Params Parms{};

	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               IsMuted                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapAudioFunctionLibrary", "SetMicMute");

	Params::UMagicLeapAudioFunctionLibrary_SetMicMute_Params Parms{};

	Parms.IsMuted = IsMuted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapAudioFunctionLibrary::IsMicMuted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapAudioFunctionLibrary", "IsMicMuted");

	Params::UMagicLeapAudioFunctionLibrary_IsMicMuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


