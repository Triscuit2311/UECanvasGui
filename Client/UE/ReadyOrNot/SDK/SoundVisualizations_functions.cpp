#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundVisualizations.SoundVisualizationStatics
// (None)

class UClass* USoundVisualizationStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundVisualizationStatics");

	return Clss;
}


// SoundVisualizationStatics SoundVisualizations.Default__SoundVisualizationStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundVisualizationStatics* USoundVisualizationStatics::GetDefaultObj()
{
	static class USoundVisualizationStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundVisualizationStatics*>(USoundVisualizationStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundVisualizations.SoundVisualizationStatics.GetAmplitude
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundWave*                  SoundWave                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeLength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AmplitudeBuckets                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutAmplitudes                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundVisualizationStatics::GetAmplitude(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 AmplitudeBuckets, TArray<float>* OutAmplitudes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundVisualizationStatics", "GetAmplitude");

	Params::USoundVisualizationStatics_GetAmplitude_Params Parms{};

	Parms.SoundWave = SoundWave;
	Parms.Channel = Channel;
	Parms.StartTime = StartTime;
	Parms.TimeLength = TimeLength;
	Parms.AmplitudeBuckets = AmplitudeBuckets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAmplitudes != nullptr)
		*OutAmplitudes = std::move(Parms.OutAmplitudes);

}


// Function SoundVisualizations.SoundVisualizationStatics.CalculateFrequencySpectrum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USoundWave*                  SoundWave                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeLength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SpectrumWidth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutSpectrum                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USoundVisualizationStatics::CalculateFrequencySpectrum(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 SpectrumWidth, TArray<float>* OutSpectrum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundVisualizationStatics", "CalculateFrequencySpectrum");

	Params::USoundVisualizationStatics_CalculateFrequencySpectrum_Params Parms{};

	Parms.SoundWave = SoundWave;
	Parms.Channel = Channel;
	Parms.StartTime = StartTime;
	Parms.TimeLength = TimeLength;
	Parms.SpectrumWidth = SpectrumWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSpectrum != nullptr)
		*OutSpectrum = std::move(Parms.OutSpectrum);

}

}


