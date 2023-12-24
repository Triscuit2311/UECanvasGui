#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELuminPrivilege : uint8
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	ComputerVision                 = 3,
	WorldReconstruction            = 4,
	InAppPurchase                  = 5,
	AudioCaptureMic                = 6,
	DrmCertificates                = 7,
	Occlusion                      = 8,
	LowLatencyLightwear            = 9,
	Internet                       = 10,
	IdentityRead                   = 11,
	BackgroundDownload             = 12,
	BackgroundUpload               = 13,
	MediaDrm                       = 14,
	Media                          = 15,
	MediaMetadata                  = 16,
	PowerInfo                      = 17,
	LocalAreaNetwork               = 18,
	VoiceInput                     = 19,
	Documents                      = 20,
	ConnectBackgroundMusicService  = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead                        = 23,
	PwFoundObjRead                 = 23,
	NormalNotificationsUsage       = 24,
	MusicService                   = 25,
	ControllerPose                 = 26,
	GesturesSubscribe              = 27,
	GesturesConfig                 = 28,
	AddressBookRead                = 29,
	AddressBookWrite               = 30,
	AddressBookBasicAccess         = 31,
	CoarseLocation                 = 32,
	FineLocation                   = 33,
	HandMesh                       = 34,
	WifiStatusRead                 = 35,
	SocialConnectionsInvitesAccess = 36,
	SocialConnectionsSelectAccess  = 37,
	SecureBrowserWindow            = 38,
	BluetoothAdapterExternalApp    = 39,
	BluetoothAdapterUser           = 40,
	BluetoothGattWrite             = 41,
	ELuminPrivilege_MAX            = 42,
};

enum class ELuminFrameTimingHint : uint8
{
	Unspecified                    = 0,
	Maximum                        = 1,
	FPS_60                         = 2,
	FPS_120                        = 3,
	ELuminFrameTimingHint_MAX      = 4,
};

enum class ELuminComponentType : uint8
{
	Universe                       = 0,
	Fullscreen                     = 1,
	SearchProvider                 = 2,
	MusicService                   = 3,
	Console                        = 4,
	SystemUI                       = 5,
	ELuminComponentType_MAX        = 6,
};

enum class ELuminComponentSubElementType : uint8
{
	FileExtension                  = 0,
	MimeType                       = 1,
	Mode                           = 2,
	MusicAttribute                 = 3,
	Schema                         = 4,
	ELuminComponentSubElementType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
struct FLocalizedIconInfo
{
public:
	class FString                                LanguageCode;                                      // 0x0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        IconModelPath;                                     // 0x10(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        IconPortalPath;                                    // 0x20(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
struct FLocalizedIconInfos
{
public:
	TArray<struct FLocalizedIconInfo>            IconData;                                          // 0x0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LuminRuntimeSettings.LocalizedAppName
struct FLocalizedAppName
{
public:
	class FString                                LanguageCode;                                      // 0x0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppName;                                           // 0x10(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
struct FLuminComponentSubElement
{
public:
	enum class ELuminComponentSubElementType     ElementType;                                       // 0x0(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LuminRuntimeSettings.LuminComponentElement
struct FLuminComponentElement
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VisibleName;                                       // 0x10(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExecutableName;                                    // 0x20(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELuminComponentType               ComponentType;                                     // 0x30(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLuminComponentSubElement>     ExtraComponentSubElements;                         // 0x38(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
};

}


