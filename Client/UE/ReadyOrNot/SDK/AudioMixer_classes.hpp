#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C8 (0x6C0 - 0x1F8)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x1F8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x1F8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x1F8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x1F8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_33 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x1FC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x1FC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x1FC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_34 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3F8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x208(0x3A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x5A8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x5B0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x600(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x608(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x610(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x648(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x648(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_35 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x64C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x658(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x688(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x690(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3FD[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	bool IsPlaying();
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_400[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	float TrimAudioCache(float InMegabytesToFree);
	class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType);
	void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_ OnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	int32 AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x168 (0x190 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_49C[0x140];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzSubsystem*                      QuartzSubsystem;                                   // 0x168(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                WorldPtr;                                          // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty_& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	void StartOtherClock(class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate);
	void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SetTicksPerSecond(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetSecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
	void SetMillisecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
	void SetBeatsPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
	void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** ClockHandle);
	void ResetTransport(class UObject* WorldContextObject, FDelegateProperty_& InDelegate);
	void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	bool IsClockRunning(class UObject* WorldContextObject);
	float GetTicksPerSecond(class UObject* WorldContextObject);
	float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);
	float GetSecondsPerTick(class UObject* WorldContextObject);
	float GetMillisecondsPerTick(class UObject* WorldContextObject);
	float GetEstimatedRunTime(class UObject* WorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);
	float GetBeatsPerMinute(class UObject* WorldContextObject);
};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_49F[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4A0[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4A2[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// 0x110 (0x150 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_4D5[0x110];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	bool IsQuartzEnabled();
	bool IsClockRunning(class UObject* WorldContextObject, class FName ClockName);
	float GetRoundTripMinLatency(class UObject* WorldContextObject);
	float GetRoundTripMaxLatency(class UObject* WorldContextObject);
	float GetRoundTripAverageLatency(class UObject* WorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, class FName ClockName);
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);
	float GetEstimatedClockRunTime(class UObject* WorldContextObject, class FName& InClockName);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, class FName ClockName, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, class FName& InClockName);
	float GetAudioRenderThreadToGameThreadMinLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadAverageLatency();
	bool DoesClockExist(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByName(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
	class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
};

// 0x20 (0x3E0 - 0x3C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                       OwningSynthComponent;                              // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D8[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

}


