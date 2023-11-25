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
	 * Enum Modio.EModioMaturityFlags
	 */
	enum class EModioMaturityFlags : uint8_t
	{
		None     = 0,
		Alcohol  = 1,
		Drugs    = 2,
		Violence = 3,
		Explicit = 4,
		MAX      = 5
	};

	/**
	 * Enum Modio.EModioModfilePlatform
	 */
	enum class EModioModfilePlatform : uint8_t
	{
		Windows     = 0,
		Mac         = 1,
		Linux       = 2,
		Android     = 3,
		iOS         = 4,
		XboxOne     = 5,
		XboxSeriesX = 6,
		PS4         = 7,
		PS5         = 8,
		Switch      = 9,
		Oculus      = 10,
		MAX         = 11
	};

	/**
	 * Enum Modio.EModioPortal
	 */
	enum class EModioPortal : uint8_t
	{
		None           = 0,
		Apple          = 1,
		EpicGamesStore = 2,
		GOG            = 3,
		Google         = 4,
		Itchio         = 5,
		Nintendo       = 6,
		PSN            = 7,
		Steam          = 8,
		XboxLive       = 9,
		MAX            = 10
	};

	/**
	 * Enum Modio.EModioEnvironment
	 */
	enum class EModioEnvironment : uint8_t
	{
		Test = 0,
		Live = 1,
		MAX  = 2
	};

	/**
	 * Enum Modio.EModioRating
	 */
	enum class EModioRating : uint8_t
	{
		Neutral  = 0,
		Positive = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum Modio.EModioErrorCondition
	 */
	enum class EModioErrorCondition : uint8_t
	{
		NoError                       = 0,
		NetworkError                  = 1,
		ConfigurationError            = 2,
		InvalidArgsError              = 3,
		FilesystemError               = 4,
		InternalError                 = 5,
		EntityNotFoundError           = 6,
		UserTermsOfUseError           = 7,
		SubmitReportError             = 8,
		UserNotAuthenticatedError     = 9,
		SDKNotInitialized             = 10,
		UserAlreadyAuthenticatedError = 11,
		SystemError                   = 12,
		MAX                           = 13
	};

	/**
	 * Enum Modio.EModioVirusStatus
	 */
	enum class EModioVirusStatus : uint8_t
	{
		NoThreat  = 0,
		Malicious = 1,
		MAX       = 2
	};

	/**
	 * Enum Modio.EModioSortDirection
	 */
	enum class EModioSortDirection : uint8_t
	{
		Ascending  = 0,
		Descending = 1,
		MAX        = 2
	};

	/**
	 * Enum Modio.EModioVirusScanStatus
	 */
	enum class EModioVirusScanStatus : uint8_t
	{
		NotScanned     = 0,
		ScanComplete   = 1,
		InProgress     = 2,
		TooLargeToScan = 3,
		FileNotFound   = 4,
		ErrorScanning  = 5,
		MAX            = 6
	};

	/**
	 * Enum Modio.EModioReportType
	 */
	enum class EModioReportType : uint8_t
	{
		Generic          = 0,
		DMCA             = 1,
		NotWorking       = 2,
		RudeContent      = 3,
		IllegalContent   = 4,
		StolenContent    = 5,
		FalseInformation = 6,
		Other            = 7,
		MAX              = 8
	};

	/**
	 * Enum Modio.EModioSortFieldType
	 */
	enum class EModioSortFieldType : uint8_t
	{
		ID              = 0,
		DownloadsToday  = 1,
		SubscriberCount = 2,
		Rating          = 3,
		DateMarkedLive  = 4,
		DateUpdated     = 5,
		DownloadsTotal  = 6,
		MAX             = 7
	};

	/**
	 * Enum Modio.EModioImageState
	 */
	enum class EModioImageState : uint8_t
	{
		OnDisc            = 0,
		LoadingIntoMemory = 1,
		InMemory          = 2,
		Corrupted         = 3,
		MAX               = 4
	};

	/**
	 * Enum Modio.EFileSizeUnit
	 */
	enum class EFileSizeUnit : uint8_t
	{
		Largest = 0,
		B       = 1,
		KB      = 2,
		MB      = 3,
		GB      = 4,
		MAX     = 5
	};

	/**
	 * Enum Modio.EModioAuthenticationProvider
	 */
	enum class EModioAuthenticationProvider : uint8_t
	{
		XboxLive = 0,
		Steam    = 1,
		GoG      = 2,
		Itch     = 3,
		Switch   = 4,
		Discord  = 5,
		MAX      = 6
	};

	/**
	 * Enum Modio.EModioModState
	 */
	enum class EModioModState : uint8_t
	{
		InstallationPending = 0,
		Installed           = 1,
		UpdatePending       = 2,
		Downloading         = 3,
		Extracting          = 4,
		UninstallPending    = 5,
		MAX                 = 6
	};

	/**
	 * Enum Modio.EModioLanguage
	 */
	enum class EModioLanguage : uint8_t
	{
		English            = 0,
		Bulgarian          = 1,
		French             = 2,
		German             = 3,
		Italian            = 4,
		Polish             = 5,
		Portuguese         = 6,
		Hungarian          = 7,
		Japanese           = 8,
		Korean             = 9,
		Russian            = 10,
		Spanish            = 11,
		Thai               = 12,
		ChineseSimplified  = 13,
		ChineseTraditional = 14,
		MAX                = 15
	};

	/**
	 * Enum Modio.EModioLogLevel
	 */
	enum class EModioLogLevel : uint8_t
	{
		Trace   = 0,
		Info    = 1,
		Warning = 2,
		Error   = 3,
		MAX     = 4
	};

	/**
	 * Enum Modio.EModioGallerySize
	 */
	enum class EModioGallerySize : uint8_t
	{
		Original = 0,
		Thumb320 = 1,
		MAX      = 2
	};

	/**
	 * Enum Modio.EModioAvatarSize
	 */
	enum class EModioAvatarSize : uint8_t
	{
		Original = 0,
		Thumb50  = 1,
		Thumb100 = 2,
		MAX      = 3
	};

	/**
	 * Enum Modio.EModioLogoSize
	 */
	enum class EModioLogoSize : uint8_t
	{
		Original  = 0,
		Thumb320  = 1,
		Thumb640  = 2,
		Thumb1280 = 3,
		MAX       = 4
	};

	/**
	 * Enum Modio.EModioModManagementEventType
	 */
	enum class EModioModManagementEventType : uint8_t
	{
		Installed      = 0,
		Uninstalled    = 1,
		Updated        = 2,
		Uploaded       = 3,
		BeginInstall   = 4,
		BeginUninstall = 5,
		BeginUpdate    = 6,
		BeginUpload    = 7,
		MAX            = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Modio.ModioYoutubeURLList
	 * Size -> 0x0001
	 */
	struct FModioYoutubeURLList
	{
	public:
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioSketchfabURLList
	 * Size -> 0x0001
	 */
	struct FModioSketchfabURLList
	{
	public:
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioPagedResult
	 * Size -> 0x0014
	 */
	struct FModioPagedResult
	{
	public:
		int32_t                                                      PageIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      PageSize;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      PageCount;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      TotalResultCount;                                        // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                      ResultCount;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Modio.ModioModID
	 * Size -> 0x0008
	 */
	struct FModioModID
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioUserID
	 * Size -> 0x0008
	 */
	struct FModioUserID
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioUser
	 * Size -> 0x0030
	 */
	struct FModioUser
	{
	public:
		struct FModioUserID                                          UserID;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Username;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                DateOnline;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileUrl;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioFileMetadataID
	 * Size -> 0x0008
	 */
	struct FModioFileMetadataID
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioFileMetadata
	 * Size -> 0x0068
	 */
	struct FModioFileMetadata
	{
	public:
		struct FModioFileMetadataID                                  MetadataId;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModioModID                                           ModId;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                DateAdded;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioVirusScanStatus                                        CurrentVirusScanStatus;                                  // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioVirusStatus                                            CurrentVirusStatus;                                      // 0x0019(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                      Filesize;                                                // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Filename;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Version;                                                 // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Changelog;                                               // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                MetadataBlob;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioMetadata
	 * Size -> 0x0020
	 */
	struct FModioMetadata
	{
	public:
		class FString                                                Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Value;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioModTag
	 * Size -> 0x0010
	 */
	struct FModioModTag
	{
	public:
		class FString                                                Tag;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioModStats
	 * Size -> 0x0058
	 */
	struct FModioModStats
	{
	public:
		int64_t                                                      PopularityRankPosition;                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      PopularityRankTotalMods;                                 // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      DownloadsTotal;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      SubscribersTotal;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      RatingTotal;                                             // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      RatingPositive;                                          // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      RatingNegative;                                          // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                      RatingPercentagePositive;                                // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        RatingWeightedAggregate;                                 // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                RatingDisplayText;                                       // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioModInfo
	 * Size -> 0x01C0
	 */
	struct FModioModInfo
	{
	public:
		struct FModioModID                                           ModId;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileSummary;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileDescription;                                      // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileDescriptionPlaintext;                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ProfileUrl;                                              // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModioUser                                            ProfileSubmittedBy;                                      // 0x0058(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FDateTime                                ProfileDateAdded;                                        // 0x0088(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                ProfileDateUpdated;                                      // 0x0090(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                ProfileDateLive;                                         // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioMaturityFlags                                          ProfileMaturityOption;                                   // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bVisible;                                                // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                MetadataBlob;                                            // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModioFileMetadata                                    FileInfo;                                                // 0x00B8(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FModioMetadata>                                MetadataKvp;                                             // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FModioModTag>                                  Tags;                                                    // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                      NumGalleryImages;                                        // 0x0140(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModioYoutubeURLList                                  YoutubeURLs;                                             // 0x0148(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0149(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModioSketchfabURLList                                SketchfabURLs;                                           // 0x0158(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0159(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModioModStats                                        Stats;                                                   // 0x0168(0x0058) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioModInfoList
	 * Size -> 0x0028
	 */
	struct FModioModInfoList
	{
	public:
		struct FModioPagedResult                                     PagedResult;                                             // 0x0000(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModioModInfo>                                 InternalList;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioOptionalImage
	 * Size -> 0x0018
	 */
	struct FModioOptionalImage
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModTagOptions
	 * Size -> 0x0030
	 */
	struct FModioOptionalModTagOptions
	{
	public:
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalTerms
	 * Size -> 0x00D8
	 */
	struct FModioOptionalTerms
	{
	public:
		unsigned char                                                UnknownData_0000[0xD8];                                  // 0x0000(0x00D8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModDependencyList
	 * Size -> 0x0030
	 */
	struct FModioOptionalModDependencyList
	{
	public:
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModID
	 * Size -> 0x0010
	 */
	struct FModioOptionalModID
	{
	public:
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModTagInfo
	 * Size -> 0x0028
	 */
	struct FModioModTagInfo
	{
	public:
		class FString                                                TagGroupName;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                        TagGroupValues;                                          // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                         bAllowMultipleSelection;                                 // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModTagOptions
	 * Size -> 0x0028
	 */
	struct FModioModTagOptions
	{
	public:
		struct FModioPagedResult                                     PagedResult;                                             // 0x0000(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModioModTagInfo>                              InternalList;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioErrorCode
	 * Size -> 0x0008
	 */
	struct FModioErrorCode
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModManagementEvent
	 * Size -> 0x0018
	 */
	struct FModioModManagementEvent
	{
	public:
		struct FModioModID                                           ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioModManagementEventType                                 Event;                                                   // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModioErrorCode                                       Status;                                                  // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModInfoList
	 * Size -> 0x0030
	 */
	struct FModioOptionalModInfoList
	{
	public:
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModInfo
	 * Size -> 0x01C8
	 */
	struct FModioOptionalModInfo
	{
	public:
		unsigned char                                                UnknownData_0000[0x1C8];                                 // 0x0000(0x01C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModCollectionEntry
	 * Size -> 0x01F0
	 */
	struct FModioModCollectionEntry
	{
	public:
		unsigned char                                                UnknownData_0000[0x1F0];                                 // 0x0000(0x01F0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioAuthenticationParams
	 * Size -> 0x0028
	 */
	struct FModioAuthenticationParams
	{
	public:
		class FString                                                AuthToken;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                UserEmail;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bUserHasAcceptedTerms;                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModCreationHandle
	 * Size -> 0x0008
	 */
	struct FModioModCreationHandle
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioEmailAuthCode
	 * Size -> 0x0010
	 */
	struct FModioEmailAuthCode
	{
	public:
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioEmailAddress
	 * Size -> 0x0010
	 */
	struct FModioEmailAddress
	{
	public:
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioApiKey
	 * Size -> 0x0010
	 */
	struct FModioApiKey
	{
	public:
		class FString                                                ApiKey;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Modio.ModioModDependency
	 * Size -> 0x0018
	 */
	struct FModioModDependency
	{
	public:
		struct FModioModID                                           ModId;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ModName;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioModDependencyList
	 * Size -> 0x0028
	 */
	struct FModioModDependencyList
	{
	public:
		struct FModioPagedResult                                     PagedResult;                                             // 0x0000(0x0014) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModioModDependency>                           InternalList;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioGameID
	 * Size -> 0x0008
	 */
	struct FModioGameID
	{
	public:
		int64_t                                                      GameId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Modio.ModioCreateModFileParams
	 * Size -> 0x0078
	 */
	struct FModioCreateModFileParams
	{
	public:
		class FString                                                PathToModRootDirectory;                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x68];                                  // 0x0010(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioCreateModParams
	 * Size -> 0x00C8
	 */
	struct FModioCreateModParams
	{
	public:
		class FString                                                PathToLogoFile;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Summary;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioEditModParams
	 * Size -> 0x00A0
	 */
	struct FModioEditModParams
	{
	public:
		unsigned char                                                UnknownData_0000[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioFilterParams
	 * Size -> 0x00A8
	 */
	struct FModioFilterParams
	{
	public:
		unsigned char                                                UnknownData_0000[0xA8];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalModProgressInfo
	 * Size -> 0x0030
	 */
	struct FModioOptionalModProgressInfo
	{
	public:
		unsigned char                                                UnknownData_0000[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioImageWrapper
	 * Size -> 0x0010
	 */
	struct FModioImageWrapper
	{
	public:
		class FString                                                ImagePath;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioInitializeOptions
	 * Size -> 0x0038
	 */
	struct FModioInitializeOptions
	{
	public:
		struct FModioGameID                                          GameId;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModioApiKey                                          ApiKey;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EModioEnvironment                                            GameEnvironment;                                         // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioPortal                                                 PortalInUse;                                             // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x1E];                                  // 0x001A(0x001E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioUnsigned64
	 * Size -> 0x0008
	 */
	struct FModioUnsigned64
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioModProgressInfo
	 * Size -> 0x0028
	 */
	struct FModioModProgressInfo
	{
	public:
		struct FModioUnsigned64                                      TotalDownloadSize;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FModioUnsigned64                                      CurrentlyDownloadedBytes;                                // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FModioUnsigned64                                      TotalExtractedSizeOnDisk;                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FModioUnsigned64                                      CurrentlyExtractedBytes;                                 // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FModioModID                                           ID;                                                      // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Modio.ModioReportParams
	 * Size -> 0x0058
	 */
	struct FModioReportParams
	{
	public:
		unsigned char                                                UnknownData_0000[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioLink
	 * Size -> 0x0028
	 */
	struct FModioLink
	{
	public:
		class FString                                                Text;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                URL;                                                     // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bRequired;                                               // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioTerms
	 * Size -> 0x00D0
	 */
	struct FModioTerms
	{
	public:
		class FString                                                AgreeButtonText;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                DisagreeButtonText;                                      // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModioLink                                            WebsiteLink;                                             // 0x0020(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModioLink                                            TermsLink;                                               // 0x0048(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModioLink                                            PrivacyLink;                                             // 0x0070(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModioLink                                            ManageLink;                                              // 0x0098(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioOptionalUser
	 * Size -> 0x0038
	 */
	struct FModioOptionalUser
	{
	public:
		unsigned char                                                UnknownData_0000[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Modio.ModioValidationError
	 * Size -> 0x0020
	 */
	struct FModioValidationError
	{
	public:
		class FString                                                FieldName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ValidationFailureDescription;                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
