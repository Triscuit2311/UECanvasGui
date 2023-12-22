#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapIdentityKey : uint8
{
	GivenName                      = 0,
	FamilyName                     = 1,
	Email                          = 2,
	Bio                            = 3,
	PhoneNumber                    = 4,
	Avatar2D                       = 5,
	Avatar3D                       = 6,
	Unknown                        = 7,
	EMagicLeapIdentityKey_MAX      = 8,
};

enum class EMagicLeapIdentityError : uint8
{
	Ok                             = 0,
	InvalidParam                   = 1,
	AllocFailed                    = 2,
	PrivilegeDenied                = 3,
	FailedToConnectToLocalService  = 4,
	FailedToConnectToCloudService  = 5,
	CloudAuthentication            = 6,
	InvalidInformationFromCloud    = 7,
	NotLoggedIn                    = 8,
	ExpiredCredentials             = 9,
	FailedToGetUserProfile         = 10,
	Unauthorized                   = 11,
	CertificateError               = 12,
	RejectedByCloud                = 13,
	AlreadyLoggedIn                = 14,
	ModifyIsNotSupported           = 15,
	NetworkError                   = 16,
	UnspecifiedFailure             = 17,
	EMagicLeapIdentityError_MAX    = 18,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
struct FMagicLeapIdentityAttribute
{
public:
	enum class EMagicLeapIdentityKey             Attribute;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1914[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


