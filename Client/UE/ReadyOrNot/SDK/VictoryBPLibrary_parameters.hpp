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

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
struct UTKMathFunctionLibrary_VectorRadiansToDegrees_Params
{
public:
	struct FVector                               RadVector;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
struct UTKMathFunctionLibrary_VectorDegreesToRadians_Params
{
public:
	struct FVector                               DegVector;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
struct UTKMathFunctionLibrary_SphereBoxIntersection_Params
{
public:
	struct FVector                               SphereOrigin;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxOrigin;                                         // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtent;                                         // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
struct UTKMathFunctionLibrary_SignedDistancePlanePoint_Params
{
public:
	struct FVector                               PlaneNormal;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
struct UTKMathFunctionLibrary_SetVectorLength_Params
{
public:
	struct FVector                               A;                                                 // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
struct UTKMathFunctionLibrary_SetCenterOfMassOffset_Params
{
public:
	class UPrimitiveComponent*                   Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
struct UTKMathFunctionLibrary_RoundToUpperMultiple_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Multiple;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipSelf;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
struct UTKMathFunctionLibrary_RoundToNearestMultiple_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Multiple;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
struct UTKMathFunctionLibrary_RoundToLowerMultiple_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Multiple;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipSelf;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
struct UTKMathFunctionLibrary_ProjectPointOnLine_Params
{
public:
	struct FVector                               LineOrigin;                                        // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineDirection;                                     // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
struct UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params
{
public:
	struct FVector                               LinePoint1;                                        // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint2;                                        // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
struct UTKMathFunctionLibrary_NegateVector2D_Params
{
public:
	struct FVector2D                             A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
struct UTKMathFunctionLibrary_NegateInt_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
struct UTKMathFunctionLibrary_NegateFloat_Params
{
public:
	float                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
struct UTKMathFunctionLibrary_LineToLineIntersection_Params
{
public:
	struct FVector                               IntersectionPoint;                                 // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint1;                                        // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineDir1;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint2;                                        // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineDir2;                                          // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
struct UTKMathFunctionLibrary_LineExtentBoxIntersection_Params
{
public:
	struct FBox                                  InBox;                                             // 0x0(0x1C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Start;                                             // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x28(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extent;                                            // 0x34(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x40(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x4C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitTime;                                           // 0x58(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_725[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
struct UTKMathFunctionLibrary_IsPowerOfTwo_Params
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_726[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
struct UTKMathFunctionLibrary_IsPointInsideBox_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxOrigin;                                         // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtent;                                         // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
struct UTKMathFunctionLibrary_IsMultipleOf_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Multiple;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_734[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
struct UTKMathFunctionLibrary_IsLineInsideSphere_Params
{
public:
	struct FVector                               LineStart;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineDir;                                           // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineLength;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SphereOrigin;                                      // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_742[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
struct UTKMathFunctionLibrary_IsEvenNumber_Params
{
public:
	float                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
struct UTKMathFunctionLibrary_GridSnap_Params
{
public:
	struct FVector                               A;                                                 // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Grid;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
struct UTKMathFunctionLibrary_GetVelocityAtPoint_Params
{
public:
	class UPrimitiveComponent*                   Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDebugInfo;                                     // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
struct UTKMathFunctionLibrary_GetConsoleVariableInt_Params
{
public:
	class FString                                VariableName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_761[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
struct UTKMathFunctionLibrary_GetConsoleVariableFloat_Params
{
public:
	class FString                                VariableName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_765[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
struct UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpeedUnit                        SpeedUnit;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_772[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
struct UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnchors                              CurrentAnchor;                                     // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Offsets;                                           // 0x18(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                              TargetAnchor;                                      // 0x28(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConvertedOffsets;                                  // 0x38(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
struct UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params
{
public:
	struct FVector                               ClosestPointLine1;                                 // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPointLine2;                                 // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint1;                                        // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineVec1;                                          // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint2;                                        // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineVec2;                                          // 0x3C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
struct UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params
{
public:
	struct FVector                               Line1Start;                                        // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Line1End;                                          // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Line2Start;                                        // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Line2End;                                          // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint1;                                        // 0x30(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinePoint2;                                        // 0x3C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
struct UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params
{
public:
	struct FVector                               SphereOrigin;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineOrigin;                                        // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineDir;                                           // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x28(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
struct UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineStart;                                         // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LineEnd;                                           // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
struct UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params
{
public:
	struct FVector                               PointA1;                                           // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointA2;                                           // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointB1;                                           // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointB2;                                           // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
struct UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
struct UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
struct UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
struct UVictoryBPFunctionLibrary_WidgetIsChildOf_Params
{
public:
	class UWidget*                               ChildWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               PossibleParent;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
struct UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params
{
public:
	class UWidget*                               ChildWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
struct UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params
{
public:
	class UWidget*                               ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                   ChildWidgets;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediateOnly;                                    // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
struct UVictoryBPFunctionLibrary_Visibility__GetRenderedActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        CurrentlyRenderedActors;                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinRecentTime;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
struct UVictoryBPFunctionLibrary_Visibility__GetNotRenderedActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        CurrentlyNotRenderedActors;                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinRecentTime;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_805[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
struct UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportPosition;                                  // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldOrigin;                                    // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldDirection;                                 // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_813[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
struct UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosX;                                              // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosY;                                              // 0xC(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
struct UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosX;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosY;                                              // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
struct UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosX;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosY;                                              // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_833[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
struct UVictoryBPFunctionLibrary_Viewport__EnableWorldRendering_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderTheWorld;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
struct UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params
{
public:
	class USoundClass*                           SoundClassObject;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewVolume;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_843[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
struct UVictoryBPFunctionLibrary_VictorySortIntArray_Params
{
public:
	TArray<int32>                                IntArray;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                IntArrayRef;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
struct UVictoryBPFunctionLibrary_VictorySortFloatArray_Params
{
public:
	TArray<float>                                FloatArray;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                FloatArrayRef;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
struct UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
struct UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       EventType;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_859[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_870[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_874[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_879[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x20(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
struct UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params
{
public:
	struct FVictoryInputAxis                     ToRemove;                                          // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
struct UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params
{
public:
	struct FVictoryInput                         ToRemove;                                          // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
struct UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params
{
public:
	struct FVictoryInputAxis                     Original;                                          // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FVictoryInputAxis                     NewBinding;                                        // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_897[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
struct UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params
{
public:
	struct FVictoryInput                         Original;                                          // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FVictoryInput                         NewBinding;                                        // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
struct UVictoryBPFunctionLibrary_VictoryPhysics_UpdateAngularDamping_Params
{
public:
	class UPrimitiveComponent*                   CompToUpdate;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewAngularDamping;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
struct UVictoryBPFunctionLibrary_VictoryPaths__WindowsNoEditorDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
struct UVictoryBPFunctionLibrary_VictoryPaths__Win64Dir_BinaryLocation_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
struct UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
struct UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
struct UVictoryBPFunctionLibrary_VictoryPaths__LogsDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
struct UVictoryBPFunctionLibrary_VictoryPaths__GameRootDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
struct UVictoryBPFunctionLibrary_VictoryPaths__ConfigDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
struct UVictoryBPFunctionLibrary_VictoryLoadLevelInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapFolderOffOfContent;                             // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelName;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstanceNumber;                                    // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x2C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x38(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x44(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreaming*                       ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
struct UVictoryBPFunctionLibrary_VictoryISM_GetAllVictoryISMActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AVictoryISM*>                   Out;                                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
struct UVictoryBPFunctionLibrary_VictoryISM_ConvertToVictoryISMActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AVictoryISM*>                   CreatedISMActors;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DestroyOriginalActors;                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinCountToCreateISM;                               // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
struct UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params
{
public:
	int32                                        ProcessId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
struct UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params
{
public:
	int32                                        Int;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Add;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntOut;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
struct UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params
{
public:
	int32                                        Int;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Sub;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntOut;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
struct UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVictoryInputAxis                     ReturnValue;                                       // 0x38(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
struct UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVictoryInput                         ReturnValue;                                       // 0x38(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
struct UVictoryBPFunctionLibrary_VictoryGetSoundVolume_Params
{
public:
	class USoundClass*                           SoundClassObject;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_912[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x24(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_926[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_935[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_941[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_944[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_945[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params
{
public:
	class FString                                SectionName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VariableName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94C[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
struct UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params
{
public:
	int32                                        ProcessId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
struct UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params
{
public:
	TArray<struct FVictoryInputAxis>             Bindings;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
struct UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVictoryInput>                 ActionBindings;                                    // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVictoryInputAxis>             AxisBindings;                                      // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
struct UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params
{
public:
	TArray<struct FVictoryInput>                 Bindings;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
struct UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params
{
public:
	float                                        Float;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Add;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatOut;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
struct UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params
{
public:
	float                                        Float;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sub;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatOut;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
struct UVictoryBPFunctionLibrary_VictoryCreateProc_Params
{
public:
	int32                                        ProcessId;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_979[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FullPathOfProgramToRun;                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        CommandlineArgs;                                   // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Detach;                                            // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Hidden;                                            // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OptionalWorkingDirectory;                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
struct UVictoryBPFunctionLibrary_VictoryAppendInline_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ToAppend;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AppendNewline;                                     // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_984[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
struct UVictoryBPFunctionLibrary_Victory_SecondsToHoursMinutesSeconds_Params
{
public:
	float                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrimZeroes;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
struct UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params
{
public:
	class FString                                ToClipboard;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
struct UVictoryBPFunctionLibrary_Victory_SavePixels_Params
{
public:
	class FString                                FullFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  ImagePixels;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         SaveAsBMP;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SRGB;                                              // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorString;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
struct UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params
{
public:
	class FString                                FullFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EJoyImageFormats                  ImageFormat;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Width;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  OutPixels;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
struct UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params
{
public:
	class FString                                FullFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EJoyImageFormats                  ImageFormat;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Width;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
struct UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params
{
public:
	class FString                                FromClipboard;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
struct UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params
{
public:
	class UTexture2D*                            T2D;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureWidth;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureHeight;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  PixelArray;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
struct UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params
{
public:
	class UTexture2D*                            T2D;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        X;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PixelColor;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
struct UVictoryBPFunctionLibrary_Victory_GetGRHIAdapterName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
struct UVictoryBPFunctionLibrary_Victory_GetGPUInfo_Params
{
public:
	class FString                                DeviceDescription;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Provider;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DriverVersion;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DriverDate;                                        // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
struct UVictoryBPFunctionLibrary_Victory_GetGPUBrand_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
struct UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params
{
public:
	TArray<struct FLinearColor>                  Pixels;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ImageHeight;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        X;                                                 // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FoundColor;                                        // 0x1C(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
struct UVictoryBPFunctionLibrary_Victory_AI_MoveToWithFilter_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Dest;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AcceptanceRadius;                                  // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProjectDestinationToNavigation;                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopOnOverlap;                                    // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStrafe;                                        // 0x26(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPathFollowingRequestResult       ReturnValue;                                       // 0x27(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
struct UVictoryBPFunctionLibrary_VerticalFOV_Params
{
public:
	float                                        HorizontalFOV;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
struct UVictoryBPFunctionLibrary_Vector2DInterpTo_Constant_Params
{
public:
	struct FVector2D                             Current;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
struct UVictoryBPFunctionLibrary_Vector2DInterpTo_Params
{
public:
	struct FVector2D                             Current;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
struct UVictoryBPFunctionLibrary_UTCToLocal_Params
{
public:
	struct FDateTime                             UTCTime;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LocalTime;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
struct UVictoryBPFunctionLibrary_UnloadStreamingLevel_Params
{
public:
	class ULevelStreamingDynamic*                LevelInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
struct UVictoryBPFunctionLibrary_TransformVectorToActorSpaceAngle_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InVector;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x14(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
struct UVictoryBPFunctionLibrary_TransformVectorToActorSpace_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InVector;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x14(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
struct UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestSocket_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TraceOwner;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x1C(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutImpactPoint;                                    // 0x28(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutImpactNormal;                                   // 0x34(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClosestSocketName;                                 // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketLocation;                                    // 0x48(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A47[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
struct UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestBone_Params
{
public:
	class AActor*                                TraceOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x14(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutImpactPoint;                                    // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutImpactNormal;                                   // 0x2C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClosestBoneName;                                   // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestBoneLocation;                               // 0x40(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x4C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
struct UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromSkeletalMeshSocket_Params
{
public:
	struct FVector                               TraceStart;                                        // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                Mesh;                                              // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TraceRotation;                                     // 0x20(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TraceLength;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawTraceData;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TraceDataColor;                                    // 0x3C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceDataThickness;                                // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
struct UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromCharacterSocket_Params
{
public:
	struct FVector                               TraceStart;                                        // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TheCharacter;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TraceRotation;                                     // 0x20(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TraceLength;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawTraceData;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TraceDataColor;                                    // 0x3C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceDataThickness;                                // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
struct UVictoryBPFunctionLibrary_Text_ToInt_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         UseDotForThousands;                                // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
struct UVictoryBPFunctionLibrary_Text_ToFloat_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         UseDotForThousands;                                // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
struct UVictoryBPFunctionLibrary_Text_IsNumeric_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A92[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
struct UVictoryBPFunctionLibrary_StringIsEmpty_Params
{
public:
	class FString                                Target;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
struct UVictoryBPFunctionLibrary_StringConversion__GetFloatAsStringWithPrecision_Params
{
public:
	float                                        TheFloat;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TheString;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Precision;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeLeadingZero;                                // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
struct UVictoryBPFunctionLibrary_String__ExplodeString_Params
{
public:
	TArray<class FString>                        OutputStrings;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                InputString;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrimElements;                                     // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
struct UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params
{
public:
	class FString                                A;                                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                B;                                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
struct UVictoryBPFunctionLibrary_String__CombineStrings_Params
{
public:
	class FString                                StringFirst;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringSecond;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringFirstLabel;                                  // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringSecondLabel;                                 // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
struct UVictoryBPFunctionLibrary_SpawnActorIntoLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Level;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         SpawnEvenIfColliding;                              // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
struct UVictoryBPFunctionLibrary_SetGenericTeamId_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NewTeamId;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
struct UVictoryBPFunctionLibrary_SetComponentTickRate_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
struct UVictoryBPFunctionLibrary_SetBloomIntensity_Params
{
public:
	class APostProcessVolume*                    PostProcessVolume;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
struct UVictoryBPFunctionLibrary_ServerTravel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipNotifyPlayers;                                // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
struct UVictoryBPFunctionLibrary_Selection_SelectionBox_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        SelectedActors;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AnchorPoint;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DraggedPoint;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ClassFilter;                                       // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
struct UVictoryBPFunctionLibrary_SeedRand_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
struct UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params
{
public:
	class FString                                OriginalFileName;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewName;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewAbsoluteFolderPath;                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HighResolution;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
struct UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params
{
public:
	TArray<class FString>                        FileNames;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
struct UVictoryBPFunctionLibrary_RemoveFromStreamingLevels_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelStreamInstanceInfo              LevelInstanceInfo;                                 // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
struct UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
struct UVictoryBPFunctionLibrary_RealWorldTime__GetTimePassedSincePreviousTime_Params
{
public:
	class FString                                PreviousTime;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MilliSeconds;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
struct UVictoryBPFunctionLibrary_RealWorldTime__GetDifferenceBetweenTimes_Params
{
public:
	class FString                                PreviousTime1;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreviousTime2;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MilliSeconds;                                      // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
struct UVictoryBPFunctionLibrary_RealWorldTime__GetCurrentOSTime_Params
{
public:
	int32                                        MilliSeconds;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seconds;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minutes;                                           // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hours12;                                           // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hours24;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Day;                                               // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Month;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Year;                                              // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
struct UVictoryBPFunctionLibrary_RandInt_uniDis_MT_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
struct UVictoryBPFunctionLibrary_RandInt_uniDis_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
struct UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_MT_Params
{
public:
	int32                                        IMin;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IMax;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
struct UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_Params
{
public:
	int32                                        IMin;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IMax;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
struct UVictoryBPFunctionLibrary_RandFloat_uniDis_MT_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
struct UVictoryBPFunctionLibrary_RandFloat_uniDis_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
struct UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_MT_Params
{
public:
	float                                        IMin;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IMax;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
struct UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_Params
{
public:
	float                                        IMin;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IMax;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
struct UVictoryBPFunctionLibrary_RandBool_Bernoulli_MT_Params
{
public:
	float                                        FBias;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
struct UVictoryBPFunctionLibrary_RandBool_Bernoulli_Params
{
public:
	float                                        FBias;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
struct UVictoryBPFunctionLibrary_ProjectWorldToScreenPosition_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
struct UVictoryBPFunctionLibrary_PointDistanceToPlane_Params
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
struct UVictoryBPFunctionLibrary_PlayerState_GetPlayerID_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerId;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
struct UVictoryBPFunctionLibrary_PlayerController_GetControllerID_Params
{
public:
	class APlayerController*                     ThePC;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
struct UVictoryBPFunctionLibrary_Physics__UpdateCharacterCameraToRagdollLocation_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
struct UVictoryBPFunctionLibrary_Physics__LeaveRagDoll_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetToFallingMovementMode;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightAboveRBMesh;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitLocation;                                      // 0x10(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InitRotation;                                      // 0x1C(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
struct UVictoryBPFunctionLibrary_Physics__IsRagDoll_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
struct UVictoryBPFunctionLibrary_Physics__InitializeVictoryRagDoll_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitLocation;                                      // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InitRotation;                                      // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
struct UVictoryBPFunctionLibrary_Physics__GetLocationofRagDoll_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RagdollLocation;                                   // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
struct UVictoryBPFunctionLibrary_Physics__EnterRagDoll_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
struct UVictoryBPFunctionLibrary_OptionsMenu__GetDisplayAdapterScreenResolutions_Params
{
public:
	TArray<int32>                                Widths;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Heights;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                RefreshRates;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IncludeRefreshRates;                               // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF5[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB (0xB - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
struct UVictoryBPFunctionLibrary_OperatingSystem__GetCurrentPlatform_Params
{
public:
	bool                                         Windows_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mac;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Linux;                                             // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IOS;                                               // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Android;                                           // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Android_ARM;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Android_Vulkan;                                    // 0x6(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PS4;                                               // 0x7(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         XboxOne;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HTML5;                                             // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         APPLE;                                             // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
struct UVictoryBPFunctionLibrary_Open_URL_In_Web_Browser_Params
{
public:
	class FString                                TheURL;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
struct UVictoryBPFunctionLibrary_NotEqual_Vector2DVector2D_Params
{
public:
	struct FVector2D                             A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
struct UVictoryBPFunctionLibrary_Mobility__SetSceneCompMobility_Params
{
public:
	class USceneComponent*                       SceneComp;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                NewMobility;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
struct UVictoryBPFunctionLibrary_MinOfIntArray_Params
{
public:
	TArray<int32>                                IntArray;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        IndexOfMinValue;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinValue;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
struct UVictoryBPFunctionLibrary_MinOfFloatArray_Params
{
public:
	TArray<float>                                FloatArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        IndexOfMinValue;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
struct UVictoryBPFunctionLibrary_MaxOfIntArray_Params
{
public:
	TArray<int32>                                IntArray;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        IndexOfMaxValue;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
struct UVictoryBPFunctionLibrary_MaxOfFloatArray_Params
{
public:
	TArray<float>                                FloatArray;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        IndexOfMaxValue;                                   // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
struct UVictoryBPFunctionLibrary_MapRangeClamped_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeA;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRangeB;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRangeA;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutRangeB;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
struct UVictoryBPFunctionLibrary_LoadTexture2D_FromFileByExtension_Params
{
public:
	class FString                                ImagePath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutWidth;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutHeight;                                         // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
struct UVictoryBPFunctionLibrary_LoadTexture2D_FromDDSFile_Params
{
public:
	class FString                                FullFilePath;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
struct UVictoryBPFunctionLibrary_LoadStringFromFile_Params
{
public:
	class FString                                Result;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullFilePath;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C64[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
struct UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params
{
public:
	TArray<class FString>                        StringArray;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ArraySize;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FullFilePath;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExcludeEmptyLines;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x29(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
struct UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params
{
public:
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Path;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
struct UVictoryBPFunctionLibrary_LensFlare__GetLensFlareOffsets_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LightSource;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchOffset;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawOffset;                                         // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollOffset;                                        // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C72[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
struct UVictoryBPFunctionLibrary_JoyIsKey_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x38(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ctrl;                                              // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Shift;                                             // 0x51(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Alt;                                               // 0x52(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Cmd;                                               // 0x53(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Match;                                             // 0x54(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C78[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
struct UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Set_Params
{
public:
	enum class EJoyGraphicsFullScreen            NewSetting;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
struct UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Get_Params
{
public:
	enum class EJoyGraphicsFullScreen            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
struct UVictoryBPFunctionLibrary_JoyFileIO_GetFilesInRootAndAllSubFolders_Params
{
public:
	TArray<class FString>                        Files;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RootFolderFullPath;                                // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ext;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C82[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
struct UVictoryBPFunctionLibrary_JoyFileIO_GetFiles_Params
{
public:
	TArray<class FString>                        Files;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RootFolderFullPath;                                // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ext;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
struct UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C95[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
struct UVictoryBPFunctionLibrary_IsStandAlone_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C96[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
struct UVictoryBPFunctionLibrary_IsPointOnPlane_Params
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9E[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
struct UVictoryBPFunctionLibrary_IsAlphaNumeric_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
struct UVictoryBPFunctionLibrary_InsertChildAt_Params
{
public:
	class UWidget*                               Parent;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Content;                                           // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                            ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
struct UVictoryBPFunctionLibrary_HorizontalFOV_Params
{
public:
	float                                        VerticalFOV;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
struct UVictoryBPFunctionLibrary_HideStreamingLevel_Params
{
public:
	class ULevelStreamingDynamic*                LevelInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
struct UVictoryBPFunctionLibrary_HasSubstring_Params
{
public:
	class FString                                SearchIn;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubString;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESearchCase                       SearchCase;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESearchDir                        SearchDir;                                         // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x22(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB6[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
struct UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateCap_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
struct UVictoryBPFunctionLibrary_GetWidgetFromName_Params
{
public:
	class UUserWidget*                           ParentUserWidget;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
struct UVictoryBPFunctionLibrary_GetViewportPositionHitResultByChannel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportPosition;                                  // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OutHitResult;                                      // 0x14(0x88)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
struct UVictoryBPFunctionLibrary_GetViewportPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutViewportPosition;                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
struct UVictoryBPFunctionLibrary_GetVectorRelativeLocation_Params
{
public:
	struct FVector                               ParentLocation;                                    // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ParentRotation;                                    // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ChildLocation;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
struct UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params
{
public:
	int32                                        UnixTimeStamp;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             UTCTime;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
struct UVictoryBPFunctionLibrary_GetUserDisplayAdapterBrand_Params
{
public:
	bool                                         IsAMD;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsNvidia;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsIntel;                                           // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnknown;                                         // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnknownId;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
struct UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params
{
public:
	struct FDateTime                             UTCTime;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
struct UVictoryBPFunctionLibrary_GetTimeAlive_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
struct UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params
{
public:
	class UStaticMeshComponent*                  Comp;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       VertexPositions;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
struct UVictoryBPFunctionLibrary_GetRotatorRelativeRotation_Params
{
public:
	struct FRotator                              ParentRotation;                                    // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ChildRotation;                                     // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
struct UVictoryBPFunctionLibrary_GetPlayerUniqueNetID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
struct UVictoryBPFunctionLibrary_GetPlayerStart_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerStartName;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerStart*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
struct UVictoryBPFunctionLibrary_GetObjectPath_Params
{
public:
	class UObject*                               Obj;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
struct UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        NamesOfLoadedLevels;                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
struct UVictoryBPFunctionLibrary_GetLevelInstanceInfo_Params
{
public:
	class ULevelStreamingDynamic*                LevelInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelStreamInstanceInfo              ReturnValue;                                       // 0x8(0x30)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
struct UVictoryBPFunctionLibrary_GetHeadMountedDisplayDeviceType_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
struct UVictoryBPFunctionLibrary_GetGenericTeamId_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D16[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
struct UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TopLevelOnly;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D19[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
struct UVictoryBPFunctionLibrary_GetDistanceToCollision_Params
{
public:
	class UPrimitiveComponent*                   CollisionComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Point;                                             // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPointOnCollision;                           // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D21[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
struct UVictoryBPFunctionLibrary_GetDistanceBetweenComponentSurfaces_Params
{
public:
	class UPrimitiveComponent*                   CollisionComponent1;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   CollisionComponent2;                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointOnSurface1;                                   // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointOnSurface2;                                   // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
struct UVictoryBPFunctionLibrary_GetCreationTime_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D36[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
struct UVictoryBPFunctionLibrary_GetComponentRelativeRotation_Params
{
public:
	class USceneComponent*                       ParentComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ChildComponent;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
struct UVictoryBPFunctionLibrary_GetComponentRelativeLocation_Params
{
public:
	class USceneComponent*                       ParentComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ChildComponent;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D47[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
struct UVictoryBPFunctionLibrary_GetCommandLine_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
struct UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D59[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
struct UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorCenter;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D60[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
struct UVictoryBPFunctionLibrary_GetBoxContainingWorldPoints_Params
{
public:
	TArray<struct FVector>                       Points;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extent;                                            // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
struct UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComp;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingBoneName;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D74[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
struct UVictoryBPFunctionLibrary_GetActorRelativeRotation_Params
{
public:
	class AActor*                                ParentActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ChildActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
struct UVictoryBPFunctionLibrary_GetActorRelativeLocation_Params
{
public:
	class AActor*                                ParentActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ChildActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D87[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
struct UVictoryBPFunctionLibrary_FlushPressedKeys_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
struct UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FlashContinuous;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxFlashCount;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FlashFrequencyMilliseconds;                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D98[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
struct UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params
{
public:
	class FString                                SaveDirectory;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JoyfulFileName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SaveText;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowOverWriting;                                  // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA0[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
struct UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params
{
public:
	class FString                                SaveDirectory;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JoyfulFileName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SaveText;                                          // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         AllowOverWriting;                                  // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
struct UVictoryBPFunctionLibrary_EqualEqual_Vector2DVector2D_Params
{
public:
	struct FVector2D                             A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
struct UVictoryBPFunctionLibrary_DrawCircle_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPoints;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x20(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               YAxis;                                             // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ZAxis;                                             // 0x3C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PersistentLines;                                   // 0x4C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineFromSocket_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Endpoint;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x1C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineFromCharacterSocket_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Endpoint;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x1C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineBetweenActors_Params
{
public:
	class AActor*                                StartActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EndActor;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
struct UVictoryBPFunctionLibrary_DoesMaterialHaveParameter_Params
{
public:
	class UMaterialInterface*                    Mat;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parameter;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
struct UVictoryBPFunctionLibrary_DistanceToSurface__DistaceOfPointToMeshSurface_Params
{
public:
	class AStaticMeshActor*                      TheSMA;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TestPoint;                                         // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestSurfacePoint;                               // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
struct UVictoryBPFunctionLibrary_Data__GetCharacterBoneLocations_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       BoneLocations;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
struct UVictoryBPFunctionLibrary_CreateTextureRenderTarget2D_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ClearColor;                                        // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gamma;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
struct UVictoryBPFunctionLibrary_CreatePrimitiveComponent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UPrimitiveComponent>       CompClass;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
struct UVictoryBPFunctionLibrary_CreatePlane_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E19[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlane                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
struct UVictoryBPFunctionLibrary_CreateObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                TheObjectClass;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
struct UVictoryBPFunctionLibrary_CreateMD5Hash_Params
{
public:
	class FString                                FileToHash;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileToStoreHashTo;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E39[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
struct UVictoryBPFunctionLibrary_CountOccurrancesOfSubString_Params
{
public:
	class FString                                Source;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubString;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESearchCase                       SearchCase;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
struct UVictoryBPFunctionLibrary_Conversions__VectorToRotator_Params
{
public:
	struct FVector                               TheVector;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
struct UVictoryBPFunctionLibrary_Conversions__StringToVector_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConvertedVector;                                   // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
struct UVictoryBPFunctionLibrary_Conversions__StringToRotator_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ConvertedRotator;                                  // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E77[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
struct UVictoryBPFunctionLibrary_Conversions__StringToColor_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ConvertedColor;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E82[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
struct UVictoryBPFunctionLibrary_Conversions__RotatorToVector_Params
{
public:
	struct FRotator                              TheRotator;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
struct UVictoryBPFunctionLibrary_Conversions__ColorToString_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorAsString;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
struct UVictoryBPFunctionLibrary_Conversion__FloatToRoundedInteger_Params
{
public:
	float                                        IN_Float;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
struct UVictoryBPFunctionLibrary_Component_PrestreamTextures_Params
{
public:
	class UMeshComponent*                        Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStreaming;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CinematicTextureGroups;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
struct UVictoryBPFunctionLibrary_CompareMD5Hash_Params
{
public:
	class FString                                MD5HashFile1;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MD5HashFile2;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
struct UVictoryBPFunctionLibrary_Clone__StaticMeshActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStaticMeshActor*                      ToClone;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationOffset;                                    // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
struct UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
struct UVictoryBPFunctionLibrary_CharacterMovement__SetMaxMoveSpeed_Params
{
public:
	class ACharacter*                            TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMaxMoveSpeed;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
struct UVictoryBPFunctionLibrary_Character__GetControllerRotation_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
struct UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params
{
public:
	class USceneCaptureComponent2D*              Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImagePath;                                         // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ClearColour;                                       // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F14[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
struct UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params
{
public:
	class USceneCaptureComponent2D*              Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutPixelLocation;                                  // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F24[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
struct UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params
{
public:
	class ASceneCapture2D*                       Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImagePath;                                         // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ClearColour;                                       // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F34[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
struct UVictoryBPFunctionLibrary_Capture2D_Project_Params
{
public:
	class ASceneCapture2D*                       Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutPixelLocation;                                  // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F44[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
struct UVictoryBPFunctionLibrary_Calcs__ClosestPointToSourcePoint_Params
{
public:
	struct FVector                               Source;                                            // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       OtherPoints;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPoint;                                      // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
struct UVictoryBPFunctionLibrary_Array_Sort_Params
{
public:
	TArray<int32>                                TargetArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAscendingOrder;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F64[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VariableName;                                      // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F65[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
struct UVictoryBPFunctionLibrary_Array_IsValidIndex_Params
{
public:
	TArray<int32>                                TargetArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
struct UVictoryBPFunctionLibrary_AppendMultiple_Params
{
public:
	class FString                                A;                                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                B;                                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
struct UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params
{
public:
	class AActor*                                AnimBPOwner;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TheRotation;                                       // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
struct UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params
{
public:
	class AActor*                                AnimBPOwner;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
struct UVictoryBPFunctionLibrary_AddToStreamingLevels_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelStreamInstanceInfo              LevelInstanceInfo;                                 // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
struct UVictoryBPFunctionLibrary_AddToActorRotation_Params
{
public:
	class AActor*                                TheActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              AddRot;                                            // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F96[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
struct UVictoryBPFunctionLibrary_Actor_PrestreamTextures_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStreaming;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CinematicTextureGroups;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
struct UVictoryBPFunctionLibrary_Actor__TeleportToActor_Params
{
public:
	class AActor*                                ActorToTeleport;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DestinationActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
struct UVictoryBPFunctionLibrary_Actor__GetAttachedActors_Params
{
public:
	class AActor*                                ParentActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsArray;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
struct UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
struct UVictoryBPFunctionLibrary_Accessor__GetNameAsString_Params
{
public:
	class UObject*                               TheObject;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
struct UVictoryBPFunctionLibrary_Accessor__GetCharacterSkeletalMesh_Params
{
public:
	class AActor*                                TheCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
struct UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Params
{
public:
	bool                                         MakeVisible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryBPLibrary.VictoryBPHTML.IsHTML
struct UVictoryBPHTML_IsHTML_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


