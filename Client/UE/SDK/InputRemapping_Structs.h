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
	 * Enum InputRemapping.EAxisMappingFilter
	 */
	enum class EAxisMappingFilter : uint8_t
	{
		Name          = 0,
		Key           = 1,
		Scale         = 2,
		IsNotGamepad  = 3,
		IsNotKeyboard = 4,
		IsNotMouse    = 5,
		IsNotAxis     = 6,
		MAX           = 7
	};

	/**
	 * Enum InputRemapping.EActionMappingFilter
	 */
	enum class EActionMappingFilter : uint8_t
	{
		Name          = 0,
		Key           = 1,
		Shift         = 2,
		Ctrl          = 3,
		Alt           = 4,
		Cmd           = 5,
		IsNotGamepad  = 6,
		IsNotKeyboard = 7,
		IsNotMouse    = 8,
		MAX           = 9
	};

	/**
	 * Enum InputRemapping.EMappingType
	 */
	enum class EMappingType : uint8_t
	{
		Axis   = 0,
		Action = 1,
		Auto   = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InputRemapping.AxisMappingStruct
	 * Size -> 0x0028
	 */
	struct FAxisMappingStruct
	{
	public:
		class FName                                                  MappingName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  Key;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        Scale;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InputRemapping.ActionMappingStruct
	 * Size -> 0x0028
	 */
	struct FActionMappingStruct
	{
	public:
		class FName                                                  MappingName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                  Key;                                                     // 0x0008(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         Shift;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         Ctrl;                                                    // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         Alt;                                                     // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         Cmd;                                                     // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
