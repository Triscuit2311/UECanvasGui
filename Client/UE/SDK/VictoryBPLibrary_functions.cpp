#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VictoryBPLibrary.TKMathFunctionLibrary
// (None)

class UClass* UTKMathFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TKMathFunctionLibrary");

	return Clss;
}


// TKMathFunctionLibrary VictoryBPLibrary.Default__TKMathFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTKMathFunctionLibrary* UTKMathFunctionLibrary::GetDefaultObj()
{
	static class UTKMathFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTKMathFunctionLibrary*>(UTKMathFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     RadVector                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::VectorRadiansToDegrees(const struct FVector& RadVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "VectorRadiansToDegrees");

	Params::UTKMathFunctionLibrary_VectorRadiansToDegrees_Params Parms{};

	Parms.RadVector = RadVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DegVector                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::VectorDegreesToRadians(const struct FVector& DegVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "VectorDegreesToRadians");

	Params::UTKMathFunctionLibrary_VectorDegreesToRadians_Params Parms{};

	Parms.DegVector = DegVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     SphereOrigin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxOrigin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxExtent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "SphereBoxIntersection");

	Params::UTKMathFunctionLibrary_SphereBoxIntersection_Params Parms{};

	Parms.SphereOrigin = SphereOrigin;
	Parms.SphereRadius = SphereRadius;
	Parms.BoxOrigin = BoxOrigin;
	Parms.BoxExtent = BoxExtent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     PlaneNormal                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PlanePoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTKMathFunctionLibrary::SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& PlanePoint, const struct FVector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "SignedDistancePlanePoint");

	Params::UTKMathFunctionLibrary_SignedDistancePlanePoint_Params Parms{};

	Parms.PlaneNormal = PlaneNormal;
	Parms.PlanePoint = PlanePoint;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::SetVectorLength(const struct FVector& A, float Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "SetVectorLength");

	Params::UTKMathFunctionLibrary_SetVectorLength_Params Parms{};

	Parms.A = A;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTKMathFunctionLibrary::SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "SetCenterOfMassOffset");

	Params::UTKMathFunctionLibrary_SetCenterOfMassOffset_Params Parms{};

	Parms.Target = Target;
	Parms.Offset = Offset;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Multiple                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SkipSelf                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::RoundToUpperMultiple(int32 A, int32 Multiple, bool SkipSelf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "RoundToUpperMultiple");

	Params::UTKMathFunctionLibrary_RoundToUpperMultiple_Params Parms{};

	Parms.A = A;
	Parms.Multiple = Multiple;
	Parms.SkipSelf = SkipSelf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Multiple                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::RoundToNearestMultiple(int32 A, int32 Multiple)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "RoundToNearestMultiple");

	Params::UTKMathFunctionLibrary_RoundToNearestMultiple_Params Parms{};

	Parms.A = A;
	Parms.Multiple = Multiple;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Multiple                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SkipSelf                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::RoundToLowerMultiple(int32 A, int32 Multiple, bool SkipSelf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "RoundToLowerMultiple");

	Params::UTKMathFunctionLibrary_RoundToLowerMultiple_Params Parms{};

	Parms.A = A;
	Parms.Multiple = Multiple;
	Parms.SkipSelf = SkipSelf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     LineOrigin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineDirection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ProjectPointOnLine");

	Params::UTKMathFunctionLibrary_ProjectPointOnLine_Params Parms{};

	Parms.LineOrigin = LineOrigin;
	Parms.LineDirection = LineDirection;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     LinePoint1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "PointOnWhichSideOfLineSegment");

	Params::UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params Parms{};

	Parms.LinePoint1 = LinePoint1;
	Parms.LinePoint2 = LinePoint2;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UTKMathFunctionLibrary::NegateVector2D(const struct FVector2D& A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "NegateVector2D");

	Params::UTKMathFunctionLibrary_NegateVector2D_Params Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::NegateInt(int32 A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "NegateInt");

	Params::UTKMathFunctionLibrary_NegateInt_Params Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTKMathFunctionLibrary::NegateFloat(float A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "NegateFloat");

	Params::UTKMathFunctionLibrary_NegateFloat_Params Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     IntersectionPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineDir1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineDir2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::LineToLineIntersection(struct FVector* IntersectionPoint, const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "LineToLineIntersection");

	Params::UTKMathFunctionLibrary_LineToLineIntersection_Params Parms{};

	Parms.LinePoint1 = LinePoint1;
	Parms.LineDir1 = LineDir1;
	Parms.LinePoint2 = LinePoint2;
	Parms.LineDir2 = LineDir2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntersectionPoint != nullptr)
		*IntersectionPoint = std::move(Parms.IntersectionPoint);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        InBox                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Extent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitNormal                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HitTime                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "LineExtentBoxIntersection");

	Params::UTKMathFunctionLibrary_LineExtentBoxIntersection_Params Parms{};

	Parms.InBox = InBox;
	Parms.Start = Start;
	Parms.End = End;
	Parms.Extent = Extent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (HitTime != nullptr)
		*HitTime = Parms.HitTime;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::IsPowerOfTwo(int32 X)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "IsPowerOfTwo");

	Params::UTKMathFunctionLibrary_IsPowerOfTwo_Params Parms{};

	Parms.X = X;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxOrigin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxExtent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "IsPointInsideBox");

	Params::UTKMathFunctionLibrary_IsPointInsideBox_Params Parms{};

	Parms.Point = Point;
	Parms.BoxOrigin = BoxOrigin;
	Parms.BoxExtent = BoxExtent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Multiple                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::IsMultipleOf(int32 A, int32 Multiple)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "IsMultipleOf");

	Params::UTKMathFunctionLibrary_IsMultipleOf_Params Parms{};

	Parms.A = A;
	Parms.Multiple = Multiple;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     LineStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LineLength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SphereOrigin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "IsLineInsideSphere");

	Params::UTKMathFunctionLibrary_IsLineInsideSphere_Params Parms{};

	Parms.LineStart = LineStart;
	Parms.LineDir = LineDir;
	Parms.LineLength = LineLength;
	Parms.SphereOrigin = SphereOrigin;
	Parms.SphereRadius = SphereRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::IsEvenNumber(float A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "IsEvenNumber");

	Params::UTKMathFunctionLibrary_IsEvenNumber_Params Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Grid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::GridSnap(const struct FVector& A, float Grid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "GridSnap");

	Params::UTKMathFunctionLibrary_GridSnap_Params Parms{};

	Parms.A = A;
	Parms.Grid = Grid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DrawDebugInfo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, class FName BoneName, bool DrawDebugInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "GetVelocityAtPoint");

	Params::UTKMathFunctionLibrary_GetVelocityAtPoint_Params Parms{};

	Parms.Target = Target;
	Parms.Point = Point;
	Parms.BoneName = BoneName;
	Parms.DrawDebugInfo = DrawDebugInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTKMathFunctionLibrary::GetConsoleVariableInt(const class FString& VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "GetConsoleVariableInt");

	Params::UTKMathFunctionLibrary_GetConsoleVariableInt_Params Parms{};

	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTKMathFunctionLibrary::GetConsoleVariableFloat(const class FString& VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "GetConsoleVariableFloat");

	Params::UTKMathFunctionLibrary_GetConsoleVariableFloat_Params Parms{};

	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESpeedUnit              SpeedUnit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(const struct FVector& Velocity, enum class ESpeedUnit SpeedUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ConvertPhysicsLinearVelocity");

	Params::UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.SpeedUnit = SpeedUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAnchors                    CurrentAnchor                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMargin                     Offsets                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAnchors                    TargetAnchor                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FMargin                     ConvertedOffsets                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UTKMathFunctionLibrary::ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ConvertAnchorToAnchor");

	Params::UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CurrentAnchor = CurrentAnchor;
	Parms.Offsets = Offsets;
	Parms.TargetAnchor = TargetAnchor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConvertedOffsets != nullptr)
		*ConvertedOffsets = std::move(Parms.ConvertedOffsets);

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ClosestPointLine1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestPointLine2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineVec1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineVec2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::ClosestPointsOnTwoLines(struct FVector* ClosestPointLine1, struct FVector* ClosestPointLine2, const struct FVector& LinePoint1, const struct FVector& LineVec1, const struct FVector& LinePoint2, const struct FVector& LineVec2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ClosestPointsOnTwoLines");

	Params::UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params Parms{};

	Parms.LinePoint1 = LinePoint1;
	Parms.LineVec1 = LineVec1;
	Parms.LinePoint2 = LinePoint2;
	Parms.LineVec2 = LineVec2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestPointLine1 != nullptr)
		*ClosestPointLine1 = std::move(Parms.ClosestPointLine1);

	if (ClosestPointLine2 != nullptr)
		*ClosestPointLine2 = std::move(Parms.ClosestPointLine2);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Line1Start                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line1End                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line2Start                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line2End                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTKMathFunctionLibrary::ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ClosestPointsOfLineSegments");

	Params::UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params Parms{};

	Parms.Line1Start = Line1Start;
	Parms.Line1End = Line1End;
	Parms.Line2Start = Line2Start;
	Parms.Line2End = Line2End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinePoint1 != nullptr)
		*LinePoint1 = std::move(Parms.LinePoint1);

	if (LinePoint2 != nullptr)
		*LinePoint2 = std::move(Parms.LinePoint2);

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     SphereOrigin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineOrigin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineDir                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ClosestPointOnSphereToLine");

	Params::UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params Parms{};

	Parms.SphereOrigin = SphereOrigin;
	Parms.SphereRadius = SphereRadius;
	Parms.LineOrigin = LineOrigin;
	Parms.LineDir = LineDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineEnd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTKMathFunctionLibrary::ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "ClosestPointOnLineSeqment");

	Params::UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params Parms{};

	Parms.Point = Point;
	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     PointA1                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointA2                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointB1                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointB2                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTKMathFunctionLibrary::AreLineSegmentsCrossing(const struct FVector& PointA1, const struct FVector& PointA2, const struct FVector& PointB1, const struct FVector& PointB2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TKMathFunctionLibrary", "AreLineSegmentsCrossing");

	Params::UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params Parms{};

	Parms.PointA1 = PointA1;
	Parms.PointA2 = PointA2;
	Parms.PointB1 = PointB1;
	Parms.PointB2 = PointB2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VictoryBPLibrary.VictoryBPFunctionLibrary
// (None)

class UClass* UVictoryBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryBPFunctionLibrary");

	return Clss;
}


// VictoryBPFunctionLibrary VictoryBPLibrary.Default__VictoryBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryBPFunctionLibrary* UVictoryBPFunctionLibrary::GetDefaultObj()
{
	static class UVictoryBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryBPFunctionLibrary*>(UVictoryBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InPIEWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InGameInstanceWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InEditorWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ChildWidget                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     PossibleParent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WidgetIsChildOf");

	Params::UVictoryBPFunctionLibrary_WidgetIsChildOf_Params Parms{};

	Parms.ChildWidget = ChildWidget;
	Parms.PossibleParent = PossibleParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ChildWidget                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WidgetGetParentOfClass");

	Params::UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params Parms{};

	Parms.ChildWidget = ChildWidget;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         ChildWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediateOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WidgetGetChildrenOfClass");

	Params::UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.WidgetClass = WidgetClass;
	Parms.bImmediateOnly = bImmediateOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChildWidgets != nullptr)
		*ChildWidgets = std::move(Parms.ChildWidgets);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              CurrentlyRenderedActors                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              MinRecentTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyRenderedActors, float MinRecentTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Visibility__GetRenderedActors");

	Params::UVictoryBPFunctionLibrary_Visibility__GetRenderedActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinRecentTime = MinRecentTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurrentlyRenderedActors != nullptr)
		*CurrentlyRenderedActors = std::move(Parms.CurrentlyRenderedActors);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              CurrentlyNotRenderedActors                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              MinRecentTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyNotRenderedActors, float MinRecentTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Visibility__GetNotRenderedActors");

	Params::UVictoryBPFunctionLibrary_Visibility__GetNotRenderedActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinRecentTime = MinRecentTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurrentlyNotRenderedActors != nullptr)
		*CurrentlyNotRenderedActors = std::move(Parms.CurrentlyNotRenderedActors);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldOrigin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ViewportPositionDeproject");

	Params::UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ViewportPosition = ViewportPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWorldOrigin != nullptr)
		*OutWorldOrigin = std::move(Parms.OutWorldOrigin);

	if (OutWorldDirection != nullptr)
		*OutWorldDirection = std::move(Parms.OutWorldDirection);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__SetMousePosition");

	Params::UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params Parms{};

	Parms.ThePC = ThePC;
	Parms.PosX = PosX;
	Parms.PosY = PosY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__GetMousePosition");

	Params::UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PosX != nullptr)
		*PosX = Parms.PosX;

	if (PosY != nullptr)
		*PosY = Parms.PosY;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__GetCenterOfViewport");

	Params::UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PosX != nullptr)
		*PosX = Parms.PosX;

	if (PosY != nullptr)
		*PosY = Parms.PosY;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RenderTheWorld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__EnableWorldRendering");

	Params::UVictoryBPFunctionLibrary_Viewport__EnableWorldRendering_Params Parms{};

	Parms.ThePC = ThePC;
	Parms.RenderTheWorld = RenderTheWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*                 SoundClassObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySoundVolumeChange");

	Params::UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params Parms{};

	Parms.SoundClassObject = SoundClassObject;
	Parms.NewVolume = NewVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IntArray                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      IntArrayRef                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>* IntArrayRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySortIntArray");

	Params::UVictoryBPFunctionLibrary_VictorySortIntArray_Params Parms{};

	Parms.IntArray = IntArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntArrayRef != nullptr)
		*IntArrayRef = std::move(Parms.IntArrayRef);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      FloatArray                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      FloatArrayRef                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>* FloatArrayRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySortFloatArray");

	Params::UVictoryBPFunctionLibrary_VictorySortFloatArray_Params Parms{};

	Parms.FloatArray = FloatArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatArrayRef != nullptr)
		*FloatArrayRef = std::move(Parms.FloatArrayRef);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(float& Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySimulateMouseWheel");

	Params::UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params Parms{};

	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, enum class EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySimulateKeyPress");

	Params::UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params Parms{};

	Parms.ThePC = ThePC;
	Parms.Key = Key;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Vector2D");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Vector");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_String");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Rotator");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Int");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Float");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Color");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Bool");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis           ToRemove                                                         (Parm, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryRemoveAxisKeyBind");

	Params::UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params Parms{};

	Parms.ToRemove = ToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInput               ToRemove                                                         (Parm, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryRemoveActionKeyBind");

	Params::UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params Parms{};

	Parms.ToRemove = ToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis           Original                                                         (Parm, NativeAccessSpecifierPublic)
// struct FVictoryInputAxis           NewBinding                                                       (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryReBindAxisKey");

	Params::UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params Parms{};

	Parms.Original = Original;
	Parms.NewBinding = NewBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInput               Original                                                         (Parm, NativeAccessSpecifierPublic)
// struct FVictoryInput               NewBinding                                                       (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryReBindActionKey");

	Params::UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params Parms{};

	Parms.Original = Original;
	Parms.NewBinding = NewBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         CompToUpdate                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewAngularDamping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPhysics_UpdateAngularDamping");

	Params::UVictoryBPFunctionLibrary_VictoryPhysics_UpdateAngularDamping_Params Parms{};

	Parms.CompToUpdate = CompToUpdate;
	Parms.NewAngularDamping = NewAngularDamping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__WindowsNoEditorDir");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__WindowsNoEditorDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__Win64Dir_BinaryLocation");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__Win64Dir_BinaryLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__ScreenShotsDir");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__SavedDir");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__LogsDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__LogsDir");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__LogsDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__GameRootDirectory");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__GameRootDirectory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryPaths__ConfigDir");

	Params::UVictoryBPFunctionLibrary_VictoryPaths__ConfigDir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapFolderOffOfContent                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LevelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceNumber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelStreaming*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelStreaming* UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(class UObject* WorldContextObject, const class FString& MapFolderOffOfContent, const class FString& LevelName, int32 InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryLoadLevelInstance");

	Params::UVictoryBPFunctionLibrary_VictoryLoadLevelInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapFolderOffOfContent = MapFolderOffOfContent;
	Parms.LevelName = LevelName;
	Parms.InstanceNumber = InstanceNumber;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AVictoryISM*>         Out                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryISM_GetAllVictoryISMActors");

	Params::UVictoryBPFunctionLibrary_VictoryISM_GetAllVictoryISMActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AVictoryISM*>         CreatedISMActors                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               DestroyOriginalActors                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinCountToCreateISM                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, TArray<class AVictoryISM*>* CreatedISMActors, bool DestroyOriginalActors, int32 MinCountToCreateISM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryISM_ConvertToVictoryISMActors");

	Params::UVictoryBPFunctionLibrary_VictoryISM_ConvertToVictoryISMActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.DestroyOriginalActors = DestroyOriginalActors;
	Parms.MinCountToCreateISM = MinCountToCreateISM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreatedISMActors != nullptr)
		*CreatedISMActors = std::move(Parms.CreatedISMActors);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ProcessId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int32 ProcessId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIsApplicationRunning");

	Params::UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params Parms{};

	Parms.ProcessId = ProcessId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Add                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntOut                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int32& Int, int32 Add, int32* IntOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIntPlusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params Parms{};

	Parms.Int = Int;
	Parms.Add = Add;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntOut != nullptr)
		*IntOut = Parms.IntOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Sub                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntOut                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int32& Int, int32 Sub, int32* IntOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIntMinusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params Parms{};

	Parms.Int = Int;
	Parms.Sub = Sub;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntOut != nullptr)
		*IntOut = Parms.IntOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVictoryInputAxis           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetVictoryInputAxis");

	Params::UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVictoryInput               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetVictoryInput");

	Params::UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*                 SoundClassObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::VictoryGetSoundVolume(class USoundClass* SoundClassObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetSoundVolume");

	Params::UVictoryBPFunctionLibrary_VictoryGetSoundVolume_Params Parms{};

	Parms.SoundClassObject = SoundClassObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Vector2D");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Vector");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_String");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Rotator");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Int");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Float");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Color");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Bool");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ProcessId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int32 ProcessId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetApplicationName");

	Params::UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params Parms{};

	Parms.ProcessId = ProcessId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVictoryInputAxis>   Bindings                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetAllAxisKeyBindings");

	Params::UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Bindings != nullptr)
		*Bindings = std::move(Parms.Bindings);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVictoryInput>       ActionBindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVictoryInputAxis>   AxisBindings                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetAllAxisAndActionMappingsForKey");

	Params::UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionBindings != nullptr)
		*ActionBindings = std::move(Parms.ActionBindings);

	if (AxisBindings != nullptr)
		*AxisBindings = std::move(Parms.AxisBindings);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVictoryInput>       Bindings                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetAllActionKeyBindings");

	Params::UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Bindings != nullptr)
		*Bindings = std::move(Parms.Bindings);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Add                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float& Float, float Add, float* FloatOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryFloatPlusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params Parms{};

	Parms.Float = Float;
	Parms.Add = Add;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatOut != nullptr)
		*FloatOut = Parms.FloatOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Sub                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float& Float, float Sub, float* FloatOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryFloatMinusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params Parms{};

	Parms.Float = Float;
	Parms.Sub = Sub;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatOut != nullptr)
		*FloatOut = Parms.FloatOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ProcessId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullPathOfProgramToRun                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              CommandlineArgs                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Detach                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Hidden                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OptionalWorkingDirectory                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryCreateProc(int32* ProcessId, const class FString& FullPathOfProgramToRun, const TArray<class FString>& CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const class FString& OptionalWorkingDirectory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryCreateProc");

	Params::UVictoryBPFunctionLibrary_VictoryCreateProc_Params Parms{};

	Parms.FullPathOfProgramToRun = FullPathOfProgramToRun;
	Parms.CommandlineArgs = CommandlineArgs;
	Parms.Detach = Detach;
	Parms.Hidden = Hidden;
	Parms.Priority = Priority;
	Parms.OptionalWorkingDirectory = OptionalWorkingDirectory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProcessId != nullptr)
		*ProcessId = Parms.ProcessId;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToAppend                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AppendNewline                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryAppendInline(class FString& String, const class FString& ToAppend, class FString* Result, bool AppendNewline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryAppendInline");

	Params::UVictoryBPFunctionLibrary_VictoryAppendInline_Params Parms{};

	Parms.String = String;
	Parms.ToAppend = ToAppend;
	Parms.AppendNewline = AppendNewline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TrimZeroes                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SecondsToHoursMinutesSeconds");

	Params::UVictoryBPFunctionLibrary_Victory_SecondsToHoursMinutesSeconds_Params Parms{};

	Parms.Seconds = Seconds;
	Parms.TrimZeroes = TrimZeroes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ToClipboard                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const class FString& ToClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SaveStringToOSClipboard");

	Params::UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params Parms{};

	Parms.ToClipboard = ToClipboard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ImagePixels                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               SaveAsBMP                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SRGB                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorString                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_SavePixels(const class FString& FullFilePath, int32 Width, int32 Height, TArray<struct FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, class FString* ErrorString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SavePixels");

	Params::UVictoryBPFunctionLibrary_Victory_SavePixels_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.ImagePixels = ImagePixels;
	Parms.SaveAsBMP = SaveAsBMP;
	Parms.SRGB = SRGB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ErrorString != nullptr)
		*ErrorString = std::move(Parms.ErrorString);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EJoyImageFormats        ImageFormat                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        OutPixels                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height, TArray<struct FLinearColor>* OutPixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_LoadTexture2D_FromFile_Pixels");

	Params::UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ImageFormat = ImageFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (OutPixels != nullptr)
		*OutPixels = std::move(Parms.OutPixels);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EJoyImageFormats        ImageFormat                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_LoadTexture2D_FromFile");

	Params::UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ImageFormat = ImageFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FromClipboard                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(class FString* FromClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetStringFromOSClipboard");

	Params::UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromClipboard != nullptr)
		*FromClipboard = std::move(Parms.FromClipboard);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture2D*                  T2D                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TextureWidth                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TextureHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        PixelArray                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32* TextureWidth, int32* TextureHeight, TArray<struct FLinearColor>* PixelArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetPixelsArrayFromT2D");

	Params::UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params Parms{};

	Parms.T2D = T2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TextureWidth != nullptr)
		*TextureWidth = Parms.TextureWidth;

	if (TextureHeight != nullptr)
		*TextureHeight = Parms.TextureHeight;

	if (PixelArray != nullptr)
		*PixelArray = std::move(Parms.PixelArray);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*                  T2D                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                PixelColor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, struct FLinearColor* PixelColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetPixelFromT2D");

	Params::UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params Parms{};

	Parms.T2D = T2D;
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PixelColor != nullptr)
		*PixelColor = std::move(Parms.PixelColor);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetGRHIAdapterName");

	Params::UVictoryBPFunctionLibrary_Victory_GetGRHIAdapterName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      DeviceDescription                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Provider                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DriverVersion                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DriverDate                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_GetGPUInfo(class FString* DeviceDescription, class FString* Provider, class FString* DriverVersion, class FString* DriverDate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetGPUInfo");

	Params::UVictoryBPFunctionLibrary_Victory_GetGPUInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceDescription != nullptr)
		*DeviceDescription = std::move(Parms.DeviceDescription);

	if (Provider != nullptr)
		*Provider = std::move(Parms.Provider);

	if (DriverVersion != nullptr)
		*DriverVersion = std::move(Parms.DriverVersion);

	if (DriverDate != nullptr)
		*DriverDate = std::move(Parms.DriverDate);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::Victory_GetGPUBrand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetGPUBrand");

	Params::UVictoryBPFunctionLibrary_Victory_GetGPUBrand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>        Pixels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ImageHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                FoundColor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(TArray<struct FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, struct FLinearColor* FoundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_Get_Pixel");

	Params::UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params Parms{};

	Parms.Pixels = Pixels;
	Parms.ImageHeight = ImageHeight;
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundColor != nullptr)
		*FoundColor = std::move(Parms.FoundColor);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Dest                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProjectDestinationToNavigation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanStrafe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingRequestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingRequestResult UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(class APawn* Pawn, struct FVector& Dest, TSubclassOf<class UNavigationQueryFilter> FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_AI_MoveToWithFilter");

	Params::UVictoryBPFunctionLibrary_Victory_AI_MoveToWithFilter_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Dest = Dest;
	Parms.FilterClass = FilterClass;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bCanStrafe = bCanStrafe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              HorizontalFOV                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AspectRatio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::VerticalFOV(float HorizontalFOV, float AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VerticalFOV");

	Params::UVictoryBPFunctionLibrary_VerticalFOV_Params Parms{};

	Parms.HorizontalFOV = HorizontalFOV;
	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Vector2DInterpTo_Constant");

	Params::UVictoryBPFunctionLibrary_Vector2DInterpTo_Constant_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.DeltaTime = DeltaTime;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Vector2DInterpTo");

	Params::UVictoryBPFunctionLibrary_Vector2DInterpTo_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.DeltaTime = DeltaTime;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   UTCTime                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   LocalTime                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::UTCToLocal(struct FDateTime& UTCTime, struct FDateTime* LocalTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "UTCToLocal");

	Params::UVictoryBPFunctionLibrary_UTCToLocal_Params Parms{};

	Parms.UTCTime = UTCTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalTime != nullptr)
		*LocalTime = std::move(Parms.LocalTime);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingDynamic*      LevelInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "UnloadStreamingLevel");

	Params::UVictoryBPFunctionLibrary_UnloadStreamingLevel_Params Parms{};

	Parms.LevelInstance = LevelInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(class AActor* Actor, struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "TransformVectorToActorSpaceAngle");

	Params::UVictoryBPFunctionLibrary_TransformVectorToActorSpaceAngle_Params Parms{};

	Parms.Actor = Actor;
	Parms.InVector = InVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(class AActor* Actor, struct FVector& InVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "TransformVectorToActorSpace");

	Params::UVictoryBPFunctionLibrary_TransformVectorToActorSpace_Params Parms{};

	Parms.Actor = Actor;
	Parms.InVector = InVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TraceOwner                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutImpactPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutImpactNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ClosestSocketName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SocketLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, struct FVector& TraceStart, struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Traces__CharacterMeshTrace___ClosestSocket");

	Params::UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestSocket_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TraceOwner = TraceOwner;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = std::move(Parms.OutImpactPoint);

	if (OutImpactNormal != nullptr)
		*OutImpactNormal = std::move(Parms.OutImpactNormal);

	if (ClosestSocketName != nullptr)
		*ClosestSocketName = Parms.ClosestSocketName;

	if (SocketLocation != nullptr)
		*SocketLocation = std::move(Parms.SocketLocation);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TraceOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceStart                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutImpactPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutImpactNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ClosestBoneName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestBoneLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, struct FVector& TraceStart, struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Traces__CharacterMeshTrace___ClosestBone");

	Params::UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestBone_Params Parms{};

	Parms.TraceOwner = TraceOwner;
	Parms.TraceStart = TraceStart;
	Parms.TraceEnd = TraceEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = std::move(Parms.OutImpactPoint);

	if (OutImpactNormal != nullptr)
		*OutImpactNormal = std::move(Parms.OutImpactNormal);

	if (ClosestBoneName != nullptr)
		*ClosestBoneName = Parms.ClosestBoneName;

	if (ClosestBoneLocation != nullptr)
		*ClosestBoneLocation = std::move(Parms.ClosestBoneLocation);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    TraceRotation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              TraceLength                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DrawTraceData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceDataColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TraceDataThickness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class USkeletalMeshComponent* Mesh, struct FRotator& TraceRotation, float TraceLength, class FName Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "TraceData__GetTraceDataFromSkeletalMeshSocket");

	Params::UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromSkeletalMeshSocket_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.TraceRotation = TraceRotation;
	Parms.TraceLength = TraceLength;
	Parms.Socket = Socket;
	Parms.DrawTraceData = DrawTraceData;
	Parms.TraceDataColor = TraceDataColor;
	Parms.TraceDataThickness = TraceDataThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    TraceRotation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              TraceLength                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DrawTraceData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                TraceDataColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TraceDataThickness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class AActor* TheCharacter, struct FRotator& TraceRotation, float TraceLength, class FName Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "TraceData__GetTraceDataFromCharacterSocket");

	Params::UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromCharacterSocket_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.TraceRotation = TraceRotation;
	Parms.TraceLength = TraceLength;
	Parms.Socket = Socket;
	Parms.DrawTraceData = DrawTraceData;
	Parms.TraceDataColor = TraceDataColor;
	Parms.TraceDataThickness = TraceDataThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               UseDotForThousands                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::Text_ToInt(class FText& Text, bool UseDotForThousands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Text_ToInt");

	Params::UVictoryBPFunctionLibrary_Text_ToInt_Params Parms{};

	Parms.Text = Text;
	Parms.UseDotForThousands = UseDotForThousands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               UseDotForThousands                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::Text_ToFloat(class FText& Text, bool UseDotForThousands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Text_ToFloat");

	Params::UVictoryBPFunctionLibrary_Text_ToFloat_Params Parms{};

	Parms.Text = Text;
	Parms.UseDotForThousands = UseDotForThousands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Text_IsNumeric(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Text_IsNumeric");

	Params::UVictoryBPFunctionLibrary_Text_IsNumeric_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Target                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::StringIsEmpty(const class FString& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "StringIsEmpty");

	Params::UVictoryBPFunctionLibrary_StringIsEmpty_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              TheFloat                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TheString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Precision                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeLeadingZero                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(float TheFloat, class FString* TheString, int32 Precision, bool IncludeLeadingZero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "StringConversion__GetFloatAsStringWithPrecision");

	Params::UVictoryBPFunctionLibrary_StringConversion__GetFloatAsStringWithPrecision_Params Parms{};

	Parms.TheFloat = TheFloat;
	Parms.Precision = Precision;
	Parms.IncludeLeadingZero = IncludeLeadingZero;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TheString != nullptr)
		*TheString = std::move(Parms.TheString);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              OutputStrings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      InputString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Separator                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Limit                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTrimElements                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::String__ExplodeString(TArray<class FString>* OutputStrings, const class FString& InputString, const class FString& Separator, int32 Limit, bool bTrimElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "String__ExplodeString");

	Params::UVictoryBPFunctionLibrary_String__ExplodeString_Params Parms{};

	Parms.InputString = InputString;
	Parms.Separator = Separator;
	Parms.Limit = Limit;
	Parms.bTrimElements = bTrimElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputStrings != nullptr)
		*OutputStrings = std::move(Parms.OutputStrings);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "String__CombineStrings_Multi");

	Params::UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringFirst                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringSecond                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Separator                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringFirstLabel                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringSecondLabel                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "String__CombineStrings");

	Params::UVictoryBPFunctionLibrary_String__CombineStrings_Params Parms{};

	Parms.StringFirst = StringFirst;
	Parms.StringSecond = StringSecond;
	Parms.Separator = Separator;
	Parms.StringFirstLabel = StringFirstLabel;
	Parms.StringSecondLabel = StringSecondLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               SpawnEvenIfColliding                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::SpawnActorIntoLevel(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class FName Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "SpawnActorIntoLevel");

	Params::UVictoryBPFunctionLibrary_SpawnActorIntoLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.Level = Level;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.SpawnEvenIfColliding = SpawnEvenIfColliding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              NewTeamId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::SetGenericTeamId(class AActor* Target, uint8 NewTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "SetGenericTeamId");

	Params::UVictoryBPFunctionLibrary_SetGenericTeamId_Params Parms{};

	Parms.Target = Target;
	Parms.NewTeamId = NewTeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::SetComponentTickRate(class UActorComponent* Component, float Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "SetComponentTickRate");

	Params::UVictoryBPFunctionLibrary_SetComponentTickRate_Params Parms{};

	Parms.Component = Component;
	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APostProcessVolume*          PostProcessVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Intensity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "SetBloomIntensity");

	Params::UVictoryBPFunctionLibrary_SetBloomIntensity_Params Parms{};

	Parms.PostProcessVolume = PostProcessVolume;
	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSkipNotifyPlayers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ServerTravel");

	Params::UVictoryBPFunctionLibrary_ServerTravel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapName = MapName;
	Parms.bSkipNotifyPlayers = bSkipNotifyPlayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              SelectedActors                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AnchorPoint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   DraggedPoint                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ClassFilter                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>* SelectedActors, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, TSubclassOf<class AActor> ClassFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Selection_SelectionBox");

	Params::UVictoryBPFunctionLibrary_Selection_SelectionBox_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AnchorPoint = AnchorPoint;
	Parms.DraggedPoint = DraggedPoint;
	Parms.ClassFilter = ClassFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectedActors != nullptr)
		*SelectedActors = std::move(Parms.SelectedActors);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::SeedRandWithTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "seedRandWithTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::SeedRandWithEntropy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "seedRandWithEntropy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Seed                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::SeedRand(int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "seedRand");

	Params::UVictoryBPFunctionLibrary_SeedRand_Params Parms{};

	Parms.Seed = Seed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OriginalFileName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewAbsoluteFolderPath                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HighResolution                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ScreenShots_Rename_Move_Most_Recent");

	Params::UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params Parms{};

	Parms.NewName = NewName;
	Parms.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
	Parms.HighResolution = HighResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OriginalFileName != nullptr)
		*OriginalFileName = std::move(Parms.OriginalFileName);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              FileNames                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "SaveGameObject_GetAllSaveSlotFileNames");

	Params::UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FileNames != nullptr)
		*FileNames = std::move(Parms.FileNames);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Rendering__UnFreezeGameRendering");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Rendering__FreezeGameRendering");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelStreamInstanceInfo    LevelInstanceInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(class UObject* WorldContextObject, struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RemoveFromStreamingLevels");

	Params::UVictoryBPFunctionLibrary_RemoveFromStreamingLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelInstanceInfo = LevelInstanceInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RemoveAllWidgetsOfClass");

	Params::UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PreviousTime                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MilliSeconds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Seconds                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Minutes                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Hours                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(const class FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RealWorldTime__GetTimePassedSincePreviousTime");

	Params::UVictoryBPFunctionLibrary_RealWorldTime__GetTimePassedSincePreviousTime_Params Parms{};

	Parms.PreviousTime = PreviousTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MilliSeconds != nullptr)
		*MilliSeconds = Parms.MilliSeconds;

	if (Seconds != nullptr)
		*Seconds = Parms.Seconds;

	if (Minutes != nullptr)
		*Minutes = Parms.Minutes;

	if (Hours != nullptr)
		*Hours = Parms.Hours;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      PreviousTime1                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PreviousTime2                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MilliSeconds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Seconds                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Minutes                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Hours                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(const class FString& PreviousTime1, const class FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RealWorldTime__GetDifferenceBetweenTimes");

	Params::UVictoryBPFunctionLibrary_RealWorldTime__GetDifferenceBetweenTimes_Params Parms{};

	Parms.PreviousTime1 = PreviousTime1;
	Parms.PreviousTime2 = PreviousTime2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MilliSeconds != nullptr)
		*MilliSeconds = Parms.MilliSeconds;

	if (Seconds != nullptr)
		*Seconds = Parms.Seconds;

	if (Minutes != nullptr)
		*Minutes = Parms.Minutes;

	if (Hours != nullptr)
		*Hours = Parms.Hours;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MilliSeconds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Seconds                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Minutes                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Hours12                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Hours24                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Day                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Month                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Year                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(int32* MilliSeconds, int32* Seconds, int32* Minutes, int32* Hours12, int32* Hours24, int32* Day, int32* Month, int32* Year)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RealWorldTime__GetCurrentOSTime");

	Params::UVictoryBPFunctionLibrary_RealWorldTime__GetCurrentOSTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MilliSeconds != nullptr)
		*MilliSeconds = Parms.MilliSeconds;

	if (Seconds != nullptr)
		*Seconds = Parms.Seconds;

	if (Minutes != nullptr)
		*Minutes = Parms.Minutes;

	if (Hours12 != nullptr)
		*Hours12 = Parms.Hours12;

	if (Hours24 != nullptr)
		*Hours24 = Parms.Hours24;

	if (Day != nullptr)
		*Day = Parms.Day;

	if (Month != nullptr)
		*Month = Parms.Month;

	if (Year != nullptr)
		*Year = Parms.Year;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::RandInt_uniDis_MT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandInt_uniDis_MT");

	Params::UVictoryBPFunctionLibrary_RandInt_uniDis_MT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::RandInt_uniDis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandInt_uniDis");

	Params::UVictoryBPFunctionLibrary_RandInt_uniDis_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              IMin                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IMax                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(int32 IMin, int32 IMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandInt_MINMAX_uniDis_MT");

	Params::UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_MT_Params Parms{};

	Parms.IMin = IMin;
	Parms.IMax = IMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              IMin                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IMax                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(int32 IMin, int32 IMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandInt_MINMAX_uniDis");

	Params::UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_Params Parms{};

	Parms.IMin = IMin;
	Parms.IMax = IMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::RandFloat_uniDis_MT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandFloat_uniDis_MT");

	Params::UVictoryBPFunctionLibrary_RandFloat_uniDis_MT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::RandFloat_uniDis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandFloat_uniDis");

	Params::UVictoryBPFunctionLibrary_RandFloat_uniDis_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              IMin                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              IMax                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(float IMin, float IMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandFloat_MINMAX_uniDis_MT");

	Params::UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_MT_Params Parms{};

	Parms.IMin = IMin;
	Parms.IMax = IMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              IMin                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              IMax                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(float IMin, float IMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandFloat_MINMAX_uniDis");

	Params::UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_Params Parms{};

	Parms.IMin = IMin;
	Parms.IMax = IMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FBias                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(float FBias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandBool_Bernoulli_MT");

	Params::UVictoryBPFunctionLibrary_RandBool_Bernoulli_MT_Params Parms{};

	Parms.FBias = FBias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FBias                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli(float FBias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RandBool_Bernoulli");

	Params::UVictoryBPFunctionLibrary_RandBool_Bernoulli_Params Parms{};

	Parms.FBias = FBias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ProjectWorldToScreenPosition");

	Params::UVictoryBPFunctionLibrary_ProjectWorldToScreenPosition_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlane                      Plane                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::PointDistanceToPlane(struct FPlane& Plane, const struct FVector& Point, float* Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "PointDistanceToPlane");

	Params::UVictoryBPFunctionLibrary_PointDistanceToPlane_Params Parms{};

	Parms.Plane = Plane;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerId                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(class APlayerController* ThePC, int32* PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "PlayerState_GetPlayerID");

	Params::UVictoryBPFunctionLibrary_PlayerState_GetPlayerID_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerId != nullptr)
		*PlayerId = Parms.PlayerId;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::PlayerController_GetControllerID(class APlayerController* ThePC, int32* ControllerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "PlayerController_GetControllerID");

	Params::UVictoryBPFunctionLibrary_PlayerController_GetControllerID_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ControllerId != nullptr)
		*ControllerId = Parms.ControllerId;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HeightOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__UpdateCharacterCameraToRagdollLocation");

	Params::UVictoryBPFunctionLibrary_Physics__UpdateCharacterCameraToRagdollLocation_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.HeightOffset = HeightOffset;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SetToFallingMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HeightAboveRBMesh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InitLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InitRotation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, struct FVector& InitLocation, struct FRotator& InitRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__LeaveRagDoll");

	Params::UVictoryBPFunctionLibrary_Physics__LeaveRagDoll_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.SetToFallingMovementMode = SetToFallingMovementMode;
	Parms.HeightAboveRBMesh = HeightAboveRBMesh;
	Parms.InitLocation = InitLocation;
	Parms.InitRotation = InitRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__IsRagDoll(class AActor* TheCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__IsRagDoll");

	Params::UVictoryBPFunctionLibrary_Physics__IsRagDoll_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InitLocation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InitRotation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__InitializeVictoryRagDoll");

	Params::UVictoryBPFunctionLibrary_Physics__InitializeVictoryRagDoll_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InitLocation != nullptr)
		*InitLocation = std::move(Parms.InitLocation);

	if (InitRotation != nullptr)
		*InitRotation = std::move(Parms.InitRotation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     RagdollLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__GetLocationofRagDoll");

	Params::UVictoryBPFunctionLibrary_Physics__GetLocationofRagDoll_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RagdollLocation != nullptr)
		*RagdollLocation = std::move(Parms.RagdollLocation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Physics__EnterRagDoll(class AActor* TheCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Physics__EnterRagDoll");

	Params::UVictoryBPFunctionLibrary_Physics__EnterRagDoll_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Widths                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Heights                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      RefreshRates                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               IncludeRefreshRates                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>* Widths, TArray<int32>* Heights, TArray<int32>* RefreshRates, bool IncludeRefreshRates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "OptionsMenu__GetDisplayAdapterScreenResolutions");

	Params::UVictoryBPFunctionLibrary_OptionsMenu__GetDisplayAdapterScreenResolutions_Params Parms{};

	Parms.IncludeRefreshRates = IncludeRefreshRates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Widths != nullptr)
		*Widths = std::move(Parms.Widths);

	if (Heights != nullptr)
		*Heights = std::move(Parms.Heights);

	if (RefreshRates != nullptr)
		*RefreshRates = std::move(Parms.RefreshRates);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Windows_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Mac                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Linux                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IOS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Android                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Android_ARM                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Android_Vulkan                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               PS4                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               XboxOne                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HTML5                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               APPLE                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XboxOne, bool* HTML5, bool* APPLE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "OperatingSystem__GetCurrentPlatform");

	Params::UVictoryBPFunctionLibrary_OperatingSystem__GetCurrentPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Windows_ != nullptr)
		*Windows_ = Parms.Windows_;

	if (Mac != nullptr)
		*Mac = Parms.Mac;

	if (Linux != nullptr)
		*Linux = Parms.Linux;

	if (IOS != nullptr)
		*IOS = Parms.IOS;

	if (Android != nullptr)
		*Android = Parms.Android;

	if (Android_ARM != nullptr)
		*Android_ARM = Parms.Android_ARM;

	if (Android_Vulkan != nullptr)
		*Android_Vulkan = Parms.Android_Vulkan;

	if (PS4 != nullptr)
		*PS4 = Parms.PS4;

	if (XboxOne != nullptr)
		*XboxOne = Parms.XboxOne;

	if (HTML5 != nullptr)
		*HTML5 = Parms.HTML5;

	if (APPLE != nullptr)
		*APPLE = Parms.APPLE;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      TheURL                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(const class FString& TheURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Open_URL_In_Web_Browser");

	Params::UVictoryBPFunctionLibrary_Open_URL_In_Web_Browser_Params Parms{};

	Parms.TheURL = TheURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ErrorTolerance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "NotEqual_Vector2DVector2D");

	Params::UVictoryBPFunctionLibrary_NotEqual_Vector2DVector2D_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ErrorTolerance = ErrorTolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             SceneComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComponentMobility      NewMobility                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, enum class EComponentMobility NewMobility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Mobility__SetSceneCompMobility");

	Params::UVictoryBPFunctionLibrary_Mobility__SetSceneCompMobility_Params Parms{};

	Parms.SceneComp = SceneComp;
	Parms.NewMobility = NewMobility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      IntArray                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMinValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::MinOfIntArray(TArray<int32>& IntArray, int32* IndexOfMinValue, int32* MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "MinOfIntArray");

	Params::UVictoryBPFunctionLibrary_MinOfIntArray_Params Parms{};

	Parms.IntArray = IntArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = Parms.IndexOfMinValue;

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      FloatArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMinValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::MinOfFloatArray(TArray<float>& FloatArray, int32* IndexOfMinValue, float* MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "MinOfFloatArray");

	Params::UVictoryBPFunctionLibrary_MinOfFloatArray_Params Parms{};

	Parms.FloatArray = FloatArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = Parms.IndexOfMinValue;

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      IntArray                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMaxValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::MaxOfIntArray(TArray<int32>& IntArray, int32* IndexOfMaxValue, int32* MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "MaxOfIntArray");

	Params::UVictoryBPFunctionLibrary_MaxOfIntArray_Params Parms{};

	Parms.IntArray = IntArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = Parms.IndexOfMaxValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      FloatArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMaxValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::MaxOfFloatArray(TArray<float>& FloatArray, int32* IndexOfMaxValue, float* MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "MaxOfFloatArray");

	Params::UVictoryBPFunctionLibrary_MaxOfFloatArray_Params Parms{};

	Parms.FloatArray = FloatArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = Parms.IndexOfMaxValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeA                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeB                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRangeA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRangeB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "MapRangeClamped");

	Params::UVictoryBPFunctionLibrary_MapRangeClamped_Params Parms{};

	Parms.Value = Value;
	Parms.InRangeA = InRangeA;
	Parms.InRangeB = InRangeB;
	Parms.OutRangeA = OutRangeA;
	Parms.OutRangeB = OutRangeB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Loops_ResetBPRunawayCounter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ImagePath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWidth                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutHeight                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(const class FString& ImagePath, bool* IsValid, int32* OutWidth, int32* OutHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadTexture2D_FromFileByExtension");

	Params::UVictoryBPFunctionLibrary_LoadTexture2D_FromFileByExtension_Params Parms{};

	Parms.ImagePath = ImagePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWidth != nullptr)
		*OutWidth = Parms.OutWidth;

	if (OutHeight != nullptr)
		*OutHeight = Parms.OutHeight;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(const class FString& FullFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadTexture2D_FromDDSFile");

	Params::UVictoryBPFunctionLibrary_LoadTexture2D_FromDDSFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::LoadStringFromFile(class FString* Result, const class FString& FullFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadStringFromFile");

	Params::UVictoryBPFunctionLibrary_LoadStringFromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              StringArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ArraySize                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ExcludeEmptyLines                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<class FString>* StringArray, int32* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadStringArrayFromFile");

	Params::UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ExcludeEmptyLines = ExcludeEmptyLines;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StringArray != nullptr)
		*StringArray = std::move(Parms.StringArray);

	if (ArraySize != nullptr)
		*ArraySize = Parms.ArraySize;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Path                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(TSubclassOf<class UObject> ObjectClass, class FName Path, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadObjectFromAssetPath");

	Params::UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params Parms{};

	Parms.ObjectClass = ObjectClass;
	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      LightSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchOffset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YawOffset                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RollOffset                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LensFlare__GetLensFlareOffsets");

	Params::UVictoryBPFunctionLibrary_LensFlare__GetLensFlareOffsets_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.LightSource = LightSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PitchOffset != nullptr)
		*PitchOffset = Parms.PitchOffset;

	if (YawOffset != nullptr)
		*YawOffset = Parms.YawOffset;

	if (RollOffset != nullptr)
		*RollOffset = Parms.RollOffset;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Ctrl                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Shift                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Alt                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Cmd                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Match                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::JoyIsKey(struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "JoyIsKey");

	Params::UVictoryBPFunctionLibrary_JoyIsKey_Params Parms{};

	Parms.KeyEvent = KeyEvent;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Ctrl != nullptr)
		*Ctrl = Parms.Ctrl;

	if (Shift != nullptr)
		*Shift = Parms.Shift;

	if (Alt != nullptr)
		*Alt = Parms.Alt;

	if (Cmd != nullptr)
		*Cmd = Parms.Cmd;

	if (Match != nullptr)
		*Match = Parms.Match;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EJoyGraphicsFullScreen  NewSetting                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(enum class EJoyGraphicsFullScreen NewSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "JoyGraphicsSettings__FullScreen_Set");

	Params::UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Set_Params Parms{};

	Parms.NewSetting = NewSetting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EJoyGraphicsFullScreen  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EJoyGraphicsFullScreen UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "JoyGraphicsSettings__FullScreen_Get");

	Params::UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Get_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Files                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      RootFolderFullPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ext                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "JoyFileIO_GetFilesInRootAndAllSubFolders");

	Params::UVictoryBPFunctionLibrary_JoyFileIO_GetFilesInRootAndAllSubFolders_Params Parms{};

	Parms.RootFolderFullPath = RootFolderFullPath;
	Parms.Ext = Ext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Files != nullptr)
		*Files = std::move(Parms.Files);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Files                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      RootFolderFullPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ext                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "JoyFileIO_GetFiles");

	Params::UVictoryBPFunctionLibrary_JoyFileIO_GetFiles_Params Parms{};

	Parms.RootFolderFullPath = RootFolderFullPath;
	Parms.Ext = Ext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Files != nullptr)
		*Files = std::move(Parms.Files);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsWidgetOfClassInViewport");

	Params::UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsStandAlone(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsStandAlone");

	Params::UVictoryBPFunctionLibrary_IsStandAlone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlane                      Plane                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsPointOnPlane(struct FPlane& Plane, const struct FVector& Point, float Tolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsPointOnPlane");

	Params::UVictoryBPFunctionLibrary_IsPointOnPlane_Params Parms{};

	Parms.Plane = Plane;
	Parms.Point = Point;
	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsAlphaNumeric");

	Params::UVictoryBPFunctionLibrary_IsAlphaNumeric_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(class UWidget* Parent, int32 Index, class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "InsertChildAt");

	Params::UVictoryBPFunctionLibrary_InsertChildAt_Params Parms{};

	Parms.Parent = Parent;
	Parms.Index = Index;
	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              VerticalFOV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AspectRatio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::HorizontalFOV(float VerticalFOV, float AspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "HorizontalFOV");

	Params::UVictoryBPFunctionLibrary_HorizontalFOV_Params Parms{};

	Parms.VerticalFOV = VerticalFOV;
	Parms.AspectRatio = AspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingDynamic*      LevelInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "HideStreamingLevel");

	Params::UVictoryBPFunctionLibrary_HideStreamingLevel_Params Parms{};

	Parms.LevelInstance = LevelInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SearchIn                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchCase             SearchCase                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchDir              SearchDir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::HasSubstring(const class FString& SearchIn, const class FString& SubString, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "HasSubstring");

	Params::UVictoryBPFunctionLibrary_HasSubstring_Params Parms{};

	Parms.SearchIn = SearchIn;
	Parms.SubString = SubString;
	Parms.SearchCase = SearchCase;
	Parms.SearchDir = SearchDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GraphicsSettings__SetFrameRateToBeUnbound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GraphicsSettings__SetFrameRateCap");

	Params::UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateCap_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ParentUserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(class UUserWidget* ParentUserWidget, class FName& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetWidgetFromName");

	Params::UVictoryBPFunctionLibrary_GetWidgetFromName_Params Parms{};

	Parms.ParentUserWidget = ParentUserWidget;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionChannel       TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTraceComplex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetViewportPositionHitResultByChannel");

	Params::UVictoryBPFunctionLibrary_GetViewportPositionHitResultByChannel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ViewportPosition = ViewportPosition;
	Parms.TraceChannel = TraceChannel;
	Parms.bTraceComplex = bTraceComplex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHitResult != nullptr)
		*OutHitResult = std::move(Parms.OutHitResult);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutViewportPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::GetViewportPosition(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetViewportPosition");

	Params::UVictoryBPFunctionLibrary_GetViewportPosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutViewportPosition != nullptr)
		*OutViewportPosition = std::move(Parms.OutViewportPosition);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ParentLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ParentRotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ChildLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetVectorRelativeLocation");

	Params::UVictoryBPFunctionLibrary_GetVectorRelativeLocation_Params Parms{};

	Parms.ParentLocation = ParentLocation;
	Parms.ParentRotation = ParentRotation;
	Parms.ChildLocation = ChildLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              UnixTimeStamp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   UTCTime                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int32 UnixTimeStamp, struct FDateTime* UTCTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetUTCFromUnixTimeStamp");

	Params::UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params Parms{};

	Parms.UnixTimeStamp = UnixTimeStamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UTCTime != nullptr)
		*UTCTime = std::move(Parms.UTCTime);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               IsAMD                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsNvidia                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsIntel                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUnknown                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UnknownId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int32* UnknownId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetUserDisplayAdapterBrand");

	Params::UVictoryBPFunctionLibrary_GetUserDisplayAdapterBrand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsAMD != nullptr)
		*IsAMD = Parms.IsAMD;

	if (IsNvidia != nullptr)
		*IsNvidia = Parms.IsNvidia;

	if (IsIntel != nullptr)
		*IsIntel = Parms.IsIntel;

	if (IsUnknown != nullptr)
		*IsUnknown = Parms.IsUnknown;

	if (UnknownId != nullptr)
		*UnknownId = Parms.UnknownId;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   UTCTime                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::GetUnixTimeStamp(struct FDateTime& UTCTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetUnixTimeStamp");

	Params::UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params Parms{};

	Parms.UTCTime = UTCTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::GetTimeAlive(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetTimeAlive");

	Params::UVictoryBPFunctionLibrary_GetTimeAlive_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Comp                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             VertexPositions                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetStaticMeshVertexLocations");

	Params::UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params Parms{};

	Parms.Comp = Comp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexPositions != nullptr)
		*VertexPositions = std::move(Parms.VertexPositions);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    ParentRotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ChildRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetRotatorRelativeRotation");

	Params::UVictoryBPFunctionLibrary_GetRotatorRelativeRotation_Params Parms{};

	Parms.ParentRotation = ParentRotation;
	Parms.ChildRotation = ChildRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::GetPlayerUniqueNetID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetPlayerUniqueNetID");

	Params::UVictoryBPFunctionLibrary_GetPlayerUniqueNetID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerStartName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerStart*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerStart* UVictoryBPFunctionLibrary::GetPlayerStart(class UObject* WorldContextObject, const class FString& PlayerStartName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetPlayerStart");

	Params::UVictoryBPFunctionLibrary_GetPlayerStart_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerStartName = PlayerStartName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Obj                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVictoryBPFunctionLibrary::GetObjectPath(class UObject* Obj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetObjectPath");

	Params::UVictoryBPFunctionLibrary_GetObjectPath_Params Parms{};

	Parms.Obj = Obj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              NamesOfLoadedLevels                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetNamesOfLoadedLevels");

	Params::UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesOfLoadedLevels != nullptr)
		*NamesOfLoadedLevels = std::move(Parms.NamesOfLoadedLevels);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingDynamic*      LevelInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelStreamInstanceInfo    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetLevelInstanceInfo");

	Params::UVictoryBPFunctionLibrary_GetLevelInstanceInfo_Params Parms{};

	Parms.LevelInstance = LevelInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetHeadMountedDisplayDeviceType");

	Params::UVictoryBPFunctionLibrary_GetHeadMountedDisplayDeviceType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UVictoryBPFunctionLibrary::GetGenericTeamId(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetGenericTeamId");

	Params::UVictoryBPFunctionLibrary_GetGenericTeamId_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetFirstWidgetOfClass");

	Params::UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         CollisionComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestPointOnCollision                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, struct FVector& Point, struct FVector* ClosestPointOnCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetDistanceToCollision");

	Params::UVictoryBPFunctionLibrary_GetDistanceToCollision_Params Parms{};

	Parms.CollisionComponent = CollisionComponent;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestPointOnCollision != nullptr)
		*ClosestPointOnCollision = std::move(Parms.ClosestPointOnCollision);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         CollisionComponent1                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         CollisionComponent2                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointOnSurface1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointOnSurface2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetDistanceBetweenComponentSurfaces");

	Params::UVictoryBPFunctionLibrary_GetDistanceBetweenComponentSurfaces_Params Parms{};

	Parms.CollisionComponent1 = CollisionComponent1;
	Parms.CollisionComponent2 = CollisionComponent2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointOnSurface1 != nullptr)
		*PointOnSurface1 = std::move(Parms.PointOnSurface1);

	if (PointOnSurface2 != nullptr)
		*PointOnSurface2 = std::move(Parms.PointOnSurface2);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::GetCreationTime(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetCreationTime");

	Params::UVictoryBPFunctionLibrary_GetCreationTime_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*             ParentComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             ChildComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetComponentRelativeRotation");

	Params::UVictoryBPFunctionLibrary_GetComponentRelativeRotation_Params Parms{};

	Parms.ParentComponent = ParentComponent;
	Parms.ChildComponent = ChildComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*             ParentComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             ChildComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetComponentRelativeLocation");

	Params::UVictoryBPFunctionLibrary_GetComponentRelativeLocation_Params Parms{};

	Parms.ParentComponent = ParentComponent;
	Parms.ChildComponent = ChildComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::GetCommandLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetCommandLine");

	Params::UVictoryBPFunctionLibrary_GetCommandLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FVector& Center, float Radius, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetClosestActorOfClassInRadiusOfLocation");

	Params::UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.Center = Center;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorCenter                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetClosestActorOfClassInRadiusOfActor");

	Params::UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.ActorCenter = ActorCenter;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             Points                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Center                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Extent                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(TArray<struct FVector>& Points, struct FVector* Center, struct FVector* Extent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetBoxContainingWorldPoints");

	Params::UVictoryBPFunctionLibrary_GetBoxContainingWorldPoints_Params Parms{};

	Parms.Points = Points;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Extent != nullptr)
		*Extent = std::move(Parms.Extent);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartingBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                BoneNames                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, class FName StartingBoneName, TArray<class FName>* BoneNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetAllBoneNamesBelowBone");

	Params::UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params Parms{};

	Parms.SkeletalMeshComp = SkeletalMeshComp;
	Parms.StartingBoneName = StartingBoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneNames != nullptr)
		*BoneNames = std::move(Parms.BoneNames);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ParentActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ChildActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetActorRelativeRotation");

	Params::UVictoryBPFunctionLibrary_GetActorRelativeRotation_Params Parms{};

	Parms.ParentActor = ParentActor;
	Parms.ChildActor = ChildActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ParentActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ChildActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetActorRelativeLocation");

	Params::UVictoryBPFunctionLibrary_GetActorRelativeLocation_Params Parms{};

	Parms.ParentActor = ParentActor;
	Parms.ChildActor = ChildActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::FlushPressedKeys(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FlushPressedKeys");

	Params::UVictoryBPFunctionLibrary_FlushPressedKeys_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FlashContinuous                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxFlashCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FlashFrequencyMilliseconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FlashGameOnTaskBar");

	Params::UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params Parms{};

	Parms.PC = PC;
	Parms.FlashContinuous = FlashContinuous;
	Parms.MaxFlashCount = MaxFlashCount;
	Parms.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JoyfulFileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveText                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowOverWriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FileIO__SaveStringTextToFile");

	Params::UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params Parms{};

	Parms.SaveDirectory = SaveDirectory;
	Parms.JoyfulFileName = JoyfulFileName;
	Parms.SaveText = SaveText;
	Parms.AllowOverWriting = AllowOverWriting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JoyfulFileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SaveText                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               AllowOverWriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const TArray<class FString>& SaveText, bool AllowOverWriting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FileIO__SaveStringArrayToFile");

	Params::UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params Parms{};

	Parms.SaveDirectory = SaveDirectory;
	Parms.JoyfulFileName = JoyfulFileName;
	Parms.SaveText = SaveText;
	Parms.AllowOverWriting = AllowOverWriting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ErrorTolerance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "EqualEqual_Vector2DVector2D");

	Params::UVictoryBPFunctionLibrary_EqualEqual_Vector2DVector2D_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ErrorTolerance = ErrorTolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPoints                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                LineColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     YAxis                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ZAxis                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               PersistentLines                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32 NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "DrawCircle");

	Params::UVictoryBPFunctionLibrary_DrawCircle_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.Thickness = Thickness;
	Parms.LineColor = LineColor;
	Parms.YAxis = YAxis;
	Parms.ZAxis = ZAxis;
	Parms.Duration = Duration;
	Parms.PersistentLines = PersistentLines;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Endpoint                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                LineColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, struct FVector& Endpoint, class FName Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Draw__Thick3DLineFromSocket");

	Params::UVictoryBPFunctionLibrary_Draw__Thick3DLineFromSocket_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Endpoint = Endpoint;
	Parms.Socket = Socket;
	Parms.LineColor = LineColor;
	Parms.Thickness = Thickness;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Endpoint                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                LineColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, struct FVector& Endpoint, class FName Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Draw__Thick3DLineFromCharacterSocket");

	Params::UVictoryBPFunctionLibrary_Draw__Thick3DLineFromCharacterSocket_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.Endpoint = Endpoint;
	Parms.Socket = Socket;
	Parms.LineColor = LineColor;
	Parms.Thickness = Thickness;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      StartActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EndActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                LineColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Draw__Thick3DLineBetweenActors");

	Params::UVictoryBPFunctionLibrary_Draw__Thick3DLineBetweenActors_Params Parms{};

	Parms.StartActor = StartActor;
	Parms.EndActor = EndActor;
	Parms.LineColor = LineColor;
	Parms.Thickness = Thickness;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Mat                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Parameter                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(class UMaterialInterface* Mat, class FName Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "DoesMaterialHaveParameter");

	Params::UVictoryBPFunctionLibrary_DoesMaterialHaveParameter_Params Parms{};

	Parms.Mat = Mat;
	Parms.Parameter = Parameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AStaticMeshActor*            TheSMA                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TestPoint                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestSurfacePoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, struct FVector& TestPoint, struct FVector* ClosestSurfacePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "DistanceToSurface__DistaceOfPointToMeshSurface");

	Params::UVictoryBPFunctionLibrary_DistanceToSurface__DistaceOfPointToMeshSurface_Params Parms{};

	Parms.TheSMA = TheSMA;
	Parms.TestPoint = TestPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestSurfacePoint != nullptr)
		*ClosestSurfacePoint = std::move(Parms.ClosestSurfacePoint);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             BoneLocations                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Data__GetCharacterBoneLocations");

	Params::UVictoryBPFunctionLibrary_Data__GetCharacterBoneLocations_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneLocations != nullptr)
		*BoneLocations = std::move(Parms.BoneLocations);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ClearColor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Gamma                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(int32 Width, int32 Height, const struct FLinearColor& ClearColor, float Gamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreateTextureRenderTarget2D");

	Params::UVictoryBPFunctionLibrary_CreateTextureRenderTarget2D_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.ClearColor = ClearColor;
	Parms.Gamma = Gamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPrimitiveComponent>CompClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UVictoryBPFunctionLibrary::CreatePrimitiveComponent(class UObject* WorldContextObject, TSubclassOf<class UPrimitiveComponent> CompClass, class FName Name, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreatePrimitiveComponent");

	Params::UVictoryBPFunctionLibrary_CreatePrimitiveComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CompClass = CompClass;
	Parms.Name = Name;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlane UVictoryBPFunctionLibrary::CreatePlane(const struct FVector& Center, const struct FVector& Normal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreatePlane");

	Params::UVictoryBPFunctionLibrary_CreatePlane_Params Parms{};

	Parms.Center = Center;
	Parms.Normal = Normal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      TheObjectClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVictoryBPFunctionLibrary::CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreateObject");

	Params::UVictoryBPFunctionLibrary_CreateObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TheObjectClass = TheObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FileToHash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FileToStoreHashTo                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CreateMD5Hash(const class FString& FileToHash, const class FString& FileToStoreHashTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreateMD5Hash");

	Params::UVictoryBPFunctionLibrary_CreateMD5Hash_Params Parms{};

	Parms.FileToHash = FileToHash;
	Parms.FileToStoreHashTo = FileToStoreHashTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchCase             SearchCase                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(const class FString& Source, const class FString& SubString, enum class ESearchCase SearchCase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CountOccurrancesOfSubString");

	Params::UVictoryBPFunctionLibrary_CountOccurrancesOfSubString_Params Parms{};

	Parms.Source = Source;
	Parms.SubString = SubString;
	Parms.SearchCase = SearchCase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     TheVector                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::Conversions__VectorToRotator(struct FVector& TheVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__VectorToRotator");

	Params::UVictoryBPFunctionLibrary_Conversions__VectorToRotator_Params Parms{};

	Parms.TheVector = TheVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ConvertedVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Conversions__StringToVector(const class FString& String, struct FVector* ConvertedVector, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__StringToVector");

	Params::UVictoryBPFunctionLibrary_Conversions__StringToVector_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConvertedVector != nullptr)
		*ConvertedVector = std::move(Parms.ConvertedVector);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ConvertedRotator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Conversions__StringToRotator(const class FString& String, struct FRotator* ConvertedRotator, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__StringToRotator");

	Params::UVictoryBPFunctionLibrary_Conversions__StringToRotator_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConvertedRotator != nullptr)
		*ConvertedRotator = std::move(Parms.ConvertedRotator);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ConvertedColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Conversions__StringToColor(const class FString& String, struct FLinearColor* ConvertedColor, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__StringToColor");

	Params::UVictoryBPFunctionLibrary_Conversions__StringToColor_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConvertedColor != nullptr)
		*ConvertedColor = std::move(Parms.ConvertedColor);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    TheRotator                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::Conversions__RotatorToVector(struct FRotator& TheRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__RotatorToVector");

	Params::UVictoryBPFunctionLibrary_Conversions__RotatorToVector_Params Parms{};

	Parms.TheRotator = TheRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ColorAsString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Conversions__ColorToString(struct FLinearColor& Color, class FString* ColorAsString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversions__ColorToString");

	Params::UVictoryBPFunctionLibrary_Conversions__ColorToString_Params Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ColorAsString != nullptr)
		*ColorAsString = std::move(Parms.ColorAsString);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              IN_Float                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(float IN_Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Conversion__FloatToRoundedInteger");

	Params::UVictoryBPFunctionLibrary_Conversion__FloatToRoundedInteger_Params Parms{};

	Parms.IN_Float = IN_Float;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UVictoryBPFunctionLibrary::ConstructRand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "constructRand");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*              Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableStreaming                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CinematicTextureGroups                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Component_PrestreamTextures");

	Params::UVictoryBPFunctionLibrary_Component_PrestreamTextures_Params Parms{};

	Parms.Target = Target;
	Parms.Seconds = Seconds;
	Parms.bEnableStreaming = bEnableStreaming;
	Parms.CinematicTextureGroups = CinematicTextureGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MD5HashFile1                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MD5HashFile2                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CompareMD5Hash(const class FString& MD5HashFile1, const class FString& MD5HashFile2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CompareMD5Hash");

	Params::UVictoryBPFunctionLibrary_CompareMD5Hash_Params Parms{};

	Parms.MD5HashFile1 = MD5HashFile1;
	Parms.MD5HashFile2 = MD5HashFile2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AStaticMeshActor*            ToClone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocationOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    RotationOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AStaticMeshActor*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AStaticMeshActor* UVictoryBPFunctionLibrary::Clone__StaticMeshActor(class UObject* WorldContextObject, bool* IsValid, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Clone__StaticMeshActor");

	Params::UVictoryBPFunctionLibrary_Clone__StaticMeshActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ToClone = ToClone;
	Parms.LocationOffset = LocationOffset;
	Parms.RotationOffset = RotationOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ClientWindow__GameWindowIsForeGroundInOS");

	Params::UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*                  TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewMaxMoveSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CharacterMovement__SetMaxMoveSpeed");

	Params::UVictoryBPFunctionLibrary_CharacterMovement__SetMaxMoveSpeed_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.NewMaxMoveSpeed = NewMaxMoveSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::Character__GetControllerRotation(class AActor* TheCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Character__GetControllerRotation");

	Params::UVictoryBPFunctionLibrary_Character__GetControllerRotation_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D*    Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ImagePath                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ClearColour                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CaptureComponent2D_SaveImage");

	Params::UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params Parms{};

	Parms.Target = Target;
	Parms.ImagePath = ImagePath;
	Parms.ClearColour = ClearColour;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D*    Target                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutPixelLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CaptureComponent2D_Project");

	Params::UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params Parms{};

	Parms.Target = Target;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = std::move(Parms.OutPixelLocation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ASceneCapture2D*             Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ImagePath                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ClearColour                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Capture2D_SaveImage");

	Params::UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params Parms{};

	Parms.Target = Target;
	Parms.ImagePath = ImagePath;
	Parms.ClearColour = ClearColour;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ASceneCapture2D*             Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutPixelLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Capture2D_Project");

	Params::UVictoryBPFunctionLibrary_Capture2D_Project_Params Parms{};

	Parms.Target = Target;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = std::move(Parms.OutPixelLocation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Source                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             OtherPoints                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     ClosestPoint                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(struct FVector& Source, TArray<struct FVector>& OtherPoints, struct FVector* ClosestPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Calcs__ClosestPointToSourcePoint");

	Params::UVictoryBPFunctionLibrary_Calcs__ClosestPointToSourcePoint_Params Parms{};

	Parms.Source = Source;
	Parms.OtherPoints = OtherPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestPoint != nullptr)
		*ClosestPoint = std::move(Parms.ClosestPoint);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TargetArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAscendingOrder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Array_Sort(TArray<int32>& TargetArray, bool bAscendingOrder, class FName VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Array_Sort");

	Params::UVictoryBPFunctionLibrary_Array_Sort_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.bAscendingOrder = bAscendingOrder;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      TargetArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Array_IsValidIndex(TArray<int32>& TargetArray, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Array_IsValidIndex");

	Params::UVictoryBPFunctionLibrary_Array_IsValidIndex_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::AppendMultiple(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "AppendMultiple");

	Params::UVictoryBPFunctionLibrary_AppendMultiple_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      AnimBPOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    TheRotation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, struct FRotator& TheRotation, float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Animation__GetAimOffsetsFromRotation");

	Params::UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params Parms{};

	Parms.AnimBPOwner = AnimBPOwner;
	Parms.TheRotation = TheRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      AnimBPOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Animation__GetAimOffsets");

	Params::UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params Parms{};

	Parms.AnimBPOwner = AnimBPOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelStreamInstanceInfo    LevelInstanceInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::AddToStreamingLevels(class UObject* WorldContextObject, struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "AddToStreamingLevels");

	Params::UVictoryBPFunctionLibrary_AddToStreamingLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelInstanceInfo = LevelInstanceInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      TheActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    AddRot                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "AddToActorRotation");

	Params::UVictoryBPFunctionLibrary_AddToActorRotation_Params Parms{};

	Parms.TheActor = TheActor;
	Parms.AddRot = AddRot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableStreaming                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CinematicTextureGroups                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Actor_PrestreamTextures");

	Params::UVictoryBPFunctionLibrary_Actor_PrestreamTextures_Params Parms{};

	Parms.Target = Target;
	Parms.Seconds = Seconds;
	Parms.bEnableStreaming = bEnableStreaming;
	Parms.CinematicTextureGroups = CinematicTextureGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ActorToTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DestinationActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Actor__TeleportToActor");

	Params::UVictoryBPFunctionLibrary_Actor__TeleportToActor_Params Parms{};

	Parms.ActorToTeleport = ActorToTeleport;
	Parms.DestinationActor = DestinationActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ParentActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ActorsArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Actor__GetAttachedActors");

	Params::UVictoryBPFunctionLibrary_Actor__GetAttachedActors_Params Parms{};

	Parms.ParentActor = ParentActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActorsArray != nullptr)
		*ActorsArray = std::move(Parms.ActorsArray);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Accessor__GetPlayerController");

	Params::UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     TheObject                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::Accessor__GetNameAsString(class UObject* TheObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Accessor__GetNameAsString");

	Params::UVictoryBPFunctionLibrary_Accessor__GetNameAsString_Params Parms{};

	Parms.TheObject = TheObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Accessor__GetCharacterSkeletalMesh");

	Params::UVictoryBPFunctionLibrary_Accessor__GetCharacterSkeletalMesh_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Class VictoryBPLibrary.VictoryBPHTML
// (None)

class UClass* UVictoryBPHTML::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryBPHTML");

	return Clss;
}


// VictoryBPHTML VictoryBPLibrary.Default__VictoryBPHTML
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryBPHTML* UVictoryBPHTML::GetDefaultObj()
{
	static class UVictoryBPHTML* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryBPHTML*>(UVictoryBPHTML::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               MakeVisible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPHTML::VictoryHTML5_SetCursorVisible(bool MakeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPHTML", "VictoryHTML5_SetCursorVisible");

	Params::UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Params Parms{};

	Parms.MakeVisible = MakeVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPHTML.IsHTML
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPHTML::IsHTML()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPHTML", "IsHTML");

	Params::UVictoryBPHTML_IsHTML_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VictoryBPLibrary.VictoryISM
// (Actor)

class UClass* AVictoryISM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryISM");

	return Clss;
}


// VictoryISM VictoryBPLibrary.Default__VictoryISM
// (Public, ClassDefaultObject, ArchetypeObject)

class AVictoryISM* AVictoryISM::GetDefaultObj()
{
	static class AVictoryISM* Default = nullptr;

	if (!Default)
		Default = static_cast<AVictoryISM*>(AVictoryISM::StaticClass()->DefaultObject);

	return Default;
}

}


