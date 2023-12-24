#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x130 - 0x0)
// Function Modio.ModioCommonTypesLibrary.SetSessionIdentifier
struct UModioCommonTypesLibrary_SetSessionIdentifier_Params
{
public:
	struct FModioInitializeOptions               Options;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                SessionIdentifier;                                 // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioInitializeOptions               ReturnValue;                                       // 0xA0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function Modio.ModioCommonTypesLibrary.SetPortal
struct UModioCommonTypesLibrary_SetPortal_Params
{
public:
	struct FModioInitializeOptions               Options;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioPortal                      PortalToUse;                                       // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioInitializeOptions               ReturnValue;                                       // 0x98(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.NotEqualTo
struct UModioCommonTypesLibrary_NotEqualTo_Params
{
public:
	struct FModioModID                           A;                                                 // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           B;                                                 // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E98[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function Modio.ModioCommonTypesLibrary.MakeInitializeOptions
struct UModioCommonTypesLibrary_MakeInitializeOptions_Params
{
public:
	int64                                        GameId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioEnvironment                 GameEnvironment;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioPortal                      PortalInUse;                                       // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioInitializeOptions               ReturnValue;                                       // 0x20(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioCommonTypesLibrary.MakeGameId
struct UModioCommonTypesLibrary_MakeGameId_Params
{
public:
	int64                                        GameId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioGameID                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function Modio.ModioCommonTypesLibrary.MakeAuthParams
struct UModioCommonTypesLibrary_MakeAuthParams_Params
{
public:
	class FString                                AuthToken;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailAddress;                                      // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAcceptedTOS;                                   // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioAuthenticationParams            ReturnValue;                                       // 0x28(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.MakeApiKey
struct UModioCommonTypesLibrary_MakeApiKey_Params
{
public:
	class FString                                ApiKey;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioApiKey                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioCommonTypesLibrary.GetRawValueFromModID
struct UModioCommonTypesLibrary_GetRawValueFromModID_Params
{
public:
	struct FModioModID                           In;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.EqualTo
struct UModioCommonTypesLibrary_EqualTo_Params
{
public:
	struct FModioModID                           A;                                                 // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           B;                                                 // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F02[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_UserIDToString
struct UModioCommonTypesLibrary_Conv_UserIDToString_Params
{
public:
	struct FModioUserID                          UserID;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
struct UModioCommonTypesLibrary_Conv_StringToEmailAuthCode_Params
{
public:
	class FString                                AuthCode;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioEmailAuthCode                   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
struct UModioCommonTypesLibrary_Conv_StringToEmailAddress_Params
{
public:
	class FString                                EMail;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioEmailAddress                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_ModIDToString
struct UModioCommonTypesLibrary_Conv_ModIDToString_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_GameIDToString
struct UModioCommonTypesLibrary_Conv_GameIDToString_Params
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
struct UModioCommonTypesLibrary_Conv_FileMetadataIDToString_Params
{
public:
	struct FModioFileMetadataID                  FileMetadataID;                                    // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
struct UModioCommonTypesLibrary_Conv_EmailAuthCodeToString_Params
{
public:
	struct FModioEmailAuthCode                   EmailAuthCode;                                     // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
struct UModioCommonTypesLibrary_Conv_EmailAddressToString_Params
{
public:
	struct FModioEmailAddress                    EmailAddress;                                      // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
struct UModioCommonTypesLibrary_Conv_ApiKeyToString_Params
{
public:
	struct FModioApiKey                          ApiKey;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Modio.ModioCreateModLibrary.SetVersionString
struct UModioCreateModLibrary_SetVersionString_Params
{
public:
	struct FModioCreateModFileParams             In;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioCreateModLibrary.SetTags
struct UModioCreateModLibrary_SetTags_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0xC8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Modio.ModioCreateModLibrary.SetModfilePlatforms
struct UModioCreateModLibrary_SetModfilePlatforms_Params
{
public:
	struct FModioCreateModFileParams             In;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class EModioModfilePlatform>     Platforms;                                         // 0x78(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Modio.ModioCreateModLibrary.SetModFileMetadataBlob
struct UModioCreateModLibrary_SetModFileMetadataBlob_Params
{
public:
	struct FModioCreateModFileParams             In;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                MetadataBlob;                                      // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioCreateModLibrary.SetMetadataBlob
struct UModioCreateModLibrary_SetMetadataBlob_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                MetadataBlob;                                      // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
struct UModioCreateModLibrary_SetMarkAsActiveRelease_Params
{
public:
	struct FModioCreateModFileParams             In;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bMarkAsActiveRelease;                              // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function Modio.ModioCreateModLibrary.SetInitialVisibility_DEPRECATED
struct UModioCreateModLibrary_SetInitialVisibility_DEPRECATED_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         InitialVisibility;                                 // 0xC8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function Modio.ModioCreateModLibrary.SetInitialVisibility
struct UModioCreateModLibrary_SetInitialVisibility_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioObjectVisibilityFlags       InitialVisibility;                                 // 0xC8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioCreateModLibrary.SetHomepageURL
struct UModioCreateModLibrary_SetHomepageURL_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                HomepageURL;                                       // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioCreateModLibrary.SetDescription
struct UModioCreateModLibrary_SetDescription_Params
{
public:
	struct FModioCreateModParams                 In;                                                // 0x0(0xC8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Modio.ModioCreateModLibrary.SetChangelogString
struct UModioCreateModLibrary_SetChangelogString_Params
{
public:
	struct FModioCreateModFileParams             In;                                                // 0x0(0x78)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Changelog;                                         // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioEditModLibrary.SetVisibility_DEPRECATED
struct UModioEditModLibrary_SetVisibility_DEPRECATED_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Visibility;                                        // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioEditModLibrary.SetVisibility
struct UModioEditModLibrary_SetVisibility_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioObjectVisibilityFlags       Visibility;                                        // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetTags
struct UModioEditModLibrary_SetTags_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0xD0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetSummary
struct UModioEditModLibrary_SetSummary_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Summary;                                           // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetNamePath
struct UModioEditModLibrary_SetNamePath_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                NamePath;                                          // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetName
struct UModioEditModLibrary_SetName_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetMetadataBlob
struct UModioEditModLibrary_SetMetadataBlob_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                MetadataBlob;                                      // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function Modio.ModioEditModLibrary.SetMaturityFlags
struct UModioEditModLibrary_SetMaturityFlags_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioMaturityFlags               MaturityFlags;                                     // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1019[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetLogoPath
struct UModioEditModLibrary_SetLogoPath_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                LogoPath;                                          // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetHomepageURL
struct UModioEditModLibrary_SetHomepageURL_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                HomepageURL;                                       // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioEditModLibrary.SetDescription
struct UModioEditModLibrary_SetDescription_Params
{
public:
	struct FModioEditModParams                   In;                                                // 0x0(0xD0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioErrorCodeLibrary.IsError
struct UModioErrorCodeLibrary_IsError_Params
{
public:
	struct FModioErrorCode                       Error;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1030[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioErrorCodeLibrary.GetValue
struct UModioErrorCodeLibrary_GetValue_Params
{
public:
	struct FModioErrorCode                       Error;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1035[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioErrorCodeLibrary.GetMessage
struct UModioErrorCodeLibrary_GetMessage_Params
{
public:
	struct FModioErrorCode                       Error;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioErrorConditionLibrary.ErrorCodeMatches
struct UModioErrorConditionLibrary_ErrorCodeMatches_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioErrorCondition              Condition;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1046[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function Modio.ModioExampleLibrary.ListUserSubscriptionAsync
struct UModioExampleLibrary_ListUserSubscriptionAsync_Params
{
public:
	struct FModioFilterParams                    FilterParams;                                      // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xA8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioExampleLibrary.GetLogoThumbnailSize
struct UModioExampleLibrary_GetLogoThumbnailSize_Params
{
public:
	enum class EModioLogoSize                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioExampleLibrary.GetLogoFullSize
struct UModioExampleLibrary_GetLogoFullSize_Params
{
public:
	enum class EModioLogoSize                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioExampleLibrary.GetAvatarThumbnailSize
struct UModioExampleLibrary_GetAvatarThumbnailSize_Params
{
public:
	enum class EModioAvatarSize                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.WithTags
struct UModioFilterParamsLibrary_WithTags_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        NewTags;                                           // 0xA8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.WithTag
struct UModioFilterParamsLibrary_WithTag_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0xA8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.WithoutTags
struct UModioFilterParamsLibrary_WithoutTags_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        NewTags;                                           // 0xA8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.WithoutTag
struct UModioFilterParamsLibrary_WithoutTag_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0xA8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function Modio.ModioFilterParamsLibrary.SortBy
struct UModioFilterParamsLibrary_SortBy_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioSortFieldType               ByField;                                           // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioSortDirection               ByDirection;                                       // 0xA9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioFilterParams                    ReturnValue;                                       // 0xB0(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.PagedResults
struct UModioFilterParamsLibrary_PagedResults_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        PageNumber;                                        // 0xA8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PageSize;                                          // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.NameContainsStrings
struct UModioFilterParamsLibrary_NameContainsStrings_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        SearchStrings;                                     // 0xA8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.NameContains
struct UModioFilterParamsLibrary_NameContains_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                SearchString;                                      // 0xA8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.MetadataLike
struct UModioFilterParamsLibrary_MetadataLike_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                SearchString;                                      // 0xA8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.MatchingIDs
struct UModioFilterParamsLibrary_MatchingIDs_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FModioModID>                   IDs;                                               // 0xA8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function Modio.ModioFilterParamsLibrary.MarkedLiveBefore
struct UModioFilterParamsLibrary_MarkedLiveBefore_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDateTime                             LiveBefore;                                        // 0xA8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB0(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function Modio.ModioFilterParamsLibrary.MarkedLiveAfter
struct UModioFilterParamsLibrary_MarkedLiveAfter_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDateTime                             LiveAfter;                                         // 0xA8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB0(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.IndexedResults
struct UModioFilterParamsLibrary_IndexedResults_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        StartIndex;                                        // 0xA8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ResultCount;                                       // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function Modio.ModioFilterParamsLibrary.ExcludingIDs
struct UModioFilterParamsLibrary_ExcludingIDs_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FModioModID>                   IDs;                                               // 0xA8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    ReturnValue;                                       // 0xB8(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioImageLibrary.LoadAsync
struct UModioImageLibrary_LoadAsync_Params
{
public:
	struct FModioImageWrapper                    Image;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnImageLoaded;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioImageLibrary.GetTexture
struct UModioImageLibrary_GetTexture_Params
{
public:
	struct FModioImageWrapper                    Image;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioImageLibrary.GetState
struct UModioImageLibrary_GetState_Params
{
public:
	struct FModioImageWrapper                    Image;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioImageState                  ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioImageLibrary.GetLogoSize
struct UModioImageLibrary_GetLogoSize_Params
{
public:
	class UTexture*                              Logo;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioImageLibrary.GetGallerySize
struct UModioImageLibrary_GetGallerySize_Params
{
public:
	class UTexture*                              GalleryImage;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioGallerySize                 GallerySize;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioImageLibrary.GetAvatarSize
struct UModioImageLibrary_GetAvatarSize_Params
{
public:
	class UTexture*                              Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioAvatarSize                  AvatarSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1102[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1103[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function Modio.ModioInstallationOverride.OverrideModInstallationDirectory
struct UModioInstallationOverride_OverrideModInstallationDirectory_Params
{
public:
	class FString                                NewInstallPath;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioInitializeOptions               InitParams;                                        // 0x10(0x90)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x218 (0x218 - 0x0)
// Function Modio.ModioModCollectionLibrary.GetPath
struct UModioModCollectionLibrary_GetPath_Params
{
public:
	struct FModioModCollectionEntry              Entry;                                             // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x208(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// Function Modio.ModioModCollectionLibrary.GetModState
struct UModioModCollectionLibrary_GetModState_Params
{
public:
	struct FModioModCollectionEntry              Entry;                                             // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioModState                    ReturnValue;                                       // 0x208(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3E0 (0x3E0 - 0x0)
// Function Modio.ModioModCollectionLibrary.GetModProfile
struct UModioModCollectionLibrary_GetModProfile_Params
{
public:
	struct FModioModCollectionEntry              Entry;                                             // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModInfo                         ReturnValue;                                       // 0x208(0x1D8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// Function Modio.ModioModCollectionLibrary.GetId
struct UModioModCollectionLibrary_GetId_Params
{
public:
	struct FModioModCollectionEntry              Entry;                                             // 0x0(0x208)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModID                           ReturnValue;                                       // 0x208(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Modio.ModioModDependenciesLibrary.GetPagedResult
struct UModioModDependenciesLibrary_GetPagedResult_Params
{
public:
	struct FModioModDependencyList               ModTags;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioPagedResult                     ReturnValue;                                       // 0x28(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_112E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioModDependenciesLibrary.GetDependencies
struct UModioModDependenciesLibrary_GetDependencies_Params
{
public:
	struct FModioModDependencyList               ModTags;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FModioModDependency>           ReturnValue;                                       // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Modio.ModioModInfoListLibrary.GetPagedResult
struct UModioModInfoListLibrary_GetPagedResult_Params
{
public:
	struct FModioModInfoList                     ModInfoList;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioPagedResult                     ReturnValue;                                       // 0x28(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1138[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioModInfoListLibrary.GetMods
struct UModioModInfoListLibrary_GetMods_Params
{
public:
	struct FModioModInfoList                     ModInfoList;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FModioModInfo>                 ReturnValue;                                       // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioModProgressInfoLibrary.GetTotalProgress
struct UModioModProgressInfoLibrary_GetTotalProgress_Params
{
public:
	struct FModioModProgressInfo                 Info;                                              // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EModioModProgressState            State;                                             // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1151[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUnsigned64                      ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Modio.ModioModProgressInfoLibrary.GetCurrentState
struct UModioModProgressInfoLibrary_GetCurrentState_Params
{
public:
	struct FModioModProgressInfo                 Info;                                              // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EModioModProgressState            ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioModProgressInfoLibrary.GetCurrentProgress
struct UModioModProgressInfoLibrary_GetCurrentProgress_Params
{
public:
	struct FModioModProgressInfo                 Info;                                              // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EModioModProgressState            State;                                             // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1169[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUnsigned64                      ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioModTagOptionsLibrary.GetTags
struct UModioModTagOptionsLibrary_GetTags_Params
{
public:
	struct FModioModTagOptions                   ModTags;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FModioModTagInfo>              ReturnValue;                                       // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Modio.ModioModTagOptionsLibrary.GetPagedResult
struct UModioModTagOptionsLibrary_GetPagedResult_Params
{
public:
	struct FModioModTagOptions                   ModTags;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioPagedResult                     ReturnValue;                                       // 0x28(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_117B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
struct UModioOptionalLibrary_IsSet_ModioOptionalUser_Params
{
public:
	struct FModioOptionalUser                    OptionalUser;                                      // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1183[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
struct UModioOptionalLibrary_IsSet_ModioOptionalTerms_Params
{
public:
	struct FModioOptionalTerms                   OptionalTerms;                                     // 0x0(0xD8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
struct UModioOptionalLibrary_IsSet_ModioOptionalModTagOptions_Params
{
public:
	struct FModioOptionalModTagOptions           OptionalModTagOptions;                             // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1193[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
struct UModioOptionalLibrary_IsSet_ModioOptionalModProgressInfo_Params
{
public:
	struct FModioOptionalModProgressInfo         OptionalModProgressInfo;                           // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1199[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
struct UModioOptionalLibrary_IsSet_ModioOptionalModInfoList_Params
{
public:
	struct FModioOptionalModInfoList             OptionalModInfoList;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1E8 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
struct UModioOptionalLibrary_IsSet_ModioOptionalModInfo_Params
{
public:
	struct FModioOptionalModInfo                 OptionalModInfo;                                   // 0x0(0x1E0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1E0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
struct UModioOptionalLibrary_IsSet_ModioOptionalModID_Params
{
public:
	struct FModioOptionalModID                   OptionalID;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
struct UModioOptionalLibrary_IsSet_ModioOptionalModDependencyList_Params
{
public:
	struct FModioOptionalModDependencyList       OptionalDependencyList;                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
struct UModioOptionalLibrary_IsSet_ModioOptionalImage_Params
{
public:
	struct FModioOptionalImage                   OptionalImage;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x208 (0x208 - 0x0)
// Function Modio.ModioOptionalLibrary.IsSet_ModioOptionalGameInfo
struct UModioOptionalLibrary_IsSet_ModioOptionalGameInfo_Params
{
public:
	struct FModioOptionalGameInfo                OptionalGameInfo;                                  // 0x0(0x200)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x200(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
struct UModioOptionalLibrary_GetValue_ModioOptionalUser_Params
{
public:
	struct FModioOptionalUser                    OptionalUser;                                      // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioUser                            User;                                              // 0x48(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B0 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
struct UModioOptionalLibrary_GetValue_ModioOptionalTerms_Params
{
public:
	struct FModioOptionalTerms                   OptionalTerms;                                     // 0x0(0xD8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioTerms                           Terms;                                             // 0xD8(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
struct UModioOptionalLibrary_GetValue_ModioOptionalModTagOptions_Params
{
public:
	struct FModioOptionalModTagOptions           OptionalModTagOptions;                             // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModTagOptions                   ModTagOptions;                                     // 0x30(0x28)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
struct UModioOptionalLibrary_GetValue_ModioOptionalModProgressInfo_Params
{
public:
	struct FModioOptionalModProgressInfo         OptionalModProgressInfo;                           // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModProgressInfo                 ModProgressInfo;                                   // 0x58(0x50)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
struct UModioOptionalLibrary_GetValue_ModioOptionalModInfoList_Params
{
public:
	struct FModioOptionalModInfoList             OptionalModInfoList;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModInfoList                     ModInfoList;                                       // 0x30(0x28)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C0 (0x3C0 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
struct UModioOptionalLibrary_GetValue_ModioOptionalModInfo_Params
{
public:
	struct FModioOptionalModInfo                 OptionalModInfo;                                   // 0x0(0x1E0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModInfo                         ModInfo;                                           // 0x1E0(0x1D8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3B8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
struct UModioOptionalLibrary_GetValue_ModioOptionalModID_Params
{
public:
	struct FModioOptionalModID                   OptionalID;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x10(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1218[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
struct UModioOptionalLibrary_GetValue_ModioOptionalModDependencyList_Params
{
public:
	struct FModioOptionalModDependencyList       OptionalDependencyList;                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioModDependencyList               DependencyList;                                    // 0x30(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
struct UModioOptionalLibrary_GetValue_ModioOptionalImage_Params
{
public:
	struct FModioOptionalImage                   OptionalImage;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioImageWrapper                    Image;                                             // 0x18(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1223[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x400 (0x400 - 0x0)
// Function Modio.ModioOptionalLibrary.GetValue_ModioOptionalGameInfo
struct UModioOptionalLibrary_GetValue_ModioOptionalGameInfo_Params
{
public:
	struct FModioOptionalGameInfo                OptionalGameInfo;                                  // 0x0(0x200)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModioGameInfo                        GameInfo;                                          // 0x200(0x1F8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3F8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1230[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioPopupContainer.PushPopup
struct UModioPopupContainer_PushPopup_Params
{
public:
	TSubclassOf<class UModioPopupBase>           PopupClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioPopupBase*                       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioPopupContainer.PopPopup
struct UModioPopupContainer_PopPopup_Params
{
public:
	TSubclassOf<class UModioPopupBase>           PopupClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioPopupBase*                       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Modio.ModioReportLibrary.MakeReportForUser
struct UModioReportLibrary_MakeReportForUser_Params
{
public:
	struct FModioUserID                          User;                                              // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioReportType                  Type;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1254[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReportDescription;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterName;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterContact;                                   // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioReportParams                    ReturnValue;                                       // 0x40(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Modio.ModioReportLibrary.MakeReportForMod
struct UModioReportLibrary_MakeReportForMod_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioReportType                  Type;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReportDescription;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterName;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterContact;                                   // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioReportParams                    ReturnValue;                                       // 0x40(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function Modio.ModioReportLibrary.MakeReportForGame
struct UModioReportLibrary_MakeReportForGame_Params
{
public:
	struct FModioGameID                          Game;                                              // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioReportType                  Type;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReportDescription;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterName;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterContact;                                   // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioReportParams                    ReturnValue;                                       // 0x40(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Modio.ModioSDKLibrary.RoundNumberString
struct UModioSDKLibrary_RoundNumberString_Params
{
public:
	class FText                                  InputText;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSDKLibrary.Pct_Int64Int64
struct UModioSDKLibrary_Pct_Int64Int64_Params
{
public:
	int64                                        Dividend;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Divisor;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1278[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
struct UModioSDKLibrary_IsValidSecurityCodeFormat_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSDKLibrary.IsValidEmailAddressFormat
struct UModioSDKLibrary_IsValidEmailAddressFormat_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1286[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
struct UModioSDKLibrary_GetProjectInitializeOptionsForSessionId_Params
{
public:
	class FString                                SessionID;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioInitializeOptions               ReturnValue;                                       // 0x10(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Modio.ModioSDKLibrary.GetProjectInitializeOptions
struct UModioSDKLibrary_GetProjectInitializeOptions_Params
{
public:
	struct FModioInitializeOptions               ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Modio.ModioSDKLibrary.GetProjectGameId
struct UModioSDKLibrary_GetProjectGameId_Params
{
public:
	struct FModioGameID                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioSDKLibrary.GetProjectEnvironment
struct UModioSDKLibrary_GetProjectEnvironment_Params
{
public:
	enum class EModioEnvironment                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSDKLibrary.GetProjectApiKey
struct UModioSDKLibrary_GetProjectApiKey_Params
{
public:
	struct FModioApiKey                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSDKLibrary.GetDesiredFileSizeUnit
struct UModioSDKLibrary_GetDesiredFileSizeUnit_Params
{
public:
	int64                                        Filesize;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFileSizeUnit                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Modio.ModioSDKLibrary.Filesize_ToString
struct UModioSDKLibrary_Filesize_ToString_Params
{
public:
	int64                                        Filesize;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDecimals;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDecimals;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFileSizeUnit                     Unit;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeUnitName;                                  // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Modio.ModioSDKLibrary.Conv_Int64ToText
struct UModioSDKLibrary_Conv_Int64ToText_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysSign;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGrouping;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumIntegralDigits;                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumIntegralDigits;                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSDKLibrary.Conv_Int64ToString
struct UModioSDKLibrary_Conv_Int64ToString_Params
{
public:
	int64                                        InInt;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioSubsystem.SetLogLevel
struct UModioSubsystem_SetLogLevel_Params
{
public:
	enum class EModioLogLevel                    UnrealLogLevel;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Modio.ModioSubsystem.QueryUserSubscriptions
struct UModioSubsystem_QueryUserSubscriptions_Params
{
public:
	TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Modio.ModioSubsystem.QueryUserInstallations
struct UModioSubsystem_QueryUserInstallations_Params
{
public:
	bool                                         bIncludeOutdatedMods;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;                                       // 0x8(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Modio.ModioSubsystem.QuerySystemInstallations
struct UModioSubsystem_QuerySystemInstallations_Params
{
public:
	TMap<struct FModioModID, struct FModioModCollectionEntry> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.PrioritizeTransferForMod
struct UModioSubsystem_PrioritizeTransferForMod_Params
{
public:
	struct FModioModID                           ModToPrioritize;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
struct UModioSubsystem_K2_VerifyUserAuthenticationAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
struct UModioSubsystem_K2_UnsubscribeFromModAsync_Params
{
public:
	struct FModioModID                           ModToUnsubscribeFrom;                              // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnUnsubscribeComplete;                             // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_UnmuteUserAsync
struct UModioSubsystem_K2_UnmuteUserAsync_Params
{
public:
	struct FModioUserID                          UserID;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_SubscribeToModAsync
struct UModioSubsystem_K2_SubscribeToModAsync_Params
{
public:
	struct FModioModID                           ModToSubscribeTo;                                  // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnSubscribeComplete;                               // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Modio.ModioSubsystem.K2_SubmitNewModFileForMod
struct UModioSubsystem_K2_SubmitNewModFileForMod_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioCreateModFileParams             Params;                                            // 0x8(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function Modio.ModioSubsystem.K2_SubmitNewModAsync
struct UModioSubsystem_K2_SubmitNewModAsync_Params
{
public:
	struct FModioModCreationHandle               Handle;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioCreateModParams                 Params;                                            // 0x8(0xC8)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xD0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_SubmitModRatingAsync
struct UModioSubsystem_K2_SubmitModRatingAsync_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioRating                      Rating;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1316[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0xC(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1317[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// Function Modio.ModioSubsystem.K2_SubmitModChangesAsync
struct UModioSubsystem_K2_SubmitModChangesAsync_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioEditModParams                   Params;                                            // 0x8(0xD0)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xD8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_ShutdownAsync
struct UModioSubsystem_K2_ShutdownAsync_Params
{
public:
	FDelegateProperty_                           OnShutdownComplete;                                // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
struct UModioSubsystem_K2_RequestEmailAuthCodeAsync_Params
{
public:
	struct FModioEmailAddress                    EmailAddress;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Modio.ModioSubsystem.K2_ReportContentAsync
struct UModioSubsystem_K2_ReportContentAsync_Params
{
public:
	struct FModioReportParams                    Report;                                            // 0x0(0x58)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x58(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Modio.ModioSubsystem.K2_QueryUserProfile
struct UModioSubsystem_K2_QueryUserProfile_Params
{
public:
	struct FModioOptionalUser                    ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Modio.ModioSubsystem.K2_QueryCurrentModUpdate
struct UModioSubsystem_K2_QueryCurrentModUpdate_Params
{
public:
	struct FModioOptionalModProgressInfo         ReturnValue;                                       // 0x0(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_MuteUserAsync
struct UModioSubsystem_K2_MuteUserAsync_Params
{
public:
	struct FModioUserID                          UserID;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Modio.ModioSubsystem.K2_ListUserCreatedModsAsync
struct UModioSubsystem_K2_ListUserCreatedModsAsync_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xA8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function Modio.ModioSubsystem.K2_ListAllModsAsync
struct UModioSubsystem_K2_ListAllModsAsync_Params
{
public:
	struct FModioFilterParams                    Filter;                                            // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xA8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function Modio.ModioSubsystem.K2_InitializeAsync
struct UModioSubsystem_K2_InitializeAsync_Params
{
public:
	struct FModioInitializeOptions               InitializeOptions;                                 // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnInitComplete;                                    // 0x90(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
struct UModioSubsystem_K2_GetUserMediaAvatarAsync_Params
{
public:
	enum class EModioAvatarSize                  AvatarSize;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0x4(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Modio.ModioSubsystem.K2_GetTermsOfUseAsync
struct UModioSubsystem_K2_GetTermsOfUseAsync_Params
{
public:
	enum class EModioAuthenticationProvider      Provider;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLanguage                    Locale;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1342[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0x4(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_GetMutedUsersAsync
struct UModioSubsystem_K2_GetMutedUsersAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModTagOptionsAsync
struct UModioSubsystem_K2_GetModTagOptionsAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModMediaLogoAsync
struct UModioSubsystem_K2_GetModMediaLogoAsync_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0xC(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_134D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
struct UModioSubsystem_K2_GetModMediaGalleryImageAsync_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioGallerySize                 GallerySize;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1352[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
struct UModioSubsystem_K2_GetModMediaAvatarAsync_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioAvatarSize                  AvatarSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0xC(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_135B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModInfoAsync
struct UModioSubsystem_K2_GetModInfoAsync_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModDependenciesAsync
struct UModioSubsystem_K2_GetModDependenciesAsync_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Modio.ModioSubsystem.K2_GetModCreationHandle
struct UModioSubsystem_K2_GetModCreationHandle_Params
{
public:
	struct FModioModCreationHandle               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_GetGameInfoAsync
struct UModioSubsystem_K2_GetGameInfoAsync_Params
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_ForceUninstallModAsync
struct UModioSubsystem_K2_ForceUninstallModAsync_Params
{
public:
	struct FModioModID                           ModToRemove;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
struct UModioSubsystem_K2_FetchExternalUpdatesAsync_Params
{
public:
	FDelegateProperty_                           OnFetchDone;                                       // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_EnableModManagement
struct UModioSubsystem_K2_EnableModManagement_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.K2_ClearUserDataAsync
struct UModioSubsystem_K2_ClearUserDataAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
struct UModioSubsystem_K2_AuthenticateUserExternalAsync_Params
{
public:
	struct FModioAuthenticationParams            User;                                              // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EModioAuthenticationProvider      Provider;                                          // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0x7C(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1390[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
struct UModioSubsystem_K2_AuthenticateUserEmailAsync_Params
{
public:
	struct FModioEmailAuthCode                   AuthenticationCode;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioSubsystem.K2_ArchiveModAsync
struct UModioSubsystem_K2_ArchiveModAsync_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioSubsystem.IsUsingBackgroundThread
struct UModioSubsystem_IsUsingBackgroundThread_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Modio.ModioSubsystem.IsModManagementBusy
struct UModioSubsystem_IsModManagementBusy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioSubsystem.GetLastValidationError
struct UModioSubsystem_GetLastValidationError_Params
{
public:
	TArray<struct FModioValidationError>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.Subtract
struct UModioUnsigned64Library_Subtract_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.Percentage_Unsigned64
struct UModioUnsigned64Library_Percentage_Unsigned64_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.NotEqualTo
struct UModioUnsigned64Library_NotEqualTo_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioUnsigned64Library.MakeFromComponents
struct UModioUnsigned64Library_MakeFromComponents_Params
{
public:
	int32                                        High;                                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Low;                                               // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.LessThan
struct UModioUnsigned64Library_LessThan_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.GreaterThan
struct UModioUnsigned64Library_GreaterThan_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.EqualTo
struct UModioUnsigned64Library_EqualTo_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.DivideToFloat
struct UModioUnsigned64Library_DivideToFloat_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioUnsigned64Library.DivideFloat
struct UModioUnsigned64Library_DivideFloat_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RHS;                                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.Divide
struct UModioUnsigned64Library_Divide_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
struct UModioUnsigned64Library_Conv_FModioUnsigned64ToFloat_Params
{
public:
	struct FModioUnsigned64                      In;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Modio.ModioUnsigned64Library.BreakToComponents
struct UModioUnsigned64Library_BreakToComponents_Params
{
public:
	struct FModioUnsigned64                      In;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        High;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Low;                                               // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Modio.ModioUnsigned64Library.Add
struct UModioUnsigned64Library_Add_Params
{
public:
	struct FModioUnsigned64                      LHS;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      RHS;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


