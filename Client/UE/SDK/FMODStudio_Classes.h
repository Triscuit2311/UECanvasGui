#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * Class FMODStudio.FMODAmbientSound
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AFMODAmbientSound : public AActor
	{
	public:
		class UFMODAudioComponent*                                   AudioComponent;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAudioComponent
	 * Size -> 0x0178 (FullSize[0x0370] - InheritedSize[0x01F8])
	 */
	class UFMODAudioComponent : public USceneComponent
	{
	public:
		class UFMODEvent*                                            Event;                                                   // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, float>                                     ParameterCache;                                          // 0x0200(0x0050) Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic
		class FString                                                ProgrammerSoundName;                                     // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableTimelineCallbacks : 1;                            // 0x0260(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAutoDestroy : 1;                                        // 0x0260(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bStopWhenOwnerDestroyed : 1;                             // 0x0260(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnEventStopped;                                          // 0x0268(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0269(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnTimelineMarker;                                        // 0x0278(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0279(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnTimelineBeat;                                          // 0x0288(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0289(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		struct FFMODAttenuationDetails                               AttenuationDetails;                                      // 0x0298(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFMODOcclusionDetails                                 OcclusionDetails;                                        // 0x02A4(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0xC9];                                  // 0x02A7(0x00C9) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetVolume(float Volume);
		void SetTimelinePosition(int32_t Time);
		void SetProperty(EFMODEventProperty Property, float Value);
		void SetProgrammerSoundName(const class FString& Value);
		void SetPitch(float Pitch);
		void SetPaused(bool paused);
		void SetParameter(const class FName& Name, float Value);
		void SetEvent(class UFMODEvent* NewEvent);
		void Release();
		void Play();
		void KeyOff();
		bool IsPlaying();
		int32_t GetTimelinePosition();
		float GetProperty(EFMODEventProperty Property);
		void GetParameterValue(const class FName& Name, float* UserValue, float* FinalValue);
		float GetParameter(const class FName& Name);
		int32_t GetLength();
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAnimNotifyPlay
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UFMODAnimNotifyPlay : public UAnimNotify
	{
	public:
		bool                                                         bFollow : 1;                                             // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                AttachName;                                              // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFMODEvent*                                            Event;                                                   // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFMODAsset : public UObject
	{
	public:
		struct FGuid                                                 AssetGuid;                                               // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBank
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODBank : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBankLookup
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UFMODBankLookup : public UObject
	{
	public:
		class UDataTable*                                            DataTable;                                               // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                MasterBankPath;                                          // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                MasterAssetsBankPath;                                    // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                MasterStringsBankPath;                                   // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBlueprintStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
	{
	public:
		void VCASetVolume(class UFMODVCA* Vca, float Volume);
		void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
		void UnloadBankSampleData(class UFMODBank* Bank);
		void UnloadBank(class UFMODBank* Bank);
		void SetOutputDriverByName(const class FString& NewDriverName);
		void SetOutputDriverByIndex(int32_t NewDriverIndex);
		void SetLocale(const class FString& Locale);
		void SetGlobalParameterByName(const class FName& Name, float Value);
		class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
		struct FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct PCoreUObject_FTransform& Location, bool bAutoPlay);
		struct FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
		void MixerSuspend();
		void MixerResume();
		void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
		void LoadBankSampleData(class UFMODBank* Bank);
		void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
		bool IsWorldAudible(class UObject* WorldContextObject);
		bool IsBankLoaded(class UFMODBank* Bank);
		TArray<class FString> GetOutputDrivers();
		void GetGlobalParameterValueByName(const class FName& Name, float* UserValue, float* FinalValue);
		float GetGlobalParameterByName(const class FName& Name);
		TArray<struct FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
		class UFMODEvent* FindEventByName(const class FString& Name);
		class UFMODAsset* FindAssetByName(const class FString& Name);
		void EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release);
		void EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
		void EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct PCoreUObject_FTransform& Location);
		void EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, EFMODEventProperty Property, float Value);
		void EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
		void EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused);
		void EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name, float Value);
		void EventInstanceRelease(const struct FFMODEventInstance& EventInstance);
		void EventInstancePlay(const struct FFMODEventInstance& EventInstance);
		void EventInstanceKeyOff(const struct FFMODEventInstance& EventInstance);
		bool EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
		void EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, const class FName& Name, float* UserValue, float* FinalValue);
		float EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name);
		void BusStopAllEvents(class UFMODBus* Bus, EFMOD_STUDIO_STOP_MODE stopMode);
		void BusSetVolume(class UFMODBus* Bus, float Volume);
		void BusSetPaused(class UFMODBus* Bus, bool bPaused);
		void BusSetMute(class UFMODBus* Bus, bool bMute);
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEvent
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODEvent : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBus
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODBus : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventParameterTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UFMODEventParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                            Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODPort
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODPort : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventControlSection
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	class UFMODEventControlSection : public UMovieSceneSection
	{
	public:
		struct FFMODEventControlChannel                              ControlKeys;                                             // 0x00E8(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventControlTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UFMODEventControlTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                            ControlSections;                                         // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSettings
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class UFMODSettings : public UObject
	{
	public:
		bool                                                         bLoadAllBanks;                                           // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLoadAllSampleData;                                      // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableLiveUpdate;                                       // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableEditorLiveUpdate;                                 // 0x002B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                        BankOutputDirectory;                                     // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		EFMODSpeakerMode                                             OutputFormat;                                            // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFMODOutput                                                  OutputType;                                              // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFMODProjectLocale>                            Locales;                                                 // 0x0048(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                         bVol0Virtual;                                            // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Vol0VirtualLevel;                                        // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      SampleRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bMatchHardwareSampleRate;                                // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      RealChannelCount;                                        // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      TotalChannelCount;                                       // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      DSPBufferLength;                                         // 0x0070(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      DSPBufferCount;                                          // 0x0074(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      FileBufferSize;                                          // 0x0078(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      StudioUpdatePeriod;                                      // 0x007C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                InitialOutputDriverName;                                 // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bLockAllBuses;                                           // 0x0090(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomPoolSizes                                      MemoryPoolSizes;                                         // 0x0094(0x0014) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                      LiveUpdatePort;                                          // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      EditorLiveUpdatePort;                                    // 0x00AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      ReloadBanksDelay;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableAPIErrorLogging;                                  // 0x00B4(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bEnableMemoryTracking;                                   // 0x00B5(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                        PluginFiles;                                             // 0x00B8(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                                ContentBrowserPrefix;                                    // 0x00C8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ForcePlatformName;                                       // 0x00D8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                MasterBankName;                                          // 0x00E8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                SkipLoadBankName;                                        // 0x00F8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                StudioBankKey;                                           // 0x0108(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                WavWriterPath;                                           // 0x0118(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFMODLogging                                                 LoggingLevel;                                            // 0x0128(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0006[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                OcclusionParameter;                                      // 0x0130(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                AmbientVolumeParameter;                                  // 0x0140(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                AmbientLPFParameter;                                     // 0x0150(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EFMODPlatforms, struct FFMODPlatformSettings>           Platforms;                                               // 0x0160(0x0050) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0007[0x10];                                  // 0x01B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSnapshot
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODSnapshot : public UFMODEvent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSnapshotReverb
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UFMODSnapshotReverb : public UReverbEffect
	{
	public:
		struct FGuid                                                 AssetGuid;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODVCA
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UFMODVCA : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
