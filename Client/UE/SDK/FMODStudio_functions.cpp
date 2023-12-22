#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FMODStudio.FMODAmbientSound
// (Actor)

class UClass* AFMODAmbientSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODAmbientSound");

	return Clss;
}


// FMODAmbientSound FMODStudio.Default__FMODAmbientSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AFMODAmbientSound* AFMODAmbientSound::GetDefaultObj()
{
	static class AFMODAmbientSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AFMODAmbientSound*>(AFMODAmbientSound::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODAnimNotifyPlay
// (None)

class UClass* UFMODAnimNotifyPlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODAnimNotifyPlay");

	return Clss;
}


// FMODAnimNotifyPlay FMODStudio.Default__FMODAnimNotifyPlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODAnimNotifyPlay* UFMODAnimNotifyPlay::GetDefaultObj()
{
	static class UFMODAnimNotifyPlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODAnimNotifyPlay*>(UFMODAnimNotifyPlay::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODAsset
// (None)

class UClass* UFMODAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODAsset");

	return Clss;
}


// FMODAsset FMODStudio.Default__FMODAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODAsset* UFMODAsset::GetDefaultObj()
{
	static class UFMODAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODAsset*>(UFMODAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODAudioComponent
// (SceneComponent)

class UClass* UFMODAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODAudioComponent");

	return Clss;
}


// FMODAudioComponent FMODStudio.Default__FMODAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODAudioComponent* UFMODAudioComponent::GetDefaultObj()
{
	static class UFMODAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODAudioComponent*>(UFMODAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FMODStudio.FMODAudioComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFMODAudioComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetVolume");

	Params::UFMODAudioComponent_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetTimelinePosition(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetTimelinePosition");

	Params::UFMODAudioComponent_SetTimelinePosition_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFMODEventProperty      Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetProperty(enum class EFMODEventProperty Property, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetProperty");

	Params::UFMODAudioComponent_SetProperty_Params Parms{};

	Parms.Property = Property;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetProgrammerSoundName(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetProgrammerSoundName");

	Params::UFMODAudioComponent_SetProgrammerSoundName_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetPitch(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetPitch");

	Params::UFMODAudioComponent_SetPitch_Params Parms{};

	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Paused                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetPaused(bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetPaused");

	Params::UFMODAudioComponent_SetPaused_Params Parms{};

	Parms.Paused = Paused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetParameter(class FName Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetParameter");

	Params::UFMODAudioComponent_SetParameter_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.SetEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFMODEvent*                  NewEvent                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "SetEvent");

	Params::UFMODAudioComponent_SetEvent_Params Parms{};

	Parms.NewEvent = NewEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.Release
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFMODAudioComponent::Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "Release");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFMODAudioComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.KeyOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFMODAudioComponent::KeyOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "KeyOff");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODAudioComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFMODAudioComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "IsPlaying");

	Params::UFMODAudioComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFMODAudioComponent::GetTimelinePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "GetTimelinePosition");

	Params::UFMODAudioComponent_GetTimelinePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODAudioComponent.GetProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFMODEventProperty      Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFMODAudioComponent::GetProperty(enum class EFMODEventProperty Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "GetProperty");

	Params::UFMODAudioComponent_GetProperty_Params Parms{};

	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODAudioComponent.GetParameterValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UserValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FinalValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODAudioComponent::GetParameterValue(class FName Name, float* UserValue, float* FinalValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "GetParameterValue");

	Params::UFMODAudioComponent_GetParameterValue_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserValue != nullptr)
		*UserValue = Parms.UserValue;

	if (FinalValue != nullptr)
		*FinalValue = Parms.FinalValue;

}


// Function FMODStudio.FMODAudioComponent.GetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFMODAudioComponent::GetParameter(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "GetParameter");

	Params::UFMODAudioComponent_GetParameter_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODAudioComponent.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFMODAudioComponent::GetLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODAudioComponent", "GetLength");

	Params::UFMODAudioComponent_GetLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FMODStudio.FMODBank
// (None)

class UClass* UFMODBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODBank");

	return Clss;
}


// FMODBank FMODStudio.Default__FMODBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODBank* UFMODBank::GetDefaultObj()
{
	static class UFMODBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODBank*>(UFMODBank::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODBankLookup
// (None)

class UClass* UFMODBankLookup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODBankLookup");

	return Clss;
}


// FMODBankLookup FMODStudio.Default__FMODBankLookup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODBankLookup* UFMODBankLookup::GetDefaultObj()
{
	static class UFMODBankLookup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODBankLookup*>(UFMODBankLookup::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODBlueprintStatics
// (None)

class UClass* UFMODBlueprintStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODBlueprintStatics");

	return Clss;
}


// FMODBlueprintStatics FMODStudio.Default__FMODBlueprintStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODBlueprintStatics* UFMODBlueprintStatics::GetDefaultObj()
{
	static class UFMODBlueprintStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODBlueprintStatics*>(UFMODBlueprintStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODVCA*                    Vca                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "VCASetVolume");

	Params::UFMODBlueprintStatics_VCASetVolume_Params Parms{};

	Parms.Vca = Vca;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "UnloadEventSampleData");

	Params::UFMODBlueprintStatics_UnloadEventSampleData_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*                   Bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::UnloadBankSampleData(class UFMODBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "UnloadBankSampleData");

	Params::UFMODBlueprintStatics_UnloadBankSampleData_Params Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*                   Bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::UnloadBank(class UFMODBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "UnloadBank");

	Params::UFMODBlueprintStatics_UnloadBank_Params Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      NewDriverName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::SetOutputDriverByName(const class FString& NewDriverName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "SetOutputDriverByName");

	Params::UFMODBlueprintStatics_SetOutputDriverByName_Params Parms{};

	Parms.NewDriverName = NewDriverName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              NewDriverIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::SetOutputDriverByIndex(int32 NewDriverIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "SetOutputDriverByIndex");

	Params::UFMODBlueprintStatics_SetOutputDriverByIndex_Params Parms{};

	Parms.NewDriverIndex = NewDriverIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.SetLocale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Locale                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::SetLocale(const class FString& Locale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "SetLocale");

	Params::UFMODBlueprintStatics_SetLocale_Params Parms{};

	Parms.Locale = Locale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::SetGlobalParameterByName(class FName Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "SetGlobalParameterByName");

	Params::UFMODBlueprintStatics_SetGlobalParameterByName_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoPlay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODAudioComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "PlayEventAttached");

	Params::UFMODBlueprintStatics_PlayEventAttached_Params Parms{};

	Parms.Event = Event;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.bAutoPlay = bAutoPlay;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bAutoPlay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODEventInstance          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "PlayEventAtLocation");

	Params::UFMODBlueprintStatics_PlayEventAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;
	Parms.Location = Location;
	Parms.bAutoPlay = bAutoPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoPlay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFMODEventInstance          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "PlayEvent2D");

	Params::UFMODBlueprintStatics_PlayEvent2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;
	Parms.bAutoPlay = bAutoPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.MixerSuspend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UFMODBlueprintStatics::MixerSuspend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "MixerSuspend");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.MixerResume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UFMODBlueprintStatics::MixerResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "MixerResume");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "LoadEventSampleData");

	Params::UFMODBlueprintStatics_LoadEventSampleData_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*                   Bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::LoadBankSampleData(class UFMODBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "LoadBankSampleData");

	Params::UFMODBlueprintStatics_LoadBankSampleData_Params Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*                   Bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBlocking                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadSampleData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "LoadBank");

	Params::UFMODBlueprintStatics_LoadBank_Params Parms{};

	Parms.Bank = Bank;
	Parms.bBlocking = bBlocking;
	Parms.bLoadSampleData = bLoadSampleData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*                   Bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFMODBlueprintStatics::IsBankLoaded(class UFMODBank* Bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "IsBankLoaded");

	Params::UFMODBlueprintStatics_IsBankLoaded_Params Parms{};

	Parms.Bank = Bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UFMODBlueprintStatics::GetOutputDrivers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "GetOutputDrivers");

	Params::UFMODBlueprintStatics_GetOutputDrivers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UserValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FinalValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::GetGlobalParameterValueByName(class FName Name, float* UserValue, float* FinalValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "GetGlobalParameterValueByName");

	Params::UFMODBlueprintStatics_GetGlobalParameterValueByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserValue != nullptr)
		*UserValue = Parms.UserValue;

	if (FinalValue != nullptr)
		*FinalValue = Parms.FinalValue;

}


// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFMODBlueprintStatics::GetGlobalParameterByName(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "GetGlobalParameterByName");

	Params::UFMODBlueprintStatics_GetGlobalParameterByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFMODEventInstance>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFMODEventInstance> UFMODBlueprintStatics::FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "FindEventInstances");

	Params::UFMODBlueprintStatics_FindEventInstances_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.FindEventByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODEvent*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFMODEvent* UFMODBlueprintStatics::FindEventByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "FindEventByName");

	Params::UFMODBlueprintStatics_FindEventByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFMODAsset*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFMODAsset* UFMODBlueprintStatics::FindAssetByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "FindAssetByName");

	Params::UFMODBlueprintStatics_FindAssetByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Release                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceStop");

	Params::UFMODBlueprintStatics_EventInstanceStop_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Release = Release;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetVolume");

	Params::UFMODBlueprintStatics_EventInstanceSetVolume_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, struct FTransform& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetTransform");

	Params::UFMODBlueprintStatics_EventInstanceSetTransform_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EFMODEventProperty      Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, enum class EFMODEventProperty Property, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetProperty");

	Params::UFMODBlueprintStatics_EventInstanceSetProperty_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Property = Property;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetPitch");

	Params::UFMODBlueprintStatics_EventInstanceSetPitch_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Paused                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetPaused");

	Params::UFMODBlueprintStatics_EventInstanceSetPaused_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Paused = Paused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, class FName Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceSetParameter");

	Params::UFMODBlueprintStatics_EventInstanceSetParameter_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceRelease(const struct FFMODEventInstance& EventInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceRelease");

	Params::UFMODBlueprintStatics_EventInstanceRelease_Params Parms{};

	Parms.EventInstance = EventInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstancePlay");

	Params::UFMODBlueprintStatics_EventInstancePlay_Params Parms{};

	Parms.EventInstance = EventInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceKeyOff(const struct FFMODEventInstance& EventInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceKeyOff");

	Params::UFMODBlueprintStatics_EventInstanceKeyOff_Params Parms{};

	Parms.EventInstance = EventInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFMODBlueprintStatics::EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceIsValid");

	Params::UFMODBlueprintStatics_EventInstanceIsValid_Params Parms{};

	Parms.EventInstance = EventInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UserValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FinalValue                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, class FName Name, float* UserValue, float* FinalValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceGetParameterValue");

	Params::UFMODBlueprintStatics_EventInstanceGetParameterValue_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserValue != nullptr)
		*UserValue = Parms.UserValue;

	if (FinalValue != nullptr)
		*FinalValue = Parms.FinalValue;

}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFMODBlueprintStatics::EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "EventInstanceGetParameter");

	Params::UFMODBlueprintStatics_EventInstanceGetParameter_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                    Bus                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFMOD_STUDIO_STOP_MODE  StopMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::BusStopAllEvents(class UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE StopMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "BusStopAllEvents");

	Params::UFMODBlueprintStatics_BusStopAllEvents_Params Parms{};

	Parms.Bus = Bus;
	Parms.StopMode = StopMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                    Bus                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "BusSetVolume");

	Params::UFMODBlueprintStatics_BusSetVolume_Params Parms{};

	Parms.Bus = Bus;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                    Bus                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPaused                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "BusSetPaused");

	Params::UFMODBlueprintStatics_BusSetPaused_Params Parms{};

	Parms.Bus = Bus;
	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODBlueprintStatics.BusSetMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                    Bus                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMute                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFMODBlueprintStatics::BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODBlueprintStatics", "BusSetMute");

	Params::UFMODBlueprintStatics_BusSetMute_Params Parms{};

	Parms.Bus = Bus;
	Parms.bMute = bMute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FMODStudio.FMODBus
// (None)

class UClass* UFMODBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODBus");

	return Clss;
}


// FMODBus FMODStudio.Default__FMODBus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODBus* UFMODBus::GetDefaultObj()
{
	static class UFMODBus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODBus*>(UFMODBus::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODEvent
// (None)

class UClass* UFMODEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODEvent");

	return Clss;
}


// FMODEvent FMODStudio.Default__FMODEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODEvent* UFMODEvent::GetDefaultObj()
{
	static class UFMODEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODEvent*>(UFMODEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODEventControlSection
// (None)

class UClass* UFMODEventControlSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODEventControlSection");

	return Clss;
}


// FMODEventControlSection FMODStudio.Default__FMODEventControlSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UFMODEventControlSection* UFMODEventControlSection::GetDefaultObj()
{
	static class UFMODEventControlSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODEventControlSection*>(UFMODEventControlSection::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODEventControlTrack
// (None)

class UClass* UFMODEventControlTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODEventControlTrack");

	return Clss;
}


// FMODEventControlTrack FMODStudio.Default__FMODEventControlTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UFMODEventControlTrack* UFMODEventControlTrack::GetDefaultObj()
{
	static class UFMODEventControlTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODEventControlTrack*>(UFMODEventControlTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODEventParameterTrack
// (None)

class UClass* UFMODEventParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODEventParameterTrack");

	return Clss;
}


// FMODEventParameterTrack FMODStudio.Default__FMODEventParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UFMODEventParameterTrack* UFMODEventParameterTrack::GetDefaultObj()
{
	static class UFMODEventParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODEventParameterTrack*>(UFMODEventParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODPort
// (None)

class UClass* UFMODPort::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODPort");

	return Clss;
}


// FMODPort FMODStudio.Default__FMODPort
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODPort* UFMODPort::GetDefaultObj()
{
	static class UFMODPort* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODPort*>(UFMODPort::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODSettings
// (None)

class UClass* UFMODSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODSettings");

	return Clss;
}


// FMODSettings FMODStudio.Default__FMODSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODSettings* UFMODSettings::GetDefaultObj()
{
	static class UFMODSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODSettings*>(UFMODSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODSnapshot
// (None)

class UClass* UFMODSnapshot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODSnapshot");

	return Clss;
}


// FMODSnapshot FMODStudio.Default__FMODSnapshot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODSnapshot* UFMODSnapshot::GetDefaultObj()
{
	static class UFMODSnapshot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODSnapshot*>(UFMODSnapshot::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODSnapshotReverb
// (None)

class UClass* UFMODSnapshotReverb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODSnapshotReverb");

	return Clss;
}


// FMODSnapshotReverb FMODStudio.Default__FMODSnapshotReverb
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODSnapshotReverb* UFMODSnapshotReverb::GetDefaultObj()
{
	static class UFMODSnapshotReverb* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODSnapshotReverb*>(UFMODSnapshotReverb::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODVCA
// (None)

class UClass* UFMODVCA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODVCA");

	return Clss;
}


// FMODVCA FMODStudio.Default__FMODVCA
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODVCA* UFMODVCA::GetDefaultObj()
{
	static class UFMODVCA* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODVCA*>(UFMODVCA::StaticClass()->DefaultObject);

	return Default;
}


// Class FMODStudio.FMODWorldSubsystem
// (None)

class UClass* UFMODWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODWorldSubsystem");

	return Clss;
}


// FMODWorldSubsystem FMODStudio.Default__FMODWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODWorldSubsystem* UFMODWorldSubsystem::GetDefaultObj()
{
	static class UFMODWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODWorldSubsystem*>(UFMODWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FMODStudio.FMODWorldSubsystem.OnWorldAudioStopped
// (Final, Native, Protected)
// Parameters:

void UFMODWorldSubsystem::OnWorldAudioStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODWorldSubsystem", "OnWorldAudioStopped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FMODStudio.FMODWorldSubsystem.OnAnimNotifyAudioStopped
// (Final, Native, Protected)
// Parameters:

void UFMODWorldSubsystem::OnAnimNotifyAudioStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMODWorldSubsystem", "OnAnimNotifyAudioStopped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


