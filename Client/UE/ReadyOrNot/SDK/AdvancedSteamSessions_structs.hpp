#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFBPWorkshopFileType : uint8
{
	K_EWorkshopFileTypeCommunity   = 0,
	K_EWorkshopFileTypeMicrotransaction = 1,
	K_EWorkshopFileTypeCollection  = 2,
	K_EWorkshopFileTypeArt         = 3,
	K_EWorkshopFileTypeVideo       = 4,
	K_EWorkshopFileTypeScreenshot  = 5,
	K_EWorkshopFileTypeGame        = 6,
	K_EWorkshopFileTypeSoftware    = 7,
	K_EWorkshopFileTypeConcept     = 8,
	K_EWorkshopFileTypeWebGuide    = 9,
	K_EWorkshopFileTypeIntegratedGuide = 10,
	K_EWorkshopFileTypeMerch       = 11,
	K_EWorkshopFileTypeControllerBinding = 12,
	K_EWorkshopFileTypeSteamworksAccessInvite = 13,
	K_EWorkshopFileTypeSteamVideo  = 14,
	K_EWorkshopFileTypeMax         = 15,
	K_MAX                          = 16,
};

enum class EFBPSteamResult : uint8
{
	K_EResultInvalid               = 0,
	K_EResultOK                    = 1,
	K_EResultFail                  = 2,
	K_EResultNoConnection          = 3,
	K_EResultInvalidPassword       = 5,
	K_EResultLoggedInElsewhere     = 6,
	K_EResultInvalidProtocolVer    = 7,
	K_EResultInvalidParam          = 8,
	K_EResultFileNotFound          = 9,
	K_EResultBusy                  = 10,
	K_EResultInvalidState          = 11,
	K_EResultInvalidName           = 12,
	K_EResultInvalidEmail          = 13,
	K_EResultDuplicateName         = 14,
	K_EResultAccessDenied          = 15,
	K_EResultTimeout               = 16,
	K_EResultBanned                = 17,
	K_EResultAccountNotFound       = 18,
	K_EResultInvalidSteamID        = 19,
	K_EResultServiceUnavailable    = 20,
	K_EResultNotLoggedOn           = 21,
	K_EResultPending               = 22,
	K_EResultEncryptionFailure     = 23,
	K_EResultInsufficientPrivilege = 24,
	K_EResultLimitExceeded         = 25,
	K_EResultRevoked               = 26,
	K_EResultExpired               = 27,
	K_EResultAlreadyRedeemed       = 28,
	K_EResultDuplicateRequest      = 29,
	K_EResultAlreadyOwned          = 30,
	K_EResultIPNotFound            = 31,
	K_EResultPersistFailed         = 32,
	K_EResultLockingFailed         = 33,
	K_EResultLogonSessionReplaced  = 34,
	K_EResultConnectFailed         = 35,
	K_EResultHandshakeFailed       = 36,
	K_EResultIOFailure             = 37,
	K_EResultRemoteDisconnect      = 38,
	K_EResultShoppingCartNotFound  = 39,
	K_EResultBlocked               = 40,
	K_EResultIgnored               = 41,
	K_EResultNoMatch               = 42,
	K_EResultAccountDisabled       = 43,
	K_EResultServiceReadOnly       = 44,
	K_EResultAccountNotFeatured    = 45,
	K_EResultAdministratorOK       = 46,
	K_EResultContentVersion        = 47,
	K_EResultTryAnotherCM          = 48,
	K_EResultPasswordRequiredToKickSession = 49,
	K_EResultAlreadyLoggedInElsewhere = 50,
	K_EResultSuspended             = 51,
	K_EResultCancelled             = 52,
	K_EResultDataCorruption        = 53,
	K_EResultDiskFull              = 54,
	K_EResultRemoteCallFailed      = 55,
	K_EResultPasswordUnset         = 56,
	K_EResultExternalAccountUnlinked = 57,
	K_EResultPSNTicketInvalid      = 58,
	K_EResultExternalAccountAlreadyLinked = 59,
	K_EResultRemoteFileConflict    = 60,
	K_EResultIllegalPassword       = 61,
	K_EResultSameAsPreviousValue   = 62,
	K_EResultAccountLogonDenied    = 63,
	K_EResultCannotUseOldPassword  = 64,
	K_EResultInvalidLoginAuthCode  = 65,
	K_EResultAccountLogonDeniedNoMail = 66,
	K_EResultHardwareNotCapableOfIPT = 67,
	K_EResultIPTInitError          = 68,
	K_EResultParentalControlRestricted = 69,
	K_EResultFacebookQueryError    = 70,
	K_EResultExpiredLoginAuthCode  = 71,
	K_EResultIPLoginRestrictionFailed = 72,
	K_EResultAccountLockedDown     = 73,
	K_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
	K_EResultNoMatchingURL         = 75,
	K_EResultBadResponse           = 76,
	K_EResultRequirePasswordReEntry = 77,
	K_EResultValueOutOfRange       = 78,
	K_EResultUnexpectedError       = 79,
	K_EResultDisabled              = 80,
	K_EResultInvalidCEGSubmission  = 81,
	K_EResultRestrictedDevice      = 82,
	K_EResultRegionLocked          = 83,
	K_EResultRateLimitExceeded     = 84,
	K_EResultAccountLoginDeniedNeedTwoFactor = 85,
	K_EResultItemDeleted           = 86,
	K_EResultAccountLoginDeniedThrottle = 87,
	K_EResultTwoFactorCodeMismatch = 88,
	K_EResultTwoFactorActivationCodeMismatch = 89,
	K_EResultAccountAssociatedToMultiplePartners = 90,
	K_EResultNotModified           = 91,
	FBPSteamResult_MAX             = 92,
};

enum class EBPTextFilteringContext : uint8
{
	FContext_Unknown               = 0,
	FContext_GameContent           = 1,
	FContext_Chat                  = 2,
	FContext_Name                  = 3,
	FContext_MAX                   = 4,
};

enum class ESteamUserOverlayType : uint8
{
	Steamid                        = 0,
	Chat                           = 1,
	Jointrade                      = 2,
	Stats                          = 3,
	Achievements                   = 4,
	Friendadd                      = 5,
	Friendremove                   = 6,
	Friendrequestaccept            = 7,
	Friendrequestignore            = 8,
	ESteamUserOverlayType_MAX      = 9,
};

enum class ESteamAvatarSize : uint8
{
	SteamAvatar_INVALID            = 0,
	SteamAvatar_Small              = 1,
	SteamAvatar_Medium             = 2,
	SteamAvatar_Large              = 3,
	SteamAvatar_MAX                = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
struct FBPSteamGroupOfficer
{
public:
	struct FBPUniqueNetId                        OfficerUniqueNetID;                                // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsOwner;                                          // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
struct FBPSteamWorkshopItemDetails
{
public:
	enum class EFBPSteamResult                   ResultOfRequest;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFBPWorkshopFileType              FileType;                                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CreatorAppID;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemUrl;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VotesUp;                                           // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VotesDown;                                         // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CalculatedScore;                                   // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBanned;                                           // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAcceptedForUse;                                   // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTagsTruncated;                                    // 0x4E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CreatorSteamID;                                    // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
struct FBPSteamGroupInfo
{
public:
	struct FBPUniqueNetId                        GroupID;                                           // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupTag;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOnline;                                         // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInGame;                                         // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChatting;                                       // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
struct FBPSteamWorkshopID
{
public:
	uint8                                        Pad_6BC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


