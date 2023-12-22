#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EModioModServerSideStatus : uint8
{
	NotAccepted                    = 0,
	Accepted                       = 1,
	Deleted                        = 3,
	EModioModServerSideStatus_MAX  = 4,
};

enum class EModioVirusStatus : uint8
{
	NoThreat                       = 0,
	Malicious                      = 1,
	EModioVirusStatus_MAX          = 2,
};

enum class EModioVirusScanStatus : uint8
{
	NotScanned                     = 0,
	ScanComplete                   = 1,
	InProgress                     = 2,
	TooLargeToScan                 = 3,
	FileNotFound                   = 4,
	ErrorScanning                  = 5,
	EModioVirusScanStatus_MAX      = 6,
};

enum class EModioObjectVisibilityFlags : uint8
{
	Hidden                         = 0,
	Public                         = 1,
	EModioObjectVisibilityFlags_MAX = 2,
};

enum class EModioMaturityFlags : uint8
{
	None                           = 0,
	Alcohol                        = 1,
	Drugs                          = 2,
	Violence                       = 4,
	Explicit                       = 8,
	EModioMaturityFlags_MAX        = 9,
};

enum class EModioModManagementEventType : uint8
{
	Installed                      = 0,
	Uninstalled                    = 1,
	Updated                        = 2,
	Uploaded                       = 3,
	BeginInstall                   = 4,
	BeginUninstall                 = 5,
	BeginUpdate                    = 6,
	BeginUpload                    = 7,
	EModioModManagementEventType_MAX = 8,
};

enum class EModioAuthenticationProvider : uint8
{
	XboxLive                       = 0,
	Steam                          = 1,
	GoG                            = 2,
	Itch                           = 3,
	Switch                         = 4,
	Discord                        = 5,
	PSN                            = 6,
	Epic                           = 7,
	Oculus                         = 8,
	OpenID                         = 9,
	EModioAuthenticationProvider_MAX = 10,
};

enum class EModioLanguage : uint8
{
	English                        = 0,
	Bulgarian                      = 1,
	French                         = 2,
	German                         = 3,
	Italian                        = 4,
	Polish                         = 5,
	Portuguese                     = 6,
	Hungarian                      = 7,
	Japanese                       = 8,
	Korean                         = 9,
	Russian                        = 10,
	Spanish                        = 11,
	Thai                           = 12,
	ChineseSimplified              = 13,
	ChineseTraditional             = 14,
	EModioLanguage_MAX             = 15,
};

enum class EModioLogLevel : uint8
{
	Trace                          = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	EModioLogLevel_MAX             = 4,
};

enum class EModioGallerySize : uint8
{
	Original                       = 0,
	Thumb320                       = 1,
	EModioGallerySize_MAX          = 2,
};

enum class EModioAvatarSize : uint8
{
	Original                       = 0,
	Thumb50                        = 1,
	Thumb100                       = 2,
	EModioAvatarSize_MAX           = 3,
};

enum class EModioLogoSize : uint8
{
	Thumb320                       = 0,
	Thumb640                       = 1,
	Thumb1280                      = 2,
	Original                       = 3,
	EModioLogoSize_MAX             = 4,
};

enum class EModioModfilePlatform : uint8
{
	Windows                        = 0,
	Mac                            = 1,
	Linux                          = 2,
	Android                        = 3,
	IOS                            = 4,
	XboxOne                        = 5,
	XboxSeriesX                    = 6,
	PS4                            = 7,
	PS5                            = 8,
	Switch                         = 9,
	Oculus                         = 10,
	Source                         = 11,
	EModioModfilePlatform_MAX      = 12,
};

enum class EModioPortal : uint8
{
	None                           = 0,
	Apple                          = 1,
	EpicGamesStore                 = 2,
	GOG                            = 3,
	Google                         = 4,
	Itchio                         = 5,
	Nintendo                       = 6,
	PSN                            = 7,
	Steam                          = 8,
	XboxLive                       = 9,
	EModioPortal_MAX               = 10,
};

enum class EModioEnvironment : uint8
{
	Test                           = 0,
	Live                           = 1,
	EModioEnvironment_MAX          = 2,
};

enum class EModioErrorCondition : uint8
{
	NoError                        = 0,
	NetworkError                   = 2,
	ConfigurationError             = 3,
	InvalidArgsError               = 4,
	FilesystemError                = 5,
	InternalError                  = 6,
	EntityNotFoundError            = 12,
	UserTermsOfUseError            = 13,
	SubmitReportError              = 14,
	UserNotAuthenticatedError      = 15,
	SDKNotInitialized              = 16,
	UserAlreadyAuthenticatedError  = 17,
	SystemError                    = 18,
	OperationCanceled              = 19,
	ModManagementDisabled          = 20,
	EModioErrorCondition_MAX       = 21,
};

enum class EModioSortDirection : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	EModioSortDirection_MAX        = 2,
};

enum class EModioSortFieldType : uint8
{
	ID                             = 0,
	DownloadsToday                 = 1,
	SubscriberCount                = 2,
	Rating                         = 3,
	DateMarkedLive                 = 4,
	DateUpdated                    = 5,
	DownloadsTotal                 = 6,
	EModioSortFieldType_MAX        = 7,
};

enum class EModioImageState : uint8
{
	OnDisc                         = 0,
	LoadingIntoMemory              = 1,
	InMemory                       = 2,
	Corrupted                      = 3,
	EModioImageState_MAX           = 4,
};

enum class EModioModState : uint8
{
	InstallationPending            = 0,
	Installed                      = 1,
	UpdatePending                  = 2,
	Downloading                    = 3,
	Extracting                     = 4,
	UninstallPending               = 5,
	EModioModState_MAX             = 6,
};

enum class EModioModProgressState : uint8
{
	Initializing                   = 0,
	Downloading                    = 1,
	Extracting                     = 2,
	Compressing                    = 3,
	Uploading                      = 4,
	EModioModProgressState_MAX     = 5,
};

enum class EModioRating : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	EModioRating_MAX               = 3,
};

enum class EModioReportType : uint8
{
	Generic                        = 0,
	DMCA                           = 1,
	NotWorking                     = 2,
	RudeContent                    = 3,
	IllegalContent                 = 4,
	StolenContent                  = 5,
	FalseInformation               = 6,
	Other                          = 7,
	EModioReportType_MAX           = 8,
};

enum class EFileSizeUnit : uint8
{
	Largest                        = 0,
	B                              = 1,
	KB                             = 1024,
	MB                             = 1048576,
	GB                             = 1073741824,
	EFileSizeUnit_MAX              = 1073741825,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Modio.ModioYoutubeURLList
struct FModioYoutubeURLList
{
public:
	uint8                                        Pad_141B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Modio.ModioSketchfabURLList
struct FModioSketchfabURLList
{
public:
	uint8                                        Pad_141D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Modio.ModioPagedResult
struct FModioPagedResult
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PageSize;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PageCount;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TotalResultCount;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ResultCount;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioModID
struct FModioModID
{
public:
	uint8                                        Pad_1421[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioUserID
struct FModioUserID
{
public:
	uint8                                        Pad_1423[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Modio.ModioUser
struct FModioUser
{
public:
	struct FModioUserID                          UserID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateOnline;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayNamePortal;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioMetadata
struct FModioMetadata
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioModTag
struct FModioModTag
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioFileMetadataID
struct FModioFileMetadataID
{
public:
	uint8                                        Pad_1425[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Modio.ModioFileMetadata
struct FModioFileMetadata
{
public:
	struct FModioFileMetadataID                  MetadataId;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ModId;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateAdded;                                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioVirusScanStatus             CurrentVirusScanStatus;                            // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioVirusStatus                 CurrentVirusStatus;                                // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1429[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Filesize;                                          // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Changelog;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetadataBlob;                                      // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioModStats
struct FModioModStats
{
public:
	int64                                        PopularityRankPosition;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PopularityRankTotalMods;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        DownloadsTotal;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SubscribersTotal;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingTotal;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingPositive;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingNegative;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingPercentagePositive;                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RatingWeightedAggregate;                           // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RatingDisplayText;                                 // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct Modio.ModioModInfo
struct FModioModInfo
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileName;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileSummary;                                    // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileDescription;                                // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileDescriptionPlaintext;                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUser                            ProfileSubmittedBy;                                // 0x58(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateAdded;                                  // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateUpdated;                                // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateLive;                                   // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioMaturityFlags               ProfileMaturityOption;                             // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0xB1(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioObjectVisibilityFlags       Visibility;                                        // 0xB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1432[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MetadataBlob;                                      // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFileMetadata                    FileInfo;                                          // 0xC8(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FModioMetadata>                MetadataKvp;                                       // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FModioModTag>                  Tags;                                              // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int32                                        NumGalleryImages;                                  // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1435[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioYoutubeURLList                  YoutubeURLs;                                       // 0x158(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1436[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioSketchfabURLList                SketchfabURLs;                                     // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1439[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModStats                        Stats;                                             // 0x178(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	enum class EModioModServerSideStatus         ModStatus;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModInfoList
struct FModioModInfoList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_143C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModInfo>                 InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModTagInfo
struct FModioModTagInfo
{
public:
	class FString                                TagGroupName;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TagGroupValues;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleSelection;                           // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModTagOptions
struct FModioModTagOptions
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_143F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModTagInfo>              InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioErrorCode
struct FModioErrorCode
{
public:
	uint8                                        Pad_1441[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioModManagementEvent
struct FModioModManagementEvent
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioModManagementEventType      Event;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1442[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioErrorCode                       Status;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalModInfoList
struct FModioOptionalModInfoList
{
public:
	uint8                                        Pad_1444[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct Modio.ModioOptionalModInfo
struct FModioOptionalModInfo
{
public:
	uint8                                        Pad_1446[0x1E0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x200 (0x200 - 0x0)
// ScriptStruct Modio.ModioOptionalGameInfo
struct FModioOptionalGameInfo
{
public:
	uint8                                        Pad_1448[0x200];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioOptionalImage
struct FModioOptionalImage
{
public:
	uint8                                        Pad_1449[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalModTagOptions
struct FModioOptionalModTagOptions
{
public:
	uint8                                        Pad_144A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Modio.ModioOptionalTerms
struct FModioOptionalTerms
{
public:
	uint8                                        Pad_144B[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalModDependencyList
struct FModioOptionalModDependencyList
{
public:
	uint8                                        Pad_144D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioOptionalModID
struct FModioOptionalModID
{
public:
	uint8                                        Pad_144E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalUserList
struct FModioOptionalUserList
{
public:
	uint8                                        Pad_1451[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Modio.ModioFilterParams
struct FModioFilterParams
{
public:
	uint8                                        Pad_1456[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Modio.ModioAuthenticationParams
struct FModioAuthenticationParams
{
public:
	class FString                                AuthToken;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserEmail;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserHasAcceptedTerms;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           ExtendedParameters;                                // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioEmailAuthCode
struct FModioEmailAuthCode
{
public:
	uint8                                        Pad_145C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioEmailAddress
struct FModioEmailAddress
{
public:
	uint8                                        Pad_145D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioApiKey
struct FModioApiKey
{
public:
	class FString                                ApiKey;                                            // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioGameID
struct FModioGameID
{
public:
	int64                                        GameId;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Modio.ModioCreateModFileParams
struct FModioCreateModFileParams
{
public:
	class FString                                PathToModRootDirectory;                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145F[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Modio.ModioCreateModParams
struct FModioCreateModParams
{
public:
	class FString                                PathToLogoFile;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Summary;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1461[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Modio.ModioEditModParams
struct FModioEditModParams
{
public:
	uint8                                        Pad_1462[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioHeaderImage
struct FModioHeaderImage
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Modio.ModioTheme
struct FModioTheme
{
public:
	class FString                                Primary;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dark;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Light;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Success;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Warning;                                           // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Danger;                                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioIcon
struct FModioIcon
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb64x64;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb128x128;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb256x256;                                      // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioLogo
struct FModioLogo
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb320x180;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb640x360;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb1280x720;                                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Modio.ModioGameStats
struct FModioGameStats
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModCountTotal;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsToday;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsTotal;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsDailyAverage;                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModSubscribersTotal;                               // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        DateExpires;                                       // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioOtherUrl
struct FModioOtherUrl
{
public:
	class FString                                Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x1F8 - 0x0)
// ScriptStruct Modio.ModioGameInfo
struct FModioGameInfo
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateAdded;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateUpdated;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateLive;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UgcName;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioIcon                            Icon;                                              // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLogo                            Logo;                                              // 0x80(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioHeaderImage                     HeaderImage;                                       // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Summary;                                           // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Instructions;                                      // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstructionsUrl;                                   // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioTheme                           Theme;                                             // 0x140(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioGameStats                       Stats;                                             // 0x1A0(0x38)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FModioOtherUrl>                OtherUrls;                                         // 0x1D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EModioModfilePlatform>     Platforms;                                         // 0x1E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioImageWrapper
struct FModioImageWrapper
{
public:
	class FString                                ImagePath;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Modio.ModioInitializeOptions
struct FModioInitializeOptions
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioApiKey                          ApiKey;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EModioEnvironment                 GameEnvironment;                                   // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioPortal                      PortalInUse;                                       // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           ExtendedInitializationParameters;                  // 0x20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUseBackgroundThread;                              // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146F[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x208 (0x208 - 0x0)
// ScriptStruct Modio.ModioModCollectionEntry
struct FModioModCollectionEntry
{
public:
	uint8                                        Pad_1470[0x208];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioModCreationHandle
struct FModioModCreationHandle
{
public:
	uint8                                        Pad_1471[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioModDependency
struct FModioModDependency
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModName;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModDependencyList
struct FModioModDependencyList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1472[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModDependency>           InternalList;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioOptionalModProgressInfo
struct FModioOptionalModProgressInfo
{
public:
	uint8                                        Pad_1473[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioModProgressInfo
struct FModioModProgressInfo
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1474[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioReportParams
struct FModioReportParams
{
public:
	uint8                                        Pad_1475[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioLink
struct FModioLink
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequired;                                         // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1478[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Modio.ModioTerms
struct FModioTerms
{
public:
	class FString                                AgreeButtonText;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisagreeButtonText;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioLink                            WebsiteLink;                                       // 0x20(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            TermsLink;                                         // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            PrivacyLink;                                       // 0x70(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            ManageLink;                                        // 0x98(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_147B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioUnsigned64
struct FModioUnsigned64
{
public:
	uint8                                        Pad_147D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Modio.ModioOptionalUser
struct FModioOptionalUser
{
public:
	uint8                                        Pad_147F[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioUserList
struct FModioUserList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1480[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioUser>                    InternalList;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioValidationError
struct FModioValidationError
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationFailureDescription;                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


