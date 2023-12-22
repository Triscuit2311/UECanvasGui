#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPurchaseType : uint8
{
	Consumable                     = 0,
	Nonconsumable                  = 1,
	Undefined                      = 2,
	PurchaseType_MAX               = 3,
};

enum class EFocusLostReason : uint8
{
	EFocusLostReason_Invalid       = 0,
	EFocusLostReason_System        = 1,
	EFocusLostReason_MAX           = 2,
};

enum class EMagicLeapMeshLOD : uint8
{
	Minimum                        = 0,
	Medium                         = 1,
	Maximum                        = 2,
	EMagicLeapMeshLOD_MAX          = 3,
};

enum class EMagicLeapMeshState : uint8
{
	New                            = 0,
	Updated                        = 1,
	Deleted                        = 2,
	Unchanged                      = 3,
	EMagicLeapMeshState_MAX        = 4,
};

enum class EMagicLeapMeshVertexColorMode : uint8
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	LOD                            = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4,
};

enum class EMagicLeapMeshType : uint8
{
	Triangles                      = 0,
	PointCloud                     = 1,
	EMagicLeapMeshType_MAX         = 2,
};

enum class EMagicLeapRaycastResultState : uint8
{
	RequestFailed                  = 0,
	NoCollision                    = 1,
	HitUnobserved                  = 2,
	HitObserved                    = 3,
	EMagicLeapRaycastResultState_MAX = 4,
};

enum class ECloudStatus : uint8
{
	CloudStatus_NotDone            = 0,
	CloudStatus_Done               = 1,
	CloudStatus_MAX                = 2,
};

enum class EMagicLeapHeadTrackingMapEvent : uint8
{
	Lost                           = 0,
	Recovered                      = 1,
	RecoveryFailed                 = 2,
	NewSession                     = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class EMagicLeapHeadTrackingMode : uint8
{
	PositionAndOrientation         = 0,
	Unavailable                    = 1,
	Unknown                        = 2,
	EMagicLeapHeadTrackingMode_MAX = 3,
};

enum class EMagicLeapHeadTrackingError : uint8
{
	None                           = 0,
	NotEnoughFeatures              = 1,
	LowLight                       = 2,
	Unknown                        = 3,
	EMagicLeapHeadTrackingError_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct MagicLeap.PurchaseItemDetails
struct FPurchaseItemDetails
{
public:
	uint8                                        Pad_188C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Price;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPurchaseType                     Type;                                              // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188F[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MagicLeap.PurchaseConfirmation
struct FPurchaseConfirmation
{
public:
	uint8                                        Pad_1892[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PackageName;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1893[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPurchaseType                     Type;                                              // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1894[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
struct FMagicLeapMeshBlockRequest
{
public:
	struct FGuid                                 BlockID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapMeshLOD                 LevelOfDetail;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1896[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
struct FMagicLeapMeshBlockInfo
{
public:
	struct FGuid                                 BlockID;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlockPosition;                                     // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              BlockOrientation;                                  // 0x1C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               BlockDimensions;                                   // 0x28(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             Timestamp;                                         // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapMeshState               BlockState;                                        // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
struct FMagicLeapTrackingMeshInfo
{
public:
	struct FTimespan                             Timestamp;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockInfo>       BlockData;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
struct FMagicLeapRaycastHitResult
{
public:
	enum class EMagicLeapRaycastResultState      HitState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitPoint;                                          // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Confidence;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserData;                                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
struct FMagicLeapRaycastQueryParams
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalFovDegrees;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CollideWithUnobserved;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UserData;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
struct FMagicLeapGraphicsClientPerformanceInfo
{
public:
	float                                        FrameStartCPUCompAcquireCPUTimeMs;                 // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameStartCPUFrameEndGPUTimeMs;                    // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameStartCPUFrameStartCPUTimeMs;                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameDurationCPUTimeMs;                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameDurationGPUTimeMs;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameInternalDurationCPUTimeMs;                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameInternalDurationGPUTimeMs;                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
struct FMagicLeapHeadTrackingState
{
public:
	enum class EMagicLeapHeadTrackingMode        Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapHeadTrackingError       Error;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Confidence;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MagicLeap.MagicLeapResult
struct FMagicLeapResult
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalInfo;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


