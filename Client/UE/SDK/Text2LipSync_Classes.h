#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Text2LipSync.TextLipSync
	 * Size -> 0x0758 (FullSize[0x0808] - InheritedSize[0x00B0])
	 */
	class UTextLipSync : public UActorComponent
	{
	public:
		TMap<EPhoneme, class FName>                                  MorphTargetsMap;                                         // 0x00B0(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FName, struct FLipSync_MorphPreset>               CompositePhonemeTargetsMap;                              // 0x0100(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FName, struct FLipSync_MorphPreset>               EmotionTags;                                             // 0x0150(0x0050) Edit, NativeAccessSpecifierPublic
		float                                                        PauseFadeTime;                                           // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PhonemeFadeTime;                                         // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MorphLowerLimit;                                         // 0x01A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MorphUpperLimit;                                         // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        AudioMinTreshold;                                        // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        PauseMultiplier;                                         // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DefaultOffsetFromDurationEnd;                            // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DelayAtSentenceEnd;                                      // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DelayAtComma;                                            // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EnvelopeMultiplier;                                      // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MinimumPhonemesInterval;                                 // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        EmotionBlendTime;                                        // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        ShortEmotionHalfDuration;                                // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRealtimeTimingCorrection;                               // 0x01D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseSubtitlesCacheSystem;                                // 0x01D5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUsePhrasesTableSystem;                                  // 0x01D6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseCompositeMorphTargets;                               // 0x01D7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELipSyncAnimType                                             AnimationType;                                           // 0x01D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnNotifyExecuted;                                        // 0x01E0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x01E1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnPlayingFinished;                                       // 0x01F0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x01F1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnSpeakingPause;                                         // 0x0200(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0201(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnTimelineChanged;                                       // 0x0210(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0211(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UAudioComponent*                                       Speaker;                                                 // 0x0220(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                                ControlledMesh;                                          // 0x0228(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                            CurrentSound;                                            // 0x0230(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                  MorphTargets[0x11];                                      // 0x0238(0x0088) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, float>                                     MorphTargetRuntimeValue;                                 // 0x02C0(0x0050) Protected, NativeAccessSpecifierProtected
		TSet<class FName>                                            MorphTargetsList;                                        // 0x0310(0x0050) Protected, NativeAccessSpecifierProtected
		class UPhrasesList*                                          PhrasesList;                                             // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USubtitlesCache*                                       SubtitlesCache;                                          // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bIsInitialized;                                          // 0x0370(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bIsSpeaking;                                             // 0x0371(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bIsSpeakingPhonemeInAudio;                               // 0x0372(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bSubtitleWasChanged;                                     // 0x0373(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bSubtitleWasLoadedFromCache;                             // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0005[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        PauseTime;                                               // 0x0378(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        CurrentTime;                                             // 0x037C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        EnvelopeVolumeMultiplier;                                // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                        PhraseDuration;                                          // 0x0384(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      NextPhonemeIndex;                                        // 0x0388(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      PrevPhonemeIndex;                                        // 0x038C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      NextNotifyIndex;                                         // 0x0390(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0006[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLipSync_TimedPhrase>                          PhraseData;                                              // 0x0398(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                              PauseIndexes;                                            // 0x03A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FLipSync_TimedPhrase>                          PhraseNotifies;                                          // 0x03B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                        CurrentIntervalDuration;                                 // 0x03C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                         bTrial;                                                  // 0x03CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0007[0x3];                                   // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      TrialMonth;                                              // 0x03D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      TrialYear;                                               // 0x03D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, uint8_t>                                   Emotion2Flag;                                            // 0x03D8(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<uint8_t, class FName>                                   Flag2Emotion;                                            // 0x0428(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<uint8_t, float>                                         ActiveEmotions;                                          // 0x0478(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                                UnknownData_0008[0x340];                                 // 0x04C8(0x0340) MISSED OFFSET (PADDING)

	public:
		void TextToPhonemes(const class FText& Line, TArray<struct FLipSync_PhonemeInPhrase>* OutputArray, int32_t* VowelsCount, int32_t* PunctuationMarksCount);
		void StretchPhraseData(float ErrorForPunctuation, float ErrorForWord);
		void StretchDataInterval(int32_t StartIndex, int32_t EndIndex, float NewStartTime, float NewEndTime);
		bool StopSpeaking(bool bStopPlayingSound);
		bool SpeakByKey(const class FName& PhraseKey, bool bStartPlayingSound);
		bool SpeakAgain();
		bool Speak(const struct FLipSync_Phrase& Phrase, bool bStartPlayingSound);
		bool SaveLastPhraseToCache();
		int32_t SaveCacheToDisk(const class FString& Filename, bool bUseBinaryFormat);
		void RestorePhraseDataFromPauses();
		bool RemovePhraseFromCache(class USoundWave* VoiceAsset);
		void OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue);
		void OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent);
		bool LoadPhrasesSetFromDataTable(class UDataTable* Table);
		int32_t LoadCacheFromDisk(const class FString& Filename, bool bUseBinaryFormat);
		bool IsSpeaking();
		bool IsInitialized();
		void InitializePhonemesArray();
		void InitializEPhonemeConvertRules();
		bool Initialize(class UAudioComponent* SpeakingAudioComp);
		float GetSpeakingTime();
		void GetListOfCachedAssets(TArray<class FString>* VoiceAssetNames);
		float GetLastPhraseDuration();
		float GetCurveValue(const class FName& CurveName);
		void GetCurrentPhrase(TMap<float, EPhoneme>* ReturnValue);
		class FString GetCurrentPhonemesLine();
		class FString GetActiveMorphTargets();
		void BuildPhraseData(TArray<struct FLipSync_TimedData> Subtitles);
		static UClass* StaticClass();
	};

	/**
	 * Class Text2LipSync.PhrasesList
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPhrasesList : public UObject
	{
	public:
		TMap<class FName, struct FLipSync_Phrase>                    Data;                                                    // 0x0028(0x0050) NativeAccessSpecifierPrivate

	public:
		bool LoadFromDataTable(class UDataTable* DataTable);
		void GetPhraseFromList(const class FName& Key, struct FLipSync_Phrase* ReturnValue);
		static UClass* StaticClass();
	};

	/**
	 * Class Text2LipSync.SubtitlesCache
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USubtitlesCache : public UObject
	{
	public:
		TMap<class FName, struct FLipSync_Pause>                     Data;                                                    // 0x0028(0x0050) NativeAccessSpecifierPrivate

	public:
		int32_t SaveToDisk(const class FString& Filename);
		int32_t SaveToBinaryFile(const class FString& FullFileName);
		bool RenameAsset(const class FString& CurrentName, const class FString& NewName);
		bool RemoveAsset(class USoundBase* SoundAsset);
		int32_t LoadFromDisk(const class FString& Filename);
		int32_t LoadFromBinaryFile(const class FString& FullFileName);
		bool GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_Interval>* Pauses);
		void GetCachedKeys(TArray<class FString>* CachedKeys);
		bool AddAsset(class USoundBase* SoundAsset, TArray<struct FLipSync_TimedPhrase> PhraseData, TArray<int32_t> PauseIndexes, float PhraseDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class Text2LipSync.SubtitlesFileSave
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USubtitlesFileSave : public USaveGame
	{
	public:
		TMap<class FName, struct FLipSync_Pause>                     Data;                                                    // 0x0028(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
