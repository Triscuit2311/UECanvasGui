#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotoSynth.MotoSynthPreset
// (None)

class UClass* UMotoSynthPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotoSynthPreset");

	return Clss;
}


// MotoSynthPreset MotoSynth.Default__MotoSynthPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotoSynthPreset* UMotoSynthPreset::GetDefaultObj()
{
	static class UMotoSynthPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotoSynthPreset*>(UMotoSynthPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class MotoSynth.MotoSynthSource
// (None)

class UClass* UMotoSynthSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotoSynthSource");

	return Clss;
}


// MotoSynthSource MotoSynth.Default__MotoSynthSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotoSynthSource* UMotoSynthSource::GetDefaultObj()
{
	static class UMotoSynthSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotoSynthSource*>(UMotoSynthSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MotoSynth.SynthComponentMoto
// (SceneComponent)

class UClass* USynthComponentMoto::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthComponentMoto");

	return Clss;
}


// SynthComponentMoto MotoSynth.Default__SynthComponentMoto
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthComponentMoto* USynthComponentMoto::GetDefaultObj()
{
	static class USynthComponentMoto* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthComponentMoto*>(USynthComponentMoto::StaticClass()->DefaultObject);

	return Default;
}


// Function MotoSynth.SynthComponentMoto.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotoSynthRuntimeSettings   InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USynthComponentMoto::SetSettings(struct FMotoSynthRuntimeSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMoto", "SetSettings");

	Params::USynthComponentMoto_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotoSynth.SynthComponentMoto.SetRPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRPM                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InTimeSec                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMoto", "SetRPM");

	Params::USynthComponentMoto_SetRPM_Params Parms{};

	Parms.InRPM = InRPM;
	Parms.InTimeSec = InTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotoSynth.SynthComponentMoto.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMoto::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMoto", "IsEnabled");

	Params::USynthComponentMoto_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotoSynth.SynthComponentMoto.GetRPMRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OutMinRPM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutMaxRPM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMoto", "GetRPMRange");

	Params::USynthComponentMoto_GetRPMRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMinRPM != nullptr)
		*OutMinRPM = Parms.OutMinRPM;

	if (OutMaxRPM != nullptr)
		*OutMaxRPM = Parms.OutMaxRPM;

}

}


