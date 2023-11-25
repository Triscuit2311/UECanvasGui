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
	 * Enum DynamicCoverSystem.ECoverStance
	 */
	enum class ECoverStance : uint8_t
	{
		Both       = 0,
		StandOnly  = 1,
		CrouchOnly = 2,
		MAX        = 3
	};

	/**
	 * Enum DynamicCoverSystem.ECoverSearchMode
	 */
	enum class ECoverSearchMode : uint8_t
	{
		NonWallOnly = 0,
		WallOnly    = 1,
		Both        = 2,
		MAX         = 3
	};

	/**
	 * Enum DynamicCoverSystem.ECoverFireType
	 */
	enum class ECoverFireType : uint8_t
	{
		None    = 0,
		Blind   = 1,
		Exposed = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamicCoverSystem.ECoverAimType
	 */
	enum class ECoverAimType : uint8_t
	{
		LeftOrRight = 0,
		Up          = 1,
		MAX         = 2
	};

	/**
	 * Enum DynamicCoverSystem.ECoverDirection
	 */
	enum class ECoverDirection : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum DynamicCoverSystem.EStandCoverType
	 */
	enum class EStandCoverType : uint8_t
	{
		Wall         = 0,
		LeftOnly     = 1,
		RightOnly    = 2,
		LeftAndRight = 3,
		MAX          = 4
	};

	/**
	 * Enum DynamicCoverSystem.ECrouchCoverType
	 */
	enum class ECrouchCoverType : uint8_t
	{
		Wall           = 0,
		LeftOnly       = 1,
		RightOnly      = 2,
		LeftAndRight   = 3,
		UpOnly         = 4,
		LeftAndUp      = 5,
		RightAndUp     = 6,
		LeftRightAndUp = 7,
		MAX            = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DynamicCoverSystem.CoverGenSettings
	 * Size -> 0x0030
	 */
	struct FCoverGenSettings
	{
	public:
		float                                                        MaxCrouchCoverHeight;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxStandCoverHeight;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CrouchEdgeTestHeightOffset;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        CrouchUpEdgeOffset;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        StandHeightOffset;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        DepthThreshold;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LeftRightEdgeExtent;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        UpEdgeExtent;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        LeftRightEdgeAngle;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        MaxCoverTestDistance;                                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        VertexZOffset;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                        IndentOffset;                                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamicCoverSystem.CoverPointIndex
	 * Size -> 0x0010
	 */
	struct FCoverPointIndex
	{
	public:
		struct FVector                                  Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                      Index;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamicCoverSystem.CoverRail
	 * Size -> 0x0038
	 */
	struct FCoverRail
	{
	public:
		struct FVector                                  Start;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  End;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Direction;                                               // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoverPointIndex>                              CoverPoints;                                             // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamicCoverSystem.CoverDirection
	 * Size -> 0x0018
	 */
	struct FCoverDirection
	{
	public:
		struct FVector                                  Left;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                  Right;                                                   // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamicCoverSystem.CoverGenResult
	 * Size -> 0x0018
	 */
	struct FCoverGenResult
	{
	public:
		unsigned char                                                UnknownData_0000[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
