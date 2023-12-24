#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class Text2LipSync.PhrasesList
class UPhrasesList : public UObject
{
public:
	TMap<class FName, struct FLipSync_Phrase>    Data;                                              // 0x28(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPhrasesList* GetDefaultObj();

	bool LoadFromDataTable(class UDataTable* DataTable);
	void GetPhraseFromList(class FName& Key, struct FLipSync_Phrase* ReturnValue);
};

// 0x50 (0x78 - 0x28)
// Class Text2LipSync.SubtitlesCache
class USubtitlesCache : public UObject
{
public:
	TMap<class FName, struct FLipSync_Pause>     Data;                                              // 0x28(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USubtitlesCache* GetDefaultObj();

	int32 SaveToDisk(const class FString& Filename);
	int32 SaveToBinaryFile(const class FString& FullFileName);
	bool RenameAsset(const class FString& CurrentName, const class FString& NewName);
	bool RemoveAsset(class USoundBase* SoundAsset);
	int32 LoadFromDisk(const class FString& Filename);
	int32 LoadFromBinaryFile(const class FString& FullFileName);
	bool GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_Interval>* Pauses);
	void GetCachedKeys(TArray<class FString>* CachedKeys);
	bool AddAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_TimedPhrase>& PhraseData, const TArray<int32>& PauseIndexes, float PhraseDuration);
};

// 0x50 (0x78 - 0x28)
// Class Text2LipSync.SubtitlesFileSave
class USubtitlesFileSave : public USaveGame
{
public:
	TMap<class FName, struct FLipSync_Pause>     Data;                                              // 0x28(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubtitlesFileSave* GetDefaultObj();

};

// 0x758 (0x808 - 0xB0)
// Class Text2LipSync.TextLipSync
class UTextLipSync : public UActorComponent
{
public:
	TMap<enum class EPhoneme, class FName>       MorphTargetsMap;                                   // 0xB0(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLipSync_MorphPreset> CompositePhonemeTargetsMap;                        // 0x100(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLipSync_MorphPreset> EmotionTags;                                       // 0x150(0x50)(Edit, NativeAccessSpecifierPublic)
	float                                        PauseFadeTime;                                     // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhonemeFadeTime;                                   // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MorphLowerLimit;                                   // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MorphUpperLimit;                                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioMinTreshold;                                  // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PauseMultiplier;                                   // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultOffsetFromDurationEnd;                      // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayAtSentenceEnd;                                // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DelayAtComma;                                      // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnvelopeMultiplier;                                // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumPhonemesInterval;                           // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmotionBlendTime;                                  // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShortEmotionHalfDuration;                          // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRealtimeTimingCorrection;                         // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSubtitlesCacheSystem;                          // 0x1D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhrasesTableSystem;                            // 0x1D6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCompositeMorphTargets;                         // 0x1D7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELipSyncAnimType                  AnimationType;                                     // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNotifyExecuted;                                  // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayingFinished;                                 // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpeakingPause;                                   // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimelineChanged;                                 // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAudioComponent*                       Speaker;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                ControlledMesh;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            CurrentSound;                                      // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MorphTargets[0x11];                                // 0x238(0x88)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     MorphTargetRuntimeValue;                           // 0x2C0(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class FName>                            MorphTargetsList;                                  // 0x310(0x50)(Protected, NativeAccessSpecifierProtected)
	class UPhrasesList*                          PhrasesList;                                       // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USubtitlesCache*                       SubtitlesCache;                                    // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInitialized;                                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSpeaking;                                       // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSpeakingPhonemeInAudio;                         // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSubtitleWasChanged;                               // 0x373(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSubtitleWasLoadedFromCache;                       // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PauseTime;                                         // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentTime;                                       // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvelopeVolumeMultiplier;                          // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PhraseDuration;                                    // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NextPhonemeIndex;                                  // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrevPhonemeIndex;                                  // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NextNotifyIndex;                                   // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLipSync_TimedPhrase>          PhraseData;                                        // 0x398(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PauseIndexes;                                      // 0x3A8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLipSync_TimedPhrase>          PhraseNotifies;                                    // 0x3B8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        CurrentIntervalDuration;                           // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTrial;                                            // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TrialMonth;                                        // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TrialYear;                                         // 0x3D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, uint8>                     Emotion2Flag;                                      // 0x3D8(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<uint8, class FName>                     Flag2Emotion;                                      // 0x428(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<uint8, float>                           ActiveEmotions;                                    // 0x478(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B0[0x340];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTextLipSync* GetDefaultObj();

	void TextToPhonemes(class FText& Line, TArray<struct FLipSync_PhonemeInPhrase>* OutputArray, int32* VowelsCount, int32* PunctuationMarksCount);
	void StretchPhraseData(float ErrorForPunctuation, float ErrorForWord);
	void StretchDataInterval(int32 StartIndex, int32 EndIndex, float NewStartTime, float NewEndTime);
	bool StopSpeaking(bool bStopPlayingSound);
	bool SpeakByKey(class FName& PhraseKey, bool bStartPlayingSound);
	bool SpeakAgain();
	bool Speak(struct FLipSync_Phrase& Phrase, bool bStartPlayingSound);
	bool SaveLastPhraseToCache();
	int32 SaveCacheToDisk(const class FString& Filename, bool bUseBinaryFormat);
	void RestorePhraseDataFromPauses();
	bool RemovePhraseFromCache(class USoundWave* VoiceAsset);
	void OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue);
	void OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	bool LoadPhrasesSetFromDataTable(class UDataTable* Table);
	int32 LoadCacheFromDisk(const class FString& Filename, bool bUseBinaryFormat);
	bool IsSpeaking();
	bool IsInitialized();
	void InitializePhonemesArray();
	void InitializEPhonemeConvertRules();
	bool Initialize(class UAudioComponent* SpeakingAudioComp);
	float GetSpeakingTime();
	void GetListOfCachedAssets(TArray<class FString>* VoiceAssetNames);
	float GetLastPhraseDuration();
	float GetCurveValue(class FName& CurveName);
	void GetCurrentPhrase(TMap<float, enum class EPhoneme>* ReturnValue);
	class FString GetCurrentPhonemesLine();
	class FString GetActiveMorphTargets();
	void BuildPhraseData(TArray<struct FLipSync_TimedData>& Subtitles);
};

}


