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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AdvancedSteamSessions.ESteamUserOverlayType
	 */
	enum class ESteamUserOverlayType : uint8_t
	{
		steamid             = 0,
		chat                = 1,
		jointrade           = 2,
		stats               = 3,
		achievements        = 4,
		friendadd           = 5,
		friendremove        = 6,
		friendrequestaccept = 7,
		friendrequestignore = 8,
		MAX                 = 9
	};

	/**
	 * Enum AdvancedSteamSessions.SteamAvatarSize
	 */
	enum class ESteamAvatarSize : uint8_t
	{
		SteamAvatarSizeSteamAvatar_INVALID = 0,
		SteamAvatarSizeSteamAvatar_Small   = 1,
		SteamAvatarSizeSteamAvatar_Medium  = 2,
		SteamAvatarSizeSteamAvatar_Large   = 3,
		SteamAvatarSizeSteamAvatar_MAX     = 4
	};

	/**
	 * Enum AdvancedSteamSessions.FBPWorkshopFileType
	 */
	enum class EFBPWorkshopFileType : uint8_t
	{
		FBPWorkshopFileTypek_EWorkshopFileTypeCommunity              = 0,
		FBPWorkshopFileTypek_EWorkshopFileTypeMicrotransaction       = 1,
		FBPWorkshopFileTypek_EWorkshopFileTypeCollection             = 2,
		FBPWorkshopFileTypek_EWorkshopFileTypeArt                    = 3,
		FBPWorkshopFileTypek_EWorkshopFileTypeVideo                  = 4,
		FBPWorkshopFileTypek_EWorkshopFileTypeScreenshot             = 5,
		FBPWorkshopFileTypek_EWorkshopFileTypeGame                   = 6,
		FBPWorkshopFileTypek_EWorkshopFileTypeSoftware               = 7,
		FBPWorkshopFileTypek_EWorkshopFileTypeConcept                = 8,
		FBPWorkshopFileTypek_EWorkshopFileTypeWebGuide               = 9,
		FBPWorkshopFileTypek_EWorkshopFileTypeIntegratedGuide        = 10,
		FBPWorkshopFileTypek_EWorkshopFileTypeMerch                  = 11,
		FBPWorkshopFileTypek_EWorkshopFileTypeControllerBinding      = 12,
		FBPWorkshopFileTypek_EWorkshopFileTypeSteamworksAccessInvite = 13,
		FBPWorkshopFileTypek_EWorkshopFileTypeSteamVideo             = 14,
		FBPWorkshopFileTypek_EWorkshopFileTypeMax                    = 15,
		FBPWorkshopFileTypek_MAX                                     = 16
	};

	/**
	 * Enum AdvancedSteamSessions.FBPSteamResult
	 */
	enum class EFBPSteamResult : uint8_t
	{
		FBPSteamResultK_EResultInvalid                                 = 0,
		FBPSteamResultk_EResultOK                                      = 1,
		FBPSteamResultk_EResultFail                                    = 2,
		FBPSteamResultk_EResultNoConnection                            = 3,
		FBPSteamResultk_EResultInvalidPassword                         = 4,
		FBPSteamResultk_EResultLoggedInElsewhere                       = 5,
		FBPSteamResultk_EResultInvalidProtocolVer                      = 6,
		FBPSteamResultk_EResultInvalidParam                            = 7,
		FBPSteamResultk_EResultFileNotFound                            = 8,
		FBPSteamResultk_EResultBusy                                    = 9,
		FBPSteamResultk_EResultInvalidState                            = 10,
		FBPSteamResultk_EResultInvalidName                             = 11,
		FBPSteamResultk_EResultInvalidEmail                            = 12,
		FBPSteamResultk_EResultDuplicateName                           = 13,
		FBPSteamResultk_EResultAccessDenied                            = 14,
		FBPSteamResultk_EResultTimeout                                 = 15,
		FBPSteamResultk_EResultBanned                                  = 16,
		FBPSteamResultk_EResultAccountNotFound                         = 17,
		FBPSteamResultk_EResultInvalidSteamID                          = 18,
		FBPSteamResultk_EResultServiceUnavailable                      = 19,
		FBPSteamResultk_EResultNotLoggedOn                             = 20,
		FBPSteamResultk_EResultPending                                 = 21,
		FBPSteamResultk_EResultEncryptionFailure                       = 22,
		FBPSteamResultk_EResultInsufficientPrivilege                   = 23,
		FBPSteamResultk_EResultLimitExceeded                           = 24,
		FBPSteamResultk_EResultRevoked                                 = 25,
		FBPSteamResultk_EResultExpired                                 = 26,
		FBPSteamResultk_EResultAlreadyRedeemed                         = 27,
		FBPSteamResultk_EResultDuplicateRequest                        = 28,
		FBPSteamResultk_EResultAlreadyOwned                            = 29,
		FBPSteamResultk_EResultIPNotFound                              = 30,
		FBPSteamResultk_EResultPersistFailed                           = 31,
		FBPSteamResultk_EResultLockingFailed                           = 32,
		FBPSteamResultk_EResultLogonSessionReplaced                    = 33,
		FBPSteamResultk_EResultConnectFailed                           = 34,
		FBPSteamResultk_EResultHandshakeFailed                         = 35,
		FBPSteamResultk_EResultIOFailure                               = 36,
		FBPSteamResultk_EResultRemoteDisconnect                        = 37,
		FBPSteamResultk_EResultShoppingCartNotFound                    = 38,
		FBPSteamResultk_EResultBlocked                                 = 39,
		FBPSteamResultk_EResultIgnored                                 = 40,
		FBPSteamResultk_EResultNoMatch                                 = 41,
		FBPSteamResultk_EResultAccountDisabled                         = 42,
		FBPSteamResultk_EResultServiceReadOnly                         = 43,
		FBPSteamResultk_EResultAccountNotFeatured                      = 44,
		FBPSteamResultk_EResultAdministratorOK                         = 45,
		FBPSteamResultk_EResultContentVersion                          = 46,
		FBPSteamResultk_EResultTryAnotherCM                            = 47,
		FBPSteamResultk_EResultPasswordRequiredToKickSession           = 48,
		FBPSteamResultk_EResultAlreadyLoggedInElsewhere                = 49,
		FBPSteamResultk_EResultSuspended                               = 50,
		FBPSteamResultk_EResultCancelled                               = 51,
		FBPSteamResultk_EResultDataCorruption                          = 52,
		FBPSteamResultk_EResultDiskFull                                = 53,
		FBPSteamResultk_EResultRemoteCallFailed                        = 54,
		FBPSteamResultk_EResultPasswordUnset                           = 55,
		FBPSteamResultk_EResultExternalAccountUnlinked                 = 56,
		FBPSteamResultk_EResultPSNTicketInvalid                        = 57,
		FBPSteamResultk_EResultExternalAccountAlreadyLinked            = 58,
		FBPSteamResultk_EResultRemoteFileConflict                      = 59,
		FBPSteamResultk_EResultIllegalPassword                         = 60,
		FBPSteamResultk_EResultSameAsPreviousValue                     = 61,
		FBPSteamResultk_EResultAccountLogonDenied                      = 62,
		FBPSteamResultk_EResultCannotUseOldPassword                    = 63,
		FBPSteamResultk_EResultInvalidLoginAuthCode                    = 64,
		FBPSteamResultk_EResultAccountLogonDeniedNoMail                = 65,
		FBPSteamResultk_EResultHardwareNotCapableOfIPT                 = 66,
		FBPSteamResultk_EResultIPTInitError                            = 67,
		FBPSteamResultk_EResultParentalControlRestricted               = 68,
		FBPSteamResultk_EResultFacebookQueryError                      = 69,
		FBPSteamResultk_EResultExpiredLoginAuthCode                    = 70,
		FBPSteamResultk_EResultIPLoginRestrictionFailed                = 71,
		FBPSteamResultk_EResultAccountLockedDown                       = 72,
		FBPSteamResultk_EResultAccountLogonDeniedVerifiedEmailRequired = 73,
		FBPSteamResultk_EResultNoMatchingURL                           = 74,
		FBPSteamResultk_EResultBadResponse                             = 75,
		FBPSteamResultk_EResultRequirePasswordReEntry                  = 76,
		FBPSteamResultk_EResultValueOutOfRange                         = 77,
		FBPSteamResultk_EResultUnexpectedError                         = 78,
		FBPSteamResultk_EResultDisabled                                = 79,
		FBPSteamResultk_EResultInvalidCEGSubmission                    = 80,
		FBPSteamResultk_EResultRestrictedDevice                        = 81,
		FBPSteamResultk_EResultRegionLocked                            = 82,
		FBPSteamResultk_EResultRateLimitExceeded                       = 83,
		FBPSteamResultk_EResultAccountLoginDeniedNeedTwoFactor         = 84,
		FBPSteamResultk_EResultItemDeleted                             = 85,
		FBPSteamResultk_EResultAccountLoginDeniedThrottle              = 86,
		FBPSteamResultk_EResultTwoFactorCodeMismatch                   = 87,
		FBPSteamResultk_EResultTwoFactorActivationCodeMismatch         = 88,
		FBPSteamResultk_EResultAccountAssociatedToMultiplePartners     = 89,
		FBPSteamResultk_EResultNotModified                             = 90,
		FBPSteamResultFBPSteamResult_MAX                               = 91
	};

	/**
	 * Enum AdvancedSteamSessions.EBPTextFilteringContext
	 */
	enum class EBPTextFilteringContext : uint8_t
	{
		FContext_Unknown     = 0,
		FContext_GameContent = 1,
		FContext_Chat        = 2,
		FContext_Name        = 3,
		FContext_MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
	 * Size -> 0x0028
	 */
	struct FBPSteamGroupOfficer
	{
	public:
		struct FBPUniqueNetId                                        OfficerUniqueNetID;                                      // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                         bIsOwner;                                                // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
	 * Size -> 0x0060
	 */
	struct FBPSteamWorkshopItemDetails
	{
	public:
		EFBPSteamResult                                              ResultOfRequest;                                         // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFBPWorkshopFileType                                         FileType;                                                // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      CreatorAppID;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      ConsumerAppID;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                Title;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                ItemUrl;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      VotesUp;                                                 // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      VotesDown;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CalculatedScore;                                         // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bBanned;                                                 // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAcceptedForUse;                                         // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bTagsTruncated;                                          // 0x004E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                CreatorSteamID;                                          // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
	 * Size -> 0x0050
	 */
	struct FBPSteamGroupInfo
	{
	public:
		struct FBPUniqueNetId                                        GroupID;                                                 // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                                GroupName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                GroupTag;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      numOnline;                                               // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      numInGame;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      numChatting;                                             // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
	 * Size -> 0x0008
	 */
	struct FBPSteamWorkshopID
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
