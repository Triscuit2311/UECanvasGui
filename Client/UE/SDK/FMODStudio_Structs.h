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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum FMODStudio.EFMODEventProperty
	 */
	enum class EFMODEventProperty : uint8_t
	{
		ChannelPriority   = 0,
		ScheduleDelay     = 1,
		ScheduleLookahead = 2,
		MinimumDistance   = 3,
		MaximumDistance   = 4,
		Count             = 5,
		MAX               = 6
	};

	/**
	 * Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
	 */
	enum class EFMOD_STUDIO_STOP_MODE : uint8_t
	{
		ALLOWFADEOUT = 0,
		IMMEDIATE    = 1,
		MAX          = 2
	};

	/**
	 * Enum FMODStudio.EFMODEventControlKey
	 */
	enum class EFMODEventControlKey : uint8_t
	{
		Stop = 0,
		Play = 1,
		MAX  = 2
	};

	/**
	 * Enum FMODStudio.EFMODCodec
	 */
	enum class EFMODCodec : uint8_t
	{
		VORBIS = 0,
		FADPCM = 1,
		OPUS   = 2,
		XMA    = 3,
		AT9    = 4,
		MAX    = 5
	};

	/**
	 * Enum FMODStudio.EFMODPlatforms
	 */
	enum class EFMODPlatforms : uint8_t
	{
		Windows = 0,
		Linux   = 1,
		Mac     = 2,
		Android = 3,
		IOS     = 4,
		PS4     = 5,
		PS5     = 6,
		Stadia  = 7,
		Switch  = 8,
		XboxOne = 9,
		XSX     = 10,
		Editor  = 11,
		MAX     = 12
	};

	/**
	 * Enum FMODStudio.EFMODOutput
	 */
	enum class EFMODOutput : uint8_t
	{
		TYPE_AUTODETECT = 0,
		TYPE_NOSOUND    = 1,
		TYPE_WASAPI     = 2,
		TYPE_ASIO       = 3,
		TYPE_PULSEAUDIO = 4,
		TYPE_ALSA       = 5,
		TYPE_COREAUDIO  = 6,
		TYPE_AUDIOTRACK = 7,
		TYPE_OPENSL     = 8,
		TYPE_AUDIOOUT   = 9,
		TYPE_AUDIO3D    = 10,
		TYPE_NNAUDIO    = 11,
		TYPE_WINSONIC   = 12,
		TYPE_AAUDIO     = 13,
		TYPE_MAX        = 14
	};

	/**
	 * Enum FMODStudio.EFMODSpeakerMode
	 */
	enum class EFMODSpeakerMode : uint8_t
	{
		Stereo       = 0,
		Surround_5   = 1,
		Surround_7   = 2,
		Surround_7_1 = 3,
		MAX          = 4
	};

	/**
	 * Enum FMODStudio.EFMODLogging
	 */
	enum class EFMODLogging : uint8_t
	{
		LEVEL_NONE    = 0,
		LEVEL_ERROR   = 1,
		LEVEL_WARNING = 2,
		LEVEL_LOG     = 3,
		LEVEL_MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FMODStudio.FMODAttenuationDetails
	 * Size -> 0x000C
	 */
	struct FFMODAttenuationDetails
	{
	public:
		bool                                                         bOverrideAttenuation : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        MinimumDistance;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaximumDistance;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODOcclusionDetails
	 * Size -> 0x0003
	 */
	struct FFMODOcclusionDetails
	{
	public:
		bool                                                         bEnableOcclusion;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                            OcclusionTraceChannel;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUseComplexCollisionForOcclusion;                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventControlChannel
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	struct FFMODEventControlChannel : public FMovieSceneByteChannel
	{
	};

	/**
	 * ScriptStruct FMODStudio.FMODProjectLocale
	 * Size -> 0x0028
	 */
	struct FFMODProjectLocale
	{
	public:
		class FString                                                LocaleName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                LocaleCode;                                              // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDefault;                                                // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FMODStudio.CustomPoolSizes
	 * Size -> 0x0014
	 */
	struct FCustomPoolSizes
	{
	public:
		int32_t                                                      Desktop;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Mobile;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      PS4;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Switch;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      XboxOne;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODPlatformSettings
	 * Size -> 0x0060
	 */
	struct FFMODPlatformSettings
	{
	public:
		int32_t                                                      RealChannelCount;                                        // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      SampleRate;                                              // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFMODSpeakerMode                                             SpeakerMode;                                             // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFMODOutput                                                  OutputType;                                              // 0x0009(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      CustomPoolSize;                                          // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EFMODCodec, int32_t>                                    Codecs;                                                  // 0x0010(0x0050) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventControlSectionTemplate
	 * Size -> 0x0098 (FullSize[0x00B8] - InheritedSize[0x0020])
	 */
	struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FFMODEventControlChannel                              ControlKeys;                                             // 0x0020(0x0098) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODAssetLookupRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FFMODAssetLookupRow : public FTableRowBase
	{
	public:
		class FString                                                PackageName;                                             // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                AssetName;                                               // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODLocalizedBankTable
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FFMODLocalizedBankTable : public FTableRowBase
	{
	public:
		class UDataTable*                                            Banks;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODLocalizedBankRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FFMODLocalizedBankRow : public FTableRowBase
	{
	public:
		class FString                                                Path;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventInstance
	 * Size -> 0x0008
	 */
	struct FFMODEventInstance
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
