#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EModioUIMediaDownloadEventType : uint8
{
	ModGalleryImages               = 0,
	ModCreatorAvatarImage          = 1,
	ModLogo                        = 2,
	EModioUIMediaDownloadEventType_MAX = 3,
};

enum class EModioUIModInfoEventType : uint8
{
	ListAllMods                    = 0,
	GetModInfo                     = 1,
	EModioUIModInfoEventType_MAX   = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ModioUICore.ModioNotificationParams
struct FModioNotificationParams
{
public:
	uint8                                        Pad_F25[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioErrorCode                       ErrorCode;                                         // 0xA0(0x8)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               NotificationContextObject;                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


