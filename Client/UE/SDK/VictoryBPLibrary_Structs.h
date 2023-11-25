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
	 * Enum VictoryBPLibrary.ESpeedUnit
	 */
	enum class ESpeedUnit : uint8_t
	{
		CentimeterPerSecond = 0,
		FootPerSecond       = 1,
		MeterPerSecond      = 2,
		MeterPerMinute      = 3,
		KilometerPerSecond  = 4,
		KilometerPerMinute  = 5,
		KilometerPerHour    = 6,
		MilePerHour         = 7,
		Knot                = 8,
		Mach                = 9,
		SpeedOfLight        = 10,
		YardPerSecond       = 11,
		MAX                 = 12
	};

	/**
	 * Enum VictoryBPLibrary.EJoyGraphicsFullScreen
	 */
	enum class EJoyGraphicsFullScreen : uint8_t
	{
		FullScreen                    = 0,
		WindowedFullScreen            = 1,
		WindowedFullScreenPerformance = 2,
		Max                           = 3
	};

	/**
	 * Enum VictoryBPLibrary.EVictoryHMDDevice
	 */
	enum class EVictoryHMDDevice : uint8_t
	{
		None                 = 0,
		OculusRift           = 1,
		Morpheus             = 2,
		ES2GenericStereoMesh = 3,
		SteamVR              = 4,
		GearVR               = 5,
		MAX                  = 6
	};

	/**
	 * Enum VictoryBPLibrary.EJoyImageFormats
	 */
	enum class EJoyImageFormats : uint8_t
	{
		JPG  = 0,
		PNG  = 1,
		BMP  = 2,
		ICO  = 3,
		EXR  = 4,
		ICNS = 5,
		MAX  = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VictoryBPLibrary.LevelStreamInstanceInfo
	 * Size -> 0x0030
	 */
	struct FLevelStreamInstanceInfo
	{
	public:
		class FName                                                  PackageName;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                  PackageNameToLoad;                                       // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Location;                                                // 0x0010(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                 Rotation;                                                // 0x001C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                         bShouldBeLoaded : 1;                                     // 0x0028(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShouldBeVisible : 1;                                    // 0x0028(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShouldBlockOnLoad : 1;                                  // 0x0028(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      LODIndex;                                                // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VictoryBPLibrary.VictoryInputAxis
	 * Size -> 0x0040
	 */
	struct FVictoryInputAxis
	{
	public:
		class FString                                                AxisName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                KeyAsString;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  Key;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Scale;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VictoryBPLibrary.VictoryInput
	 * Size -> 0x0040
	 */
	struct FVictoryInput
	{
	public:
		class FString                                                ActionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  Key;                                                     // 0x0010(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                                KeyAsString;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bShift : 1;                                              // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCtrl : 1;                                               // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bAlt : 1;                                                // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCmd : 1;                                                // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
