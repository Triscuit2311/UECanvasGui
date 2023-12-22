#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECoverStance : uint8
{
	Both                           = 0,
	StandOnly                      = 1,
	CrouchOnly                     = 2,
	ECoverStance_MAX               = 3,
};

enum class ECoverSearchMode : uint8
{
	NonWallOnly                    = 0,
	WallOnly                       = 1,
	Both                           = 2,
	ECoverSearchMode_MAX           = 3,
};

enum class ECoverFireType : uint8
{
	None                           = 0,
	Blind                          = 1,
	Exposed                        = 2,
	ECoverFireType_MAX             = 3,
};

enum class ECoverAimType : uint8
{
	LeftOrRight                    = 0,
	Up                             = 1,
	ECoverAimType_MAX              = 2,
};

enum class ECoverDirection : uint8
{
	Left                           = 0,
	Right                          = 1,
	ECoverDirection_MAX            = 2,
};

enum class EStandCoverType : uint8
{
	Wall                           = 0,
	LeftOnly                       = 1,
	RightOnly                      = 2,
	LeftAndRight                   = 3,
	EStandCoverType_MAX            = 4,
};

enum class ECrouchCoverType : uint8
{
	Wall                           = 0,
	LeftOnly                       = 1,
	RightOnly                      = 2,
	LeftAndRight                   = 3,
	UpOnly                         = 4,
	LeftAndUp                      = 5,
	RightAndUp                     = 6,
	LeftRightAndUp                 = 7,
	ECrouchCoverType_MAX           = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct DynamicCoverSystem.CoverGenResult
struct FCoverGenResult
{
public:
	uint8                                        Pad_D9E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct DynamicCoverSystem.CoverDirection
struct FCoverDirection
{
public:
	struct FVector                               Left;                                              // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Right;                                             // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DynamicCoverSystem.CoverPointIndex
struct FCoverPointIndex
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DynamicCoverSystem.CoverRail
struct FCoverRail
{
public:
	struct FVector                               Start;                                             // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCoverPointIndex>              CoverPoints;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct DynamicCoverSystem.CoverGenSettings
struct FCoverGenSettings
{
public:
	float                                        MaxCrouchCoverHeight;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStandCoverHeight;                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchEdgeTestHeightOffset;                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchUpEdgeOffset;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StandHeightOffset;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthThreshold;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftRightEdgeExtent;                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpEdgeExtent;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftRightEdgeAngle;                                // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCoverTestDistance;                              // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexZOffset;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndentOffset;                                      // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


