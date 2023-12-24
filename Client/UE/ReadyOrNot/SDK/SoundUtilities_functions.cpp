#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundUtilities.SoundSimple
// (None)

class UClass* USoundSimple::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundSimple");

	return Clss;
}


// SoundSimple SoundUtilities.Default__SoundSimple
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundSimple* USoundSimple::GetDefaultObj()
{
	static class USoundSimple* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundSimple*>(USoundSimple::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// (None)

class UClass* USoundUtilitiesBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundUtilitiesBPFunctionLibrary");

	return Clss;
}


// SoundUtilitiesBPFunctionLibrary SoundUtilities.Default__SoundUtilitiesBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundUtilitiesBPFunctionLibrary* USoundUtilitiesBPFunctionLibrary::GetDefaultObj()
{
	static class USoundUtilitiesBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundUtilitiesBPFunctionLibrary*>(USoundUtilitiesBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InBandwidth                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(float InBandwidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetQFromBandwidth");

	Params::USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Params Parms{};

	Parms.InBandwidth = InBandwidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                              BaseMidiNote                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetMidiNote                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int32 BaseMidiNote, int32 TargetMidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetPitchScaleFromMIDIPitch");

	Params::USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params Parms{};

	Parms.BaseMidiNote = BaseMidiNote;
	Parms.TargetMidiNote = TargetMidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetMIDIPitchFromFrequency");

	Params::USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params Parms{};

	Parms.Frequency = Frequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InDomain                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InRange                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetLogFrequencyClamped");

	Params::USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Params Parms{};

	Parms.InValue = InValue;
	Parms.InDomain = InDomain;
	Parms.InRange = InRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InDomain                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InRange                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetLinearFrequencyClamped");

	Params::USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Params Parms{};

	Parms.InValue = InValue;
	Parms.InDomain = InDomain;
	Parms.InRange = InRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                              InVelocity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(int32 InVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetGainFromMidiVelocity");

	Params::USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Params Parms{};

	Parms.InVelocity = InVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InPitchSemitones                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(float InPitchSemitones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetFrequencyMultiplierFromSemitones");

	Params::USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Params Parms{};

	Parms.InPitchSemitones = InPitchSemitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int32                              MidiNote                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int32 MidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetFrequencyFromMIDIPitch");

	Params::USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params Parms{};

	Parms.MidiNote = MidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              BeatsPerMinute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BeatMultiplier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DivisionsOfWholeNote                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetBeatTempo");

	Params::USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params Parms{};

	Parms.BeatsPerMinute = BeatsPerMinute;
	Parms.BeatMultiplier = BeatMultiplier;
	Parms.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(float InQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "GetBandwidthFromQ");

	Params::USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Params Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLinear                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFloor                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(float InLinear, float InFloor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "ConvertLinearToDecibels");

	Params::USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Params Parms{};

	Parms.InLinear = InLinear;
	Parms.InFloor = InFloor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InDecibels                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(float InDecibels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundUtilitiesBPFunctionLibrary", "ConvertDecibelsToLinear");

	Params::USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Params Parms{};

	Parms.InDecibels = InDecibels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


