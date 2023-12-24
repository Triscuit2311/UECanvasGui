#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Text2LipSync.PhrasesList
// (None)

class UClass* UPhrasesList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhrasesList");

	return Clss;
}


// PhrasesList Text2LipSync.Default__PhrasesList
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhrasesList* UPhrasesList::GetDefaultObj()
{
	static class UPhrasesList* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhrasesList*>(UPhrasesList::StaticClass()->DefaultObject);

	return Default;
}


// Function Text2LipSync.PhrasesList.LoadFromDataTable
// (Final, Native, Public)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPhrasesList::LoadFromDataTable(class UDataTable* DataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhrasesList", "LoadFromDataTable");

	Params::UPhrasesList_LoadFromDataTable_Params Parms{};

	Parms.DataTable = DataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.PhrasesList.GetPhraseFromList
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// class FName                        Key                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLipSync_Phrase             ReturnValue                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UPhrasesList::GetPhraseFromList(class FName& Key, struct FLipSync_Phrase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhrasesList", "GetPhraseFromList");

	Params::UPhrasesList_GetPhraseFromList_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class Text2LipSync.SubtitlesCache
// (None)

class UClass* USubtitlesCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitlesCache");

	return Clss;
}


// SubtitlesCache Text2LipSync.Default__SubtitlesCache
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitlesCache* USubtitlesCache::GetDefaultObj()
{
	static class USubtitlesCache* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitlesCache*>(USubtitlesCache::StaticClass()->DefaultObject);

	return Default;
}


// Function Text2LipSync.SubtitlesCache.SaveToDisk
// (Final, Native, Public, Const)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USubtitlesCache::SaveToDisk(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "SaveToDisk");

	Params::USubtitlesCache_SaveToDisk_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.SaveToBinaryFile
// (Final, Native, Public, Const)
// Parameters:
// class FString                      FullFileName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USubtitlesCache::SaveToBinaryFile(const class FString& FullFileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "SaveToBinaryFile");

	Params::USubtitlesCache_SaveToBinaryFile_Params Parms{};

	Parms.FullFileName = FullFileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.RenameAsset
// (Final, Native, Public)
// Parameters:
// class FString                      CurrentName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitlesCache::RenameAsset(const class FString& CurrentName, const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "RenameAsset");

	Params::USubtitlesCache_RenameAsset_Params Parms{};

	Parms.CurrentName = CurrentName;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.RemoveAsset
// (Final, Native, Public)
// Parameters:
// class USoundBase*                  SoundAsset                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitlesCache::RemoveAsset(class USoundBase* SoundAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "RemoveAsset");

	Params::USubtitlesCache_RemoveAsset_Params Parms{};

	Parms.SoundAsset = SoundAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.LoadFromDisk
// (Final, Native, Public)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USubtitlesCache::LoadFromDisk(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "LoadFromDisk");

	Params::USubtitlesCache_LoadFromDisk_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.LoadFromBinaryFile
// (Final, Native, Public)
// Parameters:
// class FString                      FullFileName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USubtitlesCache::LoadFromBinaryFile(const class FString& FullFileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "LoadFromBinaryFile");

	Params::USubtitlesCache_LoadFromBinaryFile_Params Parms{};

	Parms.FullFileName = FullFileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.GetPausesForVoiceAsset
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// class USoundBase*                  SoundAsset                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLipSync_Interval>   Pauses                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitlesCache::GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_Interval>* Pauses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "GetPausesForVoiceAsset");

	Params::USubtitlesCache_GetPausesForVoiceAsset_Params Parms{};

	Parms.SoundAsset = SoundAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pauses != nullptr)
		*Pauses = std::move(Parms.Pauses);

	return Parms.ReturnValue;

}


// Function Text2LipSync.SubtitlesCache.GetCachedKeys
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FString>              CachedKeys                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubtitlesCache::GetCachedKeys(TArray<class FString>* CachedKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "GetCachedKeys");

	Params::USubtitlesCache_GetCachedKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CachedKeys != nullptr)
		*CachedKeys = std::move(Parms.CachedKeys);

}


// Function Text2LipSync.SubtitlesCache.AddAsset
// (Final, Native, Public, HasOutParams)
// Parameters:
// class USoundBase*                  SoundAsset                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLipSync_TimedPhrase>PhraseData                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      PauseIndexes                                                     (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              PhraseDuration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubtitlesCache::AddAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_TimedPhrase>& PhraseData, const TArray<int32>& PauseIndexes, float PhraseDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitlesCache", "AddAsset");

	Params::USubtitlesCache_AddAsset_Params Parms{};

	Parms.SoundAsset = SoundAsset;
	Parms.PhraseData = PhraseData;
	Parms.PauseIndexes = PauseIndexes;
	Parms.PhraseDuration = PhraseDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Text2LipSync.SubtitlesFileSave
// (None)

class UClass* USubtitlesFileSave::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitlesFileSave");

	return Clss;
}


// SubtitlesFileSave Text2LipSync.Default__SubtitlesFileSave
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitlesFileSave* USubtitlesFileSave::GetDefaultObj()
{
	static class USubtitlesFileSave* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitlesFileSave*>(USubtitlesFileSave::StaticClass()->DefaultObject);

	return Default;
}


// Class Text2LipSync.TextLipSync
// (None)

class UClass* UTextLipSync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextLipSync");

	return Clss;
}


// TextLipSync Text2LipSync.Default__TextLipSync
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextLipSync* UTextLipSync::GetDefaultObj()
{
	static class UTextLipSync* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextLipSync*>(UTextLipSync::StaticClass()->DefaultObject);

	return Default;
}


// Function Text2LipSync.TextLipSync.TextToPhonemes
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        Line                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLipSync_PhonemeInPhrase>OutputArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              VowelsCount                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PunctuationMarksCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLipSync::TextToPhonemes(class FText& Line, TArray<struct FLipSync_PhonemeInPhrase>* OutputArray, int32* VowelsCount, int32* PunctuationMarksCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "TextToPhonemes");

	Params::UTextLipSync_TextToPhonemes_Params Parms{};

	Parms.Line = Line;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputArray != nullptr)
		*OutputArray = std::move(Parms.OutputArray);

	if (VowelsCount != nullptr)
		*VowelsCount = Parms.VowelsCount;

	if (PunctuationMarksCount != nullptr)
		*PunctuationMarksCount = Parms.PunctuationMarksCount;

}


// Function Text2LipSync.TextLipSync.StretchPhraseData
// (Final, Native, Protected)
// Parameters:
// float                              ErrorForPunctuation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ErrorForWord                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLipSync::StretchPhraseData(float ErrorForPunctuation, float ErrorForWord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "StretchPhraseData");

	Params::UTextLipSync_StretchPhraseData_Params Parms{};

	Parms.ErrorForPunctuation = ErrorForPunctuation;
	Parms.ErrorForWord = ErrorForWord;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.StretchDataInterval
// (Final, Native, Protected)
// Parameters:
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewStartTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewEndTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLipSync::StretchDataInterval(int32 StartIndex, int32 EndIndex, float NewStartTime, float NewEndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "StretchDataInterval");

	Params::UTextLipSync_StretchDataInterval_Params Parms{};

	Parms.StartIndex = StartIndex;
	Parms.EndIndex = EndIndex;
	Parms.NewStartTime = NewStartTime;
	Parms.NewEndTime = NewEndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.StopSpeaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStopPlayingSound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::StopSpeaking(bool bStopPlayingSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "StopSpeaking");

	Params::UTextLipSync_StopSpeaking_Params Parms{};

	Parms.bStopPlayingSound = bStopPlayingSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.SpeakByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PhraseKey                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStartPlayingSound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::SpeakByKey(class FName& PhraseKey, bool bStartPlayingSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "SpeakByKey");

	Params::UTextLipSync_SpeakByKey_Params Parms{};

	Parms.PhraseKey = PhraseKey;
	Parms.bStartPlayingSound = bStartPlayingSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.SpeakAgain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::SpeakAgain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "SpeakAgain");

	Params::UTextLipSync_SpeakAgain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.Speak
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLipSync_Phrase             Phrase                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bStartPlayingSound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::Speak(struct FLipSync_Phrase& Phrase, bool bStartPlayingSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "Speak");

	Params::UTextLipSync_Speak_Params Parms{};

	Parms.Phrase = Phrase;
	Parms.bStartPlayingSound = bStartPlayingSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.SaveLastPhraseToCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::SaveLastPhraseToCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "SaveLastPhraseToCache");

	Params::UTextLipSync_SaveLastPhraseToCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.SaveCacheToDisk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseBinaryFormat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTextLipSync::SaveCacheToDisk(const class FString& Filename, bool bUseBinaryFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "SaveCacheToDisk");

	Params::UTextLipSync_SaveCacheToDisk_Params Parms{};

	Parms.Filename = Filename;
	Parms.bUseBinaryFormat = bUseBinaryFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.RestorePhraseDataFromPauses
// (Final, Native, Protected)
// Parameters:

void UTextLipSync::RestorePhraseDataFromPauses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "RestorePhraseDataFromPauses");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.RemovePhraseFromCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  VoiceAsset                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::RemovePhraseFromCache(class USoundWave* VoiceAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "RemovePhraseFromCache");

	Params::UTextLipSync_RemovePhraseFromCache_Params Parms{};

	Parms.VoiceAsset = VoiceAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.OnSpeaker_AudioSingleEnvelopeValue
// (Final, Native, Protected)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EnvelopeValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLipSync::OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "OnSpeaker_AudioSingleEnvelopeValue");

	Params::UTextLipSync_OnSpeaker_AudioSingleEnvelopeValue_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.EnvelopeValue = EnvelopeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.OnSpeaker_AudioPlaybackPercent
// (Final, Native, Protected)
// Parameters:
// class USoundWave*                  PlayingSoundWave                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackPercent                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLipSync::OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "OnSpeaker_AudioPlaybackPercent");

	Params::UTextLipSync_OnSpeaker_AudioPlaybackPercent_Params Parms{};

	Parms.PlayingSoundWave = PlayingSoundWave;
	Parms.PlaybackPercent = PlaybackPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.LoadPhrasesSetFromDataTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  Table                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::LoadPhrasesSetFromDataTable(class UDataTable* Table)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "LoadPhrasesSetFromDataTable");

	Params::UTextLipSync_LoadPhrasesSetFromDataTable_Params Parms{};

	Parms.Table = Table;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.LoadCacheFromDisk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseBinaryFormat                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTextLipSync::LoadCacheFromDisk(const class FString& Filename, bool bUseBinaryFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "LoadCacheFromDisk");

	Params::UTextLipSync_LoadCacheFromDisk_Params Parms{};

	Parms.Filename = Filename;
	Parms.bUseBinaryFormat = bUseBinaryFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.IsSpeaking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::IsSpeaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "IsSpeaking");

	Params::UTextLipSync_IsSpeaking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "IsInitialized");

	Params::UTextLipSync_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.InitializePhonemesArray
// (Final, Native, Protected)
// Parameters:

void UTextLipSync::InitializePhonemesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "InitializePhonemesArray");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.InitializEPhonemeConvertRules
// (Final, Native, Protected)
// Parameters:

void UTextLipSync::InitializEPhonemeConvertRules()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "InitializEPhonemeConvertRules");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Text2LipSync.TextLipSync.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*             SpeakingAudioComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTextLipSync::Initialize(class UAudioComponent* SpeakingAudioComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "Initialize");

	Params::UTextLipSync_Initialize_Params Parms{};

	Parms.SpeakingAudioComp = SpeakingAudioComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetSpeakingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTextLipSync::GetSpeakingTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetSpeakingTime");

	Params::UTextLipSync_GetSpeakingTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetListOfCachedAssets
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              VoiceAssetNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTextLipSync::GetListOfCachedAssets(TArray<class FString>* VoiceAssetNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetListOfCachedAssets");

	Params::UTextLipSync_GetListOfCachedAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VoiceAssetNames != nullptr)
		*VoiceAssetNames = std::move(Parms.VoiceAssetNames);

}


// Function Text2LipSync.TextLipSync.GetLastPhraseDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTextLipSync::GetLastPhraseDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetLastPhraseDuration");

	Params::UTextLipSync_GetLastPhraseDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetCurveValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        CurveName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTextLipSync::GetCurveValue(class FName& CurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetCurveValue");

	Params::UTextLipSync_GetCurveValue_Params Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetCurrentPhrase
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<float, enum class EPhoneme>   ReturnValue                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UTextLipSync::GetCurrentPhrase(TMap<float, enum class EPhoneme>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetCurrentPhrase");

	Params::UTextLipSync_GetCurrentPhrase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetCurrentPhonemesLine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTextLipSync::GetCurrentPhonemesLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetCurrentPhonemesLine");

	Params::UTextLipSync_GetCurrentPhonemesLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.GetActiveMorphTargets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTextLipSync::GetActiveMorphTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "GetActiveMorphTargets");

	Params::UTextLipSync_GetActiveMorphTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text2LipSync.TextLipSync.BuildPhraseData
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<struct FLipSync_TimedData>  Subtitles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTextLipSync::BuildPhraseData(TArray<struct FLipSync_TimedData>& Subtitles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLipSync", "BuildPhraseData");

	Params::UTextLipSync_BuildPhraseData_Params Parms{};

	Parms.Subtitles = Subtitles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


