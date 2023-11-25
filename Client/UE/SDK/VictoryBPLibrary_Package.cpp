/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        RadVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::VectorRadiansToDegrees(const struct FVector& RadVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11986);
		
		struct
		{
			struct FVector                        RadVector;
			struct FVector                        ReturnValue;
		} params;
		params.RadVector = RadVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        DegVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::VectorDegreesToRadians(const struct FVector& DegVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11985);
		
		struct
		{
			struct FVector                        DegVector;
			struct FVector                        ReturnValue;
		} params;
		params.DegVector = DegVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        BoxOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11984);
		
		struct
		{
			struct FVector                        SphereOrigin;
			float                                              SphereRadius;
			struct FVector                        BoxOrigin;
			struct FVector                        BoxExtent;
			bool                                               ReturnValue;
		} params;
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		params.BoxOrigin = BoxOrigin;
		params.BoxExtent = BoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        planePoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11983);
		
		struct
		{
			struct FVector                        PlaneNormal;
			struct FVector                        planePoint;
			struct FVector                        Point;
			float                                              ReturnValue;
		} params;
		params.PlaneNormal = PlaneNormal;
		params.planePoint = planePoint;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::SetVectorLength(const struct FVector& A, float Size)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11982);
		
		struct
		{
			struct FVector                        A;
			float                                              Size;
			struct FVector                        ReturnValue;
		} params;
		params.A = A;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTKMathFunctionLibrary::SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const class FName& BoneName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11981);
		
		struct
		{
			class UPrimitiveComponent*                         Target;
			struct FVector                        Offset;
			class FName                                        BoneName;
		} params;
		params.Target = Target;
		params.Offset = Offset;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               skipSelf                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11980);
		
		struct
		{
			int32_t                                            A;
			int32_t                                            Multiple;
			bool                                               skipSelf;
			unsigned char                                      UnknownData_0000[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.A = A;
		params.Multiple = Multiple;
		params.skipSelf = skipSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToNearestMultiple(int32_t A, int32_t Multiple)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11979);
		
		struct
		{
			int32_t                                            A;
			int32_t                                            Multiple;
			int32_t                                            ReturnValue;
		} params;
		params.A = A;
		params.Multiple = Multiple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               skipSelf                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11978);
		
		struct
		{
			int32_t                                            A;
			int32_t                                            Multiple;
			bool                                               skipSelf;
			unsigned char                                      UnknownData_0001[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.A = A;
		params.Multiple = Multiple;
		params.skipSelf = skipSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11977);
		
		struct
		{
			struct FVector                        LineOrigin;
			struct FVector                        LineDirection;
			struct FVector                        Point;
			struct FVector                        ReturnValue;
		} params;
		params.LineOrigin = LineOrigin;
		params.LineDirection = LineDirection;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11976);
		
		struct
		{
			struct FVector                        LinePoint1;
			struct FVector                        LinePoint2;
			struct FVector                        Point;
			int32_t                                            ReturnValue;
		} params;
		params.LinePoint1 = LinePoint1;
		params.LinePoint2 = LinePoint2;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UTKMathFunctionLibrary::NegateVector2D(const struct FVector2D& A)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11975);
		
		struct
		{
			struct FVector2D                      A;
			struct FVector2D                      ReturnValue;
		} params;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::NegateInt(int32_t A)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11974);
		
		struct
		{
			int32_t                                            A;
			int32_t                                            ReturnValue;
		} params;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::NegateFloat(float A)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11973);
		
		struct
		{
			float                                              A;
			float                                              ReturnValue;
		} params;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        IntersectionPoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineDir1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineDir2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::LineToLineIntersection(struct FVector* IntersectionPoint, const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11972);
		
		struct
		{
			struct FVector                        IntersectionPoint;
			struct FVector                        LinePoint1;
			struct FVector                        LineDir1;
			struct FVector                        LinePoint2;
			struct FVector                        LineDir2;
			bool                                               ReturnValue;
		} params;
		params.LinePoint1 = LinePoint1;
		params.LineDir1 = LineDir1;
		params.LinePoint2 = LinePoint2;
		params.LineDir2 = LineDir2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntersectionPoint != nullptr)
			*IntersectionPoint = params.IntersectionPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        InBox                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HitNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HitTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11971);
		
		struct
		{
			struct FBox                                        InBox;
			struct FVector                        Start;
			struct FVector                        End;
			struct FVector                        Extent;
			struct FVector                        HitLocation;
			struct FVector                        HitNormal;
			float                                              HitTime;
			bool                                               ReturnValue;
		} params;
		params.InBox = InBox;
		params.Start = Start;
		params.End = End;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitLocation != nullptr)
			*HitLocation = params.HitLocation;
		if (HitNormal != nullptr)
			*HitNormal = params.HitNormal;
		if (HitTime != nullptr)
			*HitTime = params.HitTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsPowerOfTwo(int32_t X)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11970);
		
		struct
		{
			int32_t                                            X;
			bool                                               ReturnValue;
		} params;
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        BoxOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11969);
		
		struct
		{
			struct FVector                        Point;
			struct FVector                        BoxOrigin;
			struct FVector                        BoxExtent;
			bool                                               ReturnValue;
		} params;
		params.Point = Point;
		params.BoxOrigin = BoxOrigin;
		params.BoxExtent = BoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsMultipleOf(int32_t A, int32_t Multiple)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11968);
		
		struct
		{
			int32_t                                            A;
			int32_t                                            Multiple;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.Multiple = Multiple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11967);
		
		struct
		{
			struct FVector                        LineStart;
			struct FVector                        LineDir;
			float                                              LineLength;
			struct FVector                        SphereOrigin;
			float                                              SphereRadius;
			bool                                               ReturnValue;
		} params;
		params.LineStart = LineStart;
		params.LineDir = LineDir;
		params.LineLength = LineLength;
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsEvenNumber(float A)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11966);
		
		struct
		{
			float                                              A;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Grid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::GridSnap(const struct FVector& A, float Grid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11965);
		
		struct
		{
			struct FVector                        A;
			float                                              Grid;
			struct FVector                        ReturnValue;
		} params;
		params.A = A;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawDebugInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const class FName& BoneName, bool DrawDebugInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11964);
		
		struct
		{
			class UPrimitiveComponent*                         Target;
			struct FVector                        Point;
			class FName                                        BoneName;
			bool                                               DrawDebugInfo;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector                        ReturnValue;
		} params;
		params.Target = Target;
		params.Point = Point;
		params.BoneName = BoneName;
		params.DrawDebugInfo = DrawDebugInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::GetConsoleVariableInt(const class FString& VariableName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11963);
		
		struct
		{
			class FString                                      VariableName;
			int32_t                                            ReturnValue;
		} params;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::GetConsoleVariableFloat(const class FString& VariableName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11962);
		
		struct
		{
			class FString                                      VariableName;
			float                                              ReturnValue;
		} params;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpeedUnit                                         SpeedUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(const struct FVector& Velocity, ESpeedUnit SpeedUnit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11961);
		
		struct
		{
			struct FVector                        Velocity;
			ESpeedUnit                                         SpeedUnit;
			unsigned char                                      UnknownData_0003[0x3];
			float                                              ReturnValue;
		} params;
		params.Velocity = Velocity;
		params.SpeedUnit = SpeedUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAnchors                                    CurrentAnchor                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMargin                                     Offsets                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnchors                                    TargetAnchor                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMargin                                     ConvertedOffsets                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTKMathFunctionLibrary::ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11960);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FAnchors                                    CurrentAnchor;
			struct FMargin                                     Offsets;
			struct FAnchors                                    TargetAnchor;
			struct FMargin                                     ConvertedOffsets;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CurrentAnchor = CurrentAnchor;
		params.Offsets = Offsets;
		params.TargetAnchor = TargetAnchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedOffsets != nullptr)
			*ConvertedOffsets = params.ConvertedOffsets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        closestPointLine1                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        closestPointLine2                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        lineVec1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        lineVec2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::ClosestPointsOnTwoLines(struct FVector* closestPointLine1, struct FVector* closestPointLine2, const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11959);
		
		struct
		{
			struct FVector                        closestPointLine1;
			struct FVector                        closestPointLine2;
			struct FVector                        LinePoint1;
			struct FVector                        lineVec1;
			struct FVector                        LinePoint2;
			struct FVector                        lineVec2;
			bool                                               ReturnValue;
		} params;
		params.LinePoint1 = LinePoint1;
		params.lineVec1 = lineVec1;
		params.LinePoint2 = LinePoint2;
		params.lineVec2 = lineVec2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (closestPointLine1 != nullptr)
			*closestPointLine1 = params.closestPointLine1;
		if (closestPointLine2 != nullptr)
			*closestPointLine2 = params.closestPointLine2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Line1Start                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Line1End                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Line2Start                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Line2End                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinePoint2                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTKMathFunctionLibrary::ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11958);
		
		struct
		{
			struct FVector                        Line1Start;
			struct FVector                        Line1End;
			struct FVector                        Line2Start;
			struct FVector                        Line2End;
			struct FVector                        LinePoint1;
			struct FVector                        LinePoint2;
		} params;
		params.Line1Start = Line1Start;
		params.Line1End = Line1End;
		params.Line2Start = Line2Start;
		params.Line2End = Line2End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinePoint1 != nullptr)
			*LinePoint1 = params.LinePoint1;
		if (LinePoint2 != nullptr)
			*LinePoint2 = params.LinePoint2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11957);
		
		struct
		{
			struct FVector                        SphereOrigin;
			float                                              SphereRadius;
			struct FVector                        LineOrigin;
			struct FVector                        LineDir;
			struct FVector                        ReturnValue;
		} params;
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		params.LineOrigin = LineOrigin;
		params.LineDir = LineDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UTKMathFunctionLibrary::ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11956);
		
		struct
		{
			struct FVector                        Point;
			struct FVector                        LineStart;
			struct FVector                        LineEnd;
			struct FVector                        ReturnValue;
		} params;
		params.Point = Point;
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        pointA1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        pointA2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        pointB1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        pointB2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11955);
		
		struct
		{
			struct FVector                        pointA1;
			struct FVector                        pointA2;
			struct FVector                        pointB1;
			struct FVector                        pointB2;
			bool                                               ReturnValue;
		} params;
		params.pointA1 = pointA1;
		params.pointA2 = pointA2;
		params.pointB1 = pointB1;
		params.pointB2 = pointB2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTKMathFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTKMathFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(105);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12231);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12230);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12229);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     PossibleParent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12228);
		
		struct
		{
			class UWidget*                                     ChildWidget;
			class UWidget*                                     PossibleParent;
			bool                                               ReturnValue;
		} params;
		params.ChildWidget = ChildWidget;
		params.PossibleParent = PossibleParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(class UWidget* ChildWidget, class UUserWidget* WidgetClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12227);
		
		struct
		{
			class UWidget*                                     ChildWidget;
			class UUserWidget*                                 WidgetClass;
			class UUserWidget*                                 ReturnValue;
		} params;
		params.ChildWidget = ChildWidget;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ParentWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         ChildWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediateOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, class UUserWidget* WidgetClass, bool bImmediateOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12226);
		
		struct
		{
			class UWidget*                                     ParentWidget;
			TArray<class UUserWidget*>                         ChildWidgets;
			class UUserWidget*                                 WidgetClass;
			bool                                               bImmediateOnly;
		} params;
		params.ParentWidget = ParentWidget;
		params.WidgetClass = WidgetClass;
		params.bImmediateOnly = bImmediateOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChildWidgets != nullptr)
			*ChildWidgets = params.ChildWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              CurrentlyRenderedActors                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinRecentTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyRenderedActors, float MinRecentTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12225);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class AActor*>                              CurrentlyRenderedActors;
			float                                              MinRecentTime;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.MinRecentTime = MinRecentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlyRenderedActors != nullptr)
			*CurrentlyRenderedActors = params.CurrentlyRenderedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              CurrentlyNotRenderedActors                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinRecentTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyNotRenderedActors, float MinRecentTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12224);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class AActor*>                              CurrentlyNotRenderedActors;
			float                                              MinRecentTime;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.MinRecentTime = MinRecentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlyNotRenderedActors != nullptr)
			*CurrentlyNotRenderedActors = params.CurrentlyNotRenderedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ViewportPosition                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutWorldOrigin                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutWorldDirection                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12223);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ViewportPosition;
			struct FVector                        OutWorldOrigin;
			struct FVector                        OutWorldDirection;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ViewportPosition = ViewportPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWorldOrigin != nullptr)
			*OutWorldOrigin = params.OutWorldOrigin;
		if (OutWorldDirection != nullptr)
			*OutWorldDirection = params.OutWorldDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12222);
		
		struct
		{
			class APlayerController*                           ThePC;
			float                                              PosX;
			float                                              PosY;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		params.PosX = PosX;
		params.PosY = PosY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12221);
		
		struct
		{
			class APlayerController*                           ThePC;
			float                                              PosX;
			float                                              PosY;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PosX != nullptr)
			*PosX = params.PosX;
		if (PosY != nullptr)
			*PosY = params.PosY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12220);
		
		struct
		{
			class APlayerController*                           ThePC;
			float                                              PosX;
			float                                              PosY;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PosX != nullptr)
			*PosX = params.PosX;
		if (PosY != nullptr)
			*PosY = params.PosY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RenderTheWorld                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12219);
		
		struct
		{
			class APlayerController*                           ThePC;
			bool                                               RenderTheWorld;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		params.RenderTheWorld = RenderTheWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundClass*                                 SoundClassObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12218);
		
		struct
		{
			class USoundClass*                                 SoundClassObject;
			float                                              NewVolume;
			bool                                               ReturnValue;
		} params;
		params.SoundClassObject = SoundClassObject;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IntArrayRef                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int32_t>* IntArray, TArray<int32_t>* IntArrayRef)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12217);
		
		struct
		{
			TArray<int32_t>                                    IntArray;
			TArray<int32_t>                                    IntArrayRef;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntArray != nullptr)
			*IntArray = params.IntArray;
		if (IntArrayRef != nullptr)
			*IntArrayRef = params.IntArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      FloatArrayRef                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12216);
		
		struct
		{
			TArray<float>                                      FloatArray;
			TArray<float>                                      FloatArrayRef;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloatArray != nullptr)
			*FloatArray = params.FloatArray;
		if (FloatArrayRef != nullptr)
			*FloatArrayRef = params.FloatArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(float Delta)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12215);
		
		struct
		{
			float                                              Delta;
		} params;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, EInputEvent EventType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12214);
		
		struct
		{
			class APlayerController*                           ThePC;
			struct FKey                                        Key;
			EInputEvent                                        EventType;
		} params;
		params.ThePC = ThePC;
		params.Key = Key;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12213);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			struct FVector2D                      Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12212);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			struct FVector                        Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12211);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			class FString                                      Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12210);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			struct FRotator                       Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32_t Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12209);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			int32_t                                            Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12208);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			float                                              Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12207);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			struct FLinearColor                                Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12206);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               Value;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInputAxis                           ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12205);
		
		struct
		{
			struct FVictoryInputAxis                           ToRemove;
		} params;
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInput                               ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12204);
		
		struct
		{
			struct FVictoryInput                               ToRemove;
		} params;
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInputAxis                           Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInputAxis                           NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12203);
		
		struct
		{
			struct FVictoryInputAxis                           Original;
			struct FVictoryInputAxis                           NewBinding;
			bool                                               ReturnValue;
		} params;
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInput                               Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInput                               NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12202);
		
		struct
		{
			struct FVictoryInput                               Original;
			struct FVictoryInput                               NewBinding;
			bool                                               ReturnValue;
		} params;
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CompToUpdate                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewAngularDamping                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12201);
		
		struct
		{
			class UPrimitiveComponent*                         CompToUpdate;
			float                                              NewAngularDamping;
			bool                                               ReturnValue;
		} params;
		params.CompToUpdate = CompToUpdate;
		params.NewAngularDamping = NewAngularDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12200);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12199);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12198);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12197);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__LogsDir()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12196);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12195);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12194);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapFolderOffOfContent                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelStreaming*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelStreaming* UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(class UObject* WorldContextObject, const class FString& MapFolderOffOfContent, const class FString& LevelName, int32_t InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12193);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      MapFolderOffOfContent;
			class FString                                      LevelName;
			int32_t                                            InstanceNumber;
			struct FVector                        Location;
			struct FRotator                       Rotation;
			bool                                               Success;
			unsigned char                                      UnknownData_0000[0x3];
			class ULevelStreaming*                             ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.MapFolderOffOfContent = MapFolderOffOfContent;
		params.LevelName = LevelName;
		params.InstanceNumber = InstanceNumber;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AVictoryISM*>                         Out                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12192);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class AVictoryISM*>                         Out;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AVictoryISM*>                         CreatedISMActors                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               DestroyOriginalActors                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinCountToCreateISM                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class AActor* ActorClass, TArray<class AVictoryISM*>* CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12191);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      ActorClass;
			TArray<class AVictoryISM*>                         CreatedISMActors;
			bool                                               DestroyOriginalActors;
			unsigned char                                      UnknownData_0001[0x3];
			int32_t                                            MinCountToCreateISM;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.DestroyOriginalActors = DestroyOriginalActors;
		params.MinCountToCreateISM = MinCountToCreateISM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatedISMActors != nullptr)
			*CreatedISMActors = params.CreatedISMActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int32_t ProcessId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12190);
		
		struct
		{
			int32_t                                            ProcessId;
			bool                                               ReturnValue;
		} params;
		params.ProcessId = ProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Int                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Add                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int32_t* Int, int32_t Add, int32_t* IntOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12189);
		
		struct
		{
			int32_t                                            Int;
			int32_t                                            Add;
			int32_t                                            IntOut;
		} params;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
		if (IntOut != nullptr)
			*IntOut = params.IntOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Int                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Sub                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int32_t* Int, int32_t Sub, int32_t* IntOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12188);
		
		struct
		{
			int32_t                                            Int;
			int32_t                                            Sub;
			int32_t                                            IntOut;
		} params;
		params.Sub = Sub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
		if (IntOut != nullptr)
			*IntOut = params.IntOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInputAxis                           ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12187);
		
		struct
		{
			struct FKeyEvent                                   KeyEvent;
			struct FVictoryInputAxis                           ReturnValue;
		} params;
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInput                               ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12186);
		
		struct
		{
			struct FKeyEvent                                   KeyEvent;
			struct FVictoryInput                               ReturnValue;
		} params;
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundClass*                                 SoundClassObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VictoryGetSoundVolume(class USoundClass* SoundClassObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12185);
		
		struct
		{
			class USoundClass*                                 SoundClassObject;
			float                                              ReturnValue;
		} params;
		params.SoundClassObject = SoundClassObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12184);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector2D                      ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12183);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0003[0x3];
			struct FVector                        ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12182);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0004[0x7];
			class FString                                      ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12181);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0005[0x3];
			struct FRotator                       ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12180);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0006[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12179);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0007[0x3];
			float                                              ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12178);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0008[0x3];
			struct FLinearColor                                ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12177);
		
		struct
		{
			class FString                                      SectionName;
			class FString                                      VariableName;
			bool                                               IsValid;
			bool                                               ReturnValue;
		} params;
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int32_t ProcessId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12176);
		
		struct
		{
			int32_t                                            ProcessId;
			unsigned char                                      UnknownData_0009[0x4];
			class FString                                      ReturnValue;
		} params;
		params.ProcessId = ProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVictoryInputAxis>                   Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12175);
		
		struct
		{
			TArray<struct FVictoryInputAxis>                   Bindings;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInput>                       ActionBindings                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInputAxis>                   AxisBindings                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12174);
		
		struct
		{
			struct FKey                                        Key;
			TArray<struct FVictoryInput>                       ActionBindings;
			TArray<struct FVictoryInputAxis>                   AxisBindings;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionBindings != nullptr)
			*ActionBindings = params.ActionBindings;
		if (AxisBindings != nullptr)
			*AxisBindings = params.AxisBindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVictoryInput>                       Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12173);
		
		struct
		{
			TArray<struct FVictoryInput>                       Bindings;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Add                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float* Float, float Add, float* FloatOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12172);
		
		struct
		{
			float                                              Float;
			float                                              Add;
			float                                              FloatOut;
		} params;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Float != nullptr)
			*Float = params.Float;
		if (FloatOut != nullptr)
			*FloatOut = params.FloatOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Sub                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float* Float, float Sub, float* FloatOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12171);
		
		struct
		{
			float                                              Float;
			float                                              Sub;
			float                                              FloatOut;
		} params;
		params.Sub = Sub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Float != nullptr)
			*Float = params.Float;
		if (FloatOut != nullptr)
			*FloatOut = params.FloatOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullPathOfProgramToRun                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              CommandlineArgs                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Detach                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalWorkingDirectory                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryCreateProc(int32_t* ProcessId, const class FString& FullPathOfProgramToRun, TArray<class FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12170);
		
		struct
		{
			int32_t                                            ProcessId;
			unsigned char                                      UnknownData_0010[0x4];
			class FString                                      FullPathOfProgramToRun;
			TArray<class FString>                              CommandlineArgs;
			bool                                               Detach;
			bool                                               Hidden;
			unsigned char                                      UnknownData_0011[0x2];
			int32_t                                            Priority;
			class FString                                      OptionalWorkingDirectory;
		} params;
		params.FullPathOfProgramToRun = FullPathOfProgramToRun;
		params.CommandlineArgs = CommandlineArgs;
		params.Detach = Detach;
		params.Hidden = Hidden;
		params.Priority = Priority;
		params.OptionalWorkingDirectory = OptionalWorkingDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProcessId != nullptr)
			*ProcessId = params.ProcessId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToAppend                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AppendNewline                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::VictoryAppendInline(class FString* String, const class FString& ToAppend, class FString* Result, bool AppendNewline)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12169);
		
		struct
		{
			class FString                                      String;
			class FString                                      ToAppend;
			class FString                                      Result;
			bool                                               AppendNewline;
		} params;
		params.ToAppend = ToAppend;
		params.AppendNewline = AppendNewline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TrimZeroes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12168);
		
		struct
		{
			float                                              Seconds;
			bool                                               TrimZeroes;
			unsigned char                                      UnknownData_0012[0x3];
			class FString                                      ReturnValue;
		} params;
		params.Seconds = Seconds;
		params.TrimZeroes = TrimZeroes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToClipboard                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const class FString& ToClipboard)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12167);
		
		struct
		{
			class FString                                      ToClipboard;
		} params;
		params.ToClipboard = ToClipboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        ImagePixels                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveAsBMP                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               sRGB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_SavePixels(const class FString& FullFilePath, int32_t Width, int32_t Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool sRGB, class FString* ErrorString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12166);
		
		struct
		{
			class FString                                      FullFilePath;
			int32_t                                            Width;
			int32_t                                            Height;
			TArray<struct FLinearColor>                        ImagePixels;
			bool                                               SaveAsBMP;
			bool                                               sRGB;
			unsigned char                                      UnknownData_0013[0x6];
			class FString                                      ErrorString;
			bool                                               ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		params.Width = Width;
		params.Height = Height;
		params.ImagePixels = ImagePixels;
		params.SaveAsBMP = SaveAsBMP;
		params.sRGB = sRGB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EJoyImageFormats                                   ImageFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        OutPixels                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height, TArray<struct FLinearColor>* OutPixels)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12165);
		
		struct
		{
			class FString                                      FullFilePath;
			EJoyImageFormats                                   ImageFormat;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0014[0x2];
			int32_t                                            Width;
			int32_t                                            Height;
			unsigned char                                      UnknownData_0015[0x4];
			TArray<struct FLinearColor>                        OutPixels;
			class UTexture2D*                                  ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		params.ImageFormat = ImageFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (OutPixels != nullptr)
			*OutPixels = params.OutPixels;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EJoyImageFormats                                   ImageFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12164);
		
		struct
		{
			class FString                                      FullFilePath;
			EJoyImageFormats                                   ImageFormat;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0016[0x2];
			int32_t                                            Width;
			int32_t                                            Height;
			unsigned char                                      UnknownData_0017[0x4];
			class UTexture2D*                                  ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		params.ImageFormat = ImageFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FromClipboard                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(class FString* FromClipboard)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12163);
		
		struct
		{
			class FString                                      FromClipboard;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FromClipboard != nullptr)
			*FromClipboard = params.FromClipboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  T2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextureWidth                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextureHeight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        PixelArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t* TextureWidth, int32_t* TextureHeight, TArray<struct FLinearColor>* PixelArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12162);
		
		struct
		{
			class UTexture2D*                                  T2D;
			int32_t                                            TextureWidth;
			int32_t                                            TextureHeight;
			TArray<struct FLinearColor>                        PixelArray;
			bool                                               ReturnValue;
		} params;
		params.T2D = T2D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextureWidth != nullptr)
			*TextureWidth = params.TextureWidth;
		if (TextureHeight != nullptr)
			*TextureHeight = params.TextureHeight;
		if (PixelArray != nullptr)
			*PixelArray = params.PixelArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  T2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                PixelColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, struct FLinearColor* PixelColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12161);
		
		struct
		{
			class UTexture2D*                                  T2D;
			int32_t                                            X;
			int32_t                                            Y;
			struct FLinearColor                                PixelColor;
			bool                                               ReturnValue;
		} params;
		params.T2D = T2D;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelColor != nullptr)
			*PixelColor = params.PixelColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12160);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceDescription                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Provider                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DriverVersion                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DriverDate                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Victory_GetGPUInfo(class FString* DeviceDescription, class FString* Provider, class FString* DriverVersion, class FString* DriverDate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12159);
		
		struct
		{
			class FString                                      DeviceDescription;
			class FString                                      Provider;
			class FString                                      DriverVersion;
			class FString                                      DriverDate;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceDescription != nullptr)
			*DeviceDescription = params.DeviceDescription;
		if (Provider != nullptr)
			*Provider = params.Provider;
		if (DriverVersion != nullptr)
			*DriverVersion = params.DriverVersion;
		if (DriverDate != nullptr)
			*DriverDate = params.DriverDate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Victory_GetGPUBrand()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12158);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ImageHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FoundColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int32_t ImageHeight, int32_t X, int32_t Y, struct FLinearColor* FoundColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12157);
		
		struct
		{
			TArray<struct FLinearColor>                        Pixels;
			int32_t                                            ImageHeight;
			int32_t                                            X;
			int32_t                                            Y;
			struct FLinearColor                                FoundColor;
			bool                                               ReturnValue;
		} params;
		params.Pixels = Pixels;
		params.ImageHeight = ImageHeight;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundColor != nullptr)
			*FoundColor = params.FoundColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Dest                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNavigationQueryFilter*                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPathFollowingRequestResult                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EPathFollowingRequestResult UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UNavigationQueryFilter* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12156);
		
		struct
		{
			class APawn*                                       Pawn;
			struct FVector                        Dest;
			unsigned char                                      UnknownData_0018[0x4];
			class UNavigationQueryFilter*                      FilterClass;
			float                                              AcceptanceRadius;
			bool                                               bProjectDestinationToNavigation;
			bool                                               bStopOnOverlap;
			bool                                               bCanStrafe;
			EPathFollowingRequestResult                        ReturnValue;
		} params;
		params.Pawn = Pawn;
		params.Dest = Dest;
		params.FilterClass = FilterClass;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bCanStrafe = bCanStrafe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalFOV                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VerticalFOV(float HorizontalFOV, float AspectRatio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12155);
		
		struct
		{
			float                                              HorizontalFOV;
			float                                              AspectRatio;
			float                                              ReturnValue;
		} params;
		params.HorizontalFOV = HorizontalFOV;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12154);
		
		struct
		{
			struct FVector2D                      Current;
			struct FVector2D                      Target;
			float                                              DeltaTime;
			float                                              InterpSpeed;
			struct FVector2D                      ReturnValue;
		} params;
		params.Current = Current;
		params.Target = Target;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12153);
		
		struct
		{
			struct FVector2D                      Current;
			struct FVector2D                      Target;
			float                                              DeltaTime;
			float                                              InterpSpeed;
			struct FVector2D                      ReturnValue;
		} params;
		params.Current = Current;
		params.Target = Target;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                      UTCTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      LocalTime                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12152);
		
		struct
		{
			struct FDateTime                      UTCTime;
			struct FDateTime                      LocalTime;
		} params;
		params.UTCTime = UTCTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalTime != nullptr)
			*LocalTime = params.LocalTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12151);
		
		struct
		{
			class ULevelStreamingDynamic*                      LevelInstance;
		} params;
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12150);
		
		struct
		{
			class AActor*                                      Actor;
			struct FVector                        InVector;
			struct FRotator                       ReturnValue;
		} params;
		params.Actor = Actor;
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12149);
		
		struct
		{
			class AActor*                                      Actor;
			struct FVector                        InVector;
			struct FVector                        ReturnValue;
		} params;
		params.Actor = Actor;
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TraceOwner                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceStart                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceEnd                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutImpactPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutImpactNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClosestSocketName                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        SocketLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12148);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      TraceOwner;
			struct FVector                        TraceStart;
			struct FVector                        TraceEnd;
			struct FVector                        OutImpactPoint;
			struct FVector                        OutImpactNormal;
			class FName                                        ClosestSocketName;
			struct FVector                        SocketLocation;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0019[0x3];
			class AActor*                                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.TraceOwner = TraceOwner;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImpactPoint != nullptr)
			*OutImpactPoint = params.OutImpactPoint;
		if (OutImpactNormal != nullptr)
			*OutImpactNormal = params.OutImpactNormal;
		if (ClosestSocketName != nullptr)
			*ClosestSocketName = params.ClosestSocketName;
		if (SocketLocation != nullptr)
			*SocketLocation = params.SocketLocation;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TraceOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceStart                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceEnd                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutImpactPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutImpactNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClosestBoneName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ClosestBoneLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12147);
		
		struct
		{
			class AActor*                                      TraceOwner;
			struct FVector                        TraceStart;
			struct FVector                        TraceEnd;
			struct FVector                        OutImpactPoint;
			struct FVector                        OutImpactNormal;
			class FName                                        ClosestBoneName;
			struct FVector                        ClosestBoneLocation;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0020[0x3];
			class AActor*                                      ReturnValue;
		} params;
		params.TraceOwner = TraceOwner;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImpactPoint != nullptr)
			*OutImpactPoint = params.OutImpactPoint;
		if (OutImpactNormal != nullptr)
			*OutImpactNormal = params.OutImpactNormal;
		if (ClosestBoneName != nullptr)
			*ClosestBoneName = params.ClosestBoneName;
		if (ClosestBoneLocation != nullptr)
			*ClosestBoneLocation = params.ClosestBoneLocation;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       TraceRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TraceLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawTraceData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceDataColor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TraceDataThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12146);
		
		struct
		{
			struct FVector                        TraceStart;
			struct FVector                        TraceEnd;
			class USkeletalMeshComponent*                      Mesh;
			struct FRotator                       TraceRotation;
			float                                              TraceLength;
			class FName                                        Socket;
			bool                                               DrawTraceData;
			unsigned char                                      UnknownData_0021[0x3];
			struct FLinearColor                                TraceDataColor;
			float                                              TraceDataThickness;
			bool                                               ReturnValue;
		} params;
		params.Mesh = Mesh;
		params.TraceRotation = TraceRotation;
		params.TraceLength = TraceLength;
		params.Socket = Socket;
		params.DrawTraceData = DrawTraceData;
		params.TraceDataColor = TraceDataColor;
		params.TraceDataThickness = TraceDataThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       TraceRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TraceLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawTraceData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceDataColor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TraceDataThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12145);
		
		struct
		{
			struct FVector                        TraceStart;
			struct FVector                        TraceEnd;
			class AActor*                                      TheCharacter;
			struct FRotator                       TraceRotation;
			float                                              TraceLength;
			class FName                                        Socket;
			bool                                               DrawTraceData;
			unsigned char                                      UnknownData_0022[0x3];
			struct FLinearColor                                TraceDataColor;
			float                                              TraceDataThickness;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		params.TraceRotation = TraceRotation;
		params.TraceLength = TraceLength;
		params.Socket = Socket;
		params.DrawTraceData = DrawTraceData;
		params.TraceDataColor = TraceDataColor;
		params.TraceDataThickness = TraceDataThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseDotForThousands                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::Text_ToInt(const class FText& Text, bool UseDotForThousands)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12144);
		
		struct
		{
			class FText                                        Text;
			bool                                               UseDotForThousands;
			unsigned char                                      UnknownData_0023[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Text = Text;
		params.UseDotForThousands = UseDotForThousands;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseDotForThousands                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::Text_ToFloat(const class FText& Text, bool UseDotForThousands)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12143);
		
		struct
		{
			class FText                                        Text;
			bool                                               UseDotForThousands;
			unsigned char                                      UnknownData_0024[0x3];
			float                                              ReturnValue;
		} params;
		params.Text = Text;
		params.UseDotForThousands = UseDotForThousands;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Text_IsNumeric(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12142);
		
		struct
		{
			class FText                                        Text;
			bool                                               ReturnValue;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::StringIsEmpty(const class FString& Target)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12141);
		
		struct
		{
			class FString                                      Target;
			bool                                               ReturnValue;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TheFloat                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TheString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Precision                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeLeadingZero                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(float TheFloat, class FString* TheString, int32_t Precision, bool IncludeLeadingZero)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12140);
		
		struct
		{
			float                                              TheFloat;
			unsigned char                                      UnknownData_0025[0x4];
			class FString                                      TheString;
			int32_t                                            Precision;
			bool                                               IncludeLeadingZero;
		} params;
		params.TheFloat = TheFloat;
		params.Precision = Precision;
		params.IncludeLeadingZero = IncludeLeadingZero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TheString != nullptr)
			*TheString = params.TheString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OutputStrings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Separator                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrimElements                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::String__ExplodeString(TArray<class FString>* OutputStrings, const class FString& InputString, const class FString& Separator, int32_t Limit, bool bTrimElements)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12139);
		
		struct
		{
			TArray<class FString>                              OutputStrings;
			class FString                                      InputString;
			class FString                                      Separator;
			int32_t                                            Limit;
			bool                                               bTrimElements;
		} params;
		params.InputString = InputString;
		params.Separator = Separator;
		params.Limit = Limit;
		params.bTrimElements = bTrimElements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputStrings != nullptr)
			*OutputStrings = params.OutputStrings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const class FString& A, const class FString& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12138);
		
		struct
		{
			class FString                                      A;
			class FString                                      B;
			class FString                                      ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringFirst                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringSecond                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Separator                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringFirstLabel                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringSecondLabel                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12137);
		
		struct
		{
			class FString                                      StringFirst;
			class FString                                      StringSecond;
			class FString                                      Separator;
			class FString                                      StringFirstLabel;
			class FString                                      StringSecondLabel;
			class FString                                      ReturnValue;
		} params;
		params.StringFirst = StringFirst;
		params.StringSecond = StringSecond;
		params.Separator = Separator;
		params.StringFirstLabel = StringFirstLabel;
		params.StringSecondLabel = StringSecondLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               SpawnEvenIfColliding                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::SpawnActorIntoLevel(class UObject* WorldContextObject, class AActor* ActorClass, const class FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12136);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      ActorClass;
			class FName                                        Level;
			struct FVector                        Location;
			struct FRotator                       Rotation;
			bool                                               SpawnEvenIfColliding;
			unsigned char                                      UnknownData_0026[0x7];
			class AActor*                                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Level = Level;
		params.Location = Location;
		params.Rotation = Rotation;
		params.SpawnEvenIfColliding = SpawnEvenIfColliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            NewTeamId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::SetGenericTeamId(class AActor* Target, uint8_t NewTeamId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12135);
		
		struct
		{
			class AActor*                                      Target;
			uint8_t                                            NewTeamId;
		} params;
		params.Target = Target;
		params.NewTeamId = NewTeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::SetComponentTickRate(class UActorComponent* Component, float Seconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12134);
		
		struct
		{
			class UActorComponent*                             Component;
			float                                              Seconds;
		} params;
		params.Component = Component;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APostProcessVolume*                          PostProcessVolume                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12133);
		
		struct
		{
			class APostProcessVolume*                          PostProcessVolume;
			float                                              Intensity;
		} params;
		params.PostProcessVolume = PostProcessVolume;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipNotifyPlayers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12132);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      MapName;
			bool                                               bSkipNotifyPlayers;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.MapName = MapName;
		params.bSkipNotifyPlayers = bSkipNotifyPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              SelectedActors                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      AnchorPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      DraggedPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ClassFilter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>* SelectedActors, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class AActor* ClassFilter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12131);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class AActor*>                              SelectedActors;
			struct FVector2D                      AnchorPoint;
			struct FVector2D                      DraggedPoint;
			class AActor*                                      ClassFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AnchorPoint = AnchorPoint;
		params.DraggedPoint = DraggedPoint;
		params.ClassFilter = ClassFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedActors != nullptr)
			*SelectedActors = params.SelectedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::seedRandWithTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12130);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::seedRandWithEntropy()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12129);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::seedRand(int32_t Seed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12128);
		
		struct
		{
			int32_t                                            Seed;
		} params;
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OriginalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewAbsoluteFolderPath                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HighResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12127);
		
		struct
		{
			class FString                                      OriginalFileName;
			class FString                                      NewName;
			class FString                                      NewAbsoluteFolderPath;
			bool                                               HighResolution;
			bool                                               ReturnValue;
		} params;
		params.NewName = NewName;
		params.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
		params.HighResolution = HighResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalFileName != nullptr)
			*OriginalFileName = params.OriginalFileName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              FileNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12126);
		
		struct
		{
			TArray<class FString>                              FileNames;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileNames != nullptr)
			*FileNames = params.FileNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12125);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12124);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLevelStreamInstanceInfo                    LevelInstanceInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12123);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLevelStreamInstanceInfo                    LevelInstanceInfo;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LevelInstanceInfo = LevelInstanceInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UUserWidget* WidgetClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12122);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UUserWidget*                                 WidgetClass;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousTime                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Hours                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(const class FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12121);
		
		struct
		{
			class FString                                      PreviousTime;
			float                                              MilliSeconds;
			float                                              Seconds;
			float                                              Minutes;
			float                                              Hours;
		} params;
		params.PreviousTime = PreviousTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours != nullptr)
			*Hours = params.Hours;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousTime1                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviousTime2                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Hours                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(const class FString& PreviousTime1, const class FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12120);
		
		struct
		{
			class FString                                      PreviousTime1;
			class FString                                      PreviousTime2;
			float                                              MilliSeconds;
			float                                              Seconds;
			float                                              Minutes;
			float                                              Hours;
		} params;
		params.PreviousTime1 = PreviousTime1;
		params.PreviousTime2 = PreviousTime2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours != nullptr)
			*Hours = params.Hours;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hours12                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hours24                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Day                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Month                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Year                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(int32_t* MilliSeconds, int32_t* Seconds, int32_t* Minutes, int32_t* Hours12, int32_t* Hours24, int32_t* Day, int32_t* Month, int32_t* Year)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12119);
		
		struct
		{
			int32_t                                            MilliSeconds;
			int32_t                                            Seconds;
			int32_t                                            Minutes;
			int32_t                                            Hours12;
			int32_t                                            Hours24;
			int32_t                                            Day;
			int32_t                                            Month;
			int32_t                                            Year;
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours12 != nullptr)
			*Hours12 = params.Hours12;
		if (Hours24 != nullptr)
			*Hours24 = params.Hours24;
		if (Day != nullptr)
			*Day = params.Day;
		if (Month != nullptr)
			*Month = params.Month;
		if (Year != nullptr)
			*Year = params.Year;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_uniDis_MT()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12118);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_uniDis()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12117);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12116);
		
		struct
		{
			int32_t                                            iMin;
			int32_t                                            iMax;
			int32_t                                            ReturnValue;
		} params;
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12115);
		
		struct
		{
			int32_t                                            iMin;
			int32_t                                            iMax;
			int32_t                                            ReturnValue;
		} params;
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_uniDis_MT()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12114);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_uniDis()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12113);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(float iMin, float iMax)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12112);
		
		struct
		{
			float                                              iMin;
			float                                              iMax;
			float                                              ReturnValue;
		} params;
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(float iMin, float iMax)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12111);
		
		struct
		{
			float                                              iMin;
			float                                              iMax;
			float                                              ReturnValue;
		} params;
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fBias                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(float fBias)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12110);
		
		struct
		{
			float                                              fBias;
			bool                                               ReturnValue;
		} params;
		params.fBias = fBias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fBias                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::RandBool_Bernoulli(float fBias)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12109);
		
		struct
		{
			float                                              fBias;
			bool                                               ReturnValue;
		} params;
		params.fBias = fBias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(const struct FVector& WorldLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12108);
		
		struct
		{
			struct FVector                        WorldLocation;
			struct FVector2D                      ReturnValue;
		} params;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12107);
		
		struct
		{
			struct FPlane                                      Plane;
			struct FVector                        Point;
			float                                              Distance;
		} params;
		params.Plane = Plane;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t* PlayerId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12106);
		
		struct
		{
			class APlayerController*                           ThePC;
			int32_t                                            PlayerId;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerId != nullptr)
			*PlayerId = params.PlayerId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::PlayerController_GetControllerID(class APlayerController* ThePC, int32_t* ControllerId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12105);
		
		struct
		{
			class APlayerController*                           ThePC;
			int32_t                                            ControllerId;
			bool                                               ReturnValue;
		} params;
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ControllerId != nullptr)
			*ControllerId = params.ControllerId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeightOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12104);
		
		struct
		{
			class AActor*                                      TheCharacter;
			float                                              HeightOffset;
			float                                              InterpSpeed;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		params.HeightOffset = HeightOffset;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SetToFallingMovementMode                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAboveRBMesh                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        InitLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       InitRotation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12103);
		
		struct
		{
			class AActor*                                      TheCharacter;
			bool                                               SetToFallingMovementMode;
			unsigned char                                      UnknownData_0027[0x3];
			float                                              HeightAboveRBMesh;
			struct FVector                        InitLocation;
			struct FRotator                       InitRotation;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		params.SetToFallingMovementMode = SetToFallingMovementMode;
		params.HeightAboveRBMesh = HeightAboveRBMesh;
		params.InitLocation = InitLocation;
		params.InitRotation = InitRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__IsRagDoll(class AActor* TheCharacter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12102);
		
		struct
		{
			class AActor*                                      TheCharacter;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        InitLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       InitRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12101);
		
		struct
		{
			class AActor*                                      TheCharacter;
			struct FVector                        InitLocation;
			struct FRotator                       InitRotation;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitLocation != nullptr)
			*InitLocation = params.InitLocation;
		if (InitRotation != nullptr)
			*InitRotation = params.InitRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        RagdollLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12100);
		
		struct
		{
			class AActor*                                      TheCharacter;
			struct FVector                        RagdollLocation;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RagdollLocation != nullptr)
			*RagdollLocation = params.RagdollLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__EnterRagDoll(class AActor* TheCharacter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12099);
		
		struct
		{
			class AActor*                                      TheCharacter;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Widths                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Heights                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    RefreshRates                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeRefreshRates                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>* Widths, TArray<int32_t>* Heights, TArray<int32_t>* RefreshRates, bool IncludeRefreshRates)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12098);
		
		struct
		{
			TArray<int32_t>                                    Widths;
			TArray<int32_t>                                    Heights;
			TArray<int32_t>                                    RefreshRates;
			bool                                               IncludeRefreshRates;
			bool                                               ReturnValue;
		} params;
		params.IncludeRefreshRates = IncludeRefreshRates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widths != nullptr)
			*Widths = params.Widths;
		if (Heights != nullptr)
			*Heights = params.Heights;
		if (RefreshRates != nullptr)
			*RefreshRates = params.RefreshRates;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Windows_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Mac                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Linux                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IOS                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android_ARM                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android_Vulkan                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PS4                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               XboxOne                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HTML5                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               APPLE                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XboxOne, bool* HTML5, bool* APPLE)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12097);
		
		struct
		{
			bool                                               Windows_;
			bool                                               Mac;
			bool                                               Linux;
			bool                                               IOS;
			bool                                               Android;
			bool                                               Android_ARM;
			bool                                               Android_Vulkan;
			bool                                               PS4;
			bool                                               XboxOne;
			bool                                               HTML5;
			bool                                               APPLE;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Windows_ != nullptr)
			*Windows_ = params.Windows_;
		if (Mac != nullptr)
			*Mac = params.Mac;
		if (Linux != nullptr)
			*Linux = params.Linux;
		if (IOS != nullptr)
			*IOS = params.IOS;
		if (Android != nullptr)
			*Android = params.Android;
		if (Android_ARM != nullptr)
			*Android_ARM = params.Android_ARM;
		if (Android_Vulkan != nullptr)
			*Android_Vulkan = params.Android_Vulkan;
		if (PS4 != nullptr)
			*PS4 = params.PS4;
		if (XboxOne != nullptr)
			*XboxOne = params.XboxOne;
		if (HTML5 != nullptr)
			*HTML5 = params.HTML5;
		if (APPLE != nullptr)
			*APPLE = params.APPLE;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TheURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(const class FString& TheURL)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12096);
		
		struct
		{
			class FString                                      TheURL;
		} params;
		params.TheURL = TheURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12095);
		
		struct
		{
			struct FVector2D                      A;
			struct FVector2D                      B;
			float                                              ErrorTolerance;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComponentMobility                                 NewMobility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, EComponentMobility NewMobility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12094);
		
		struct
		{
			class USceneComponent*                             SceneComp;
			EComponentMobility                                 NewMobility;
			bool                                               ReturnValue;
		} params;
		params.SceneComp = SceneComp;
		params.NewMobility = NewMobility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::MinOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMinValue, int32_t* MinValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12093);
		
		struct
		{
			TArray<int32_t>                                    IntArray;
			int32_t                                            IndexOfMinValue;
			int32_t                                            MinValue;
		} params;
		params.IntArray = IntArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::MinOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMinValue, float* MinValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12092);
		
		struct
		{
			TArray<float>                                      FloatArray;
			int32_t                                            IndexOfMinValue;
			float                                              MinValue;
		} params;
		params.FloatArray = FloatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::MaxOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMaxValue, int32_t* MaxValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12091);
		
		struct
		{
			TArray<int32_t>                                    IntArray;
			int32_t                                            IndexOfMaxValue;
			int32_t                                            MaxValue;
		} params;
		params.IntArray = IntArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::MaxOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMaxValue, float* MaxValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12090);
		
		struct
		{
			TArray<float>                                      FloatArray;
			int32_t                                            IndexOfMaxValue;
			float                                              MaxValue;
		} params;
		params.FloatArray = FloatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12089);
		
		struct
		{
			float                                              Value;
			float                                              InRangeA;
			float                                              InRangeB;
			float                                              OutRangeA;
			float                                              OutRangeB;
			float                                              ReturnValue;
		} params;
		params.Value = Value;
		params.InRangeA = InRangeA;
		params.InRangeB = InRangeB;
		params.OutRangeA = OutRangeA;
		params.OutRangeB = OutRangeB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12088);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImagePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(const class FString& ImagePath, bool* IsValid, int32_t* OutWidth, int32_t* OutHeight)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12087);
		
		struct
		{
			class FString                                      ImagePath;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0028[0x3];
			int32_t                                            OutWidth;
			int32_t                                            OutHeight;
			unsigned char                                      UnknownData_0029[0x4];
			class UTexture2D*                                  ReturnValue;
		} params;
		params.ImagePath = ImagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutWidth != nullptr)
			*OutWidth = params.OutWidth;
		if (OutHeight != nullptr)
			*OutHeight = params.OutHeight;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(const class FString& FullFilePath)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12086);
		
		struct
		{
			class FString                                      FullFilePath;
			class UTexture2D*                                  ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LoadStringFromFile(class FString* Result, const class FString& FullFilePath)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12085);
		
		struct
		{
			class FString                                      Result;
			class FString                                      FullFilePath;
			bool                                               ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArraySize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ExcludeEmptyLines                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<class FString>* StringArray, int32_t* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12084);
		
		struct
		{
			TArray<class FString>                              StringArray;
			int32_t                                            ArraySize;
			unsigned char                                      UnknownData_0030[0x4];
			class FString                                      FullFilePath;
			bool                                               ExcludeEmptyLines;
			bool                                               ReturnValue;
		} params;
		params.FullFilePath = FullFilePath;
		params.ExcludeEmptyLines = ExcludeEmptyLines;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StringArray != nullptr)
			*StringArray = params.StringArray;
		if (ArraySize != nullptr)
			*ArraySize = params.ArraySize;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Path                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(class UObject* ObjectClass, const class FName& Path, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12083);
		
		struct
		{
			class UObject*                                     ObjectClass;
			class FName                                        Path;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0031[0x7];
			class UObject*                                     ReturnValue;
		} params;
		params.ObjectClass = ObjectClass;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LightSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchOffset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YawOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RollOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12082);
		
		struct
		{
			class APlayerController*                           PlayerController;
			class AActor*                                      LightSource;
			float                                              PitchOffset;
			float                                              YawOffset;
			float                                              RollOffset;
			bool                                               ReturnValue;
		} params;
		params.PlayerController = PlayerController;
		params.LightSource = LightSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitchOffset != nullptr)
			*PitchOffset = params.PitchOffset;
		if (YawOffset != nullptr)
			*YawOffset = params.YawOffset;
		if (RollOffset != nullptr)
			*RollOffset = params.RollOffset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ctrl                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Shift                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Alt                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Cmd                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12081);
		
		struct
		{
			struct FKeyEvent                                   KeyEvent;
			struct FKey                                        Key;
			bool                                               Ctrl;
			bool                                               Shift;
			bool                                               Alt;
			bool                                               Cmd;
			bool                                               Match;
		} params;
		params.KeyEvent = KeyEvent;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ctrl != nullptr)
			*Ctrl = params.Ctrl;
		if (Shift != nullptr)
			*Shift = params.Shift;
		if (Alt != nullptr)
			*Alt = params.Alt;
		if (Cmd != nullptr)
			*Cmd = params.Cmd;
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoyGraphicsFullScreen                             NewSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(EJoyGraphicsFullScreen NewSetting)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12080);
		
		struct
		{
			EJoyGraphicsFullScreen                             NewSetting;
		} params;
		params.NewSetting = NewSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoyGraphicsFullScreen                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EJoyGraphicsFullScreen UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12079);
		
		struct
		{
			EJoyGraphicsFullScreen                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      RootFolderFullPath                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ext                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12078);
		
		struct
		{
			TArray<class FString>                              Files;
			class FString                                      RootFolderFullPath;
			class FString                                      Ext;
			bool                                               ReturnValue;
		} params;
		params.RootFolderFullPath = RootFolderFullPath;
		params.Ext = Ext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      RootFolderFullPath                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ext                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12077);
		
		struct
		{
			TArray<class FString>                              Files;
			class FString                                      RootFolderFullPath;
			class FString                                      Ext;
			bool                                               ReturnValue;
		} params;
		params.RootFolderFullPath = RootFolderFullPath;
		params.Ext = Ext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UUserWidget* WidgetClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12076);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UUserWidget*                                 WidgetClass;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsStandAlone(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12075);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12074);
		
		struct
		{
			struct FPlane                                      Plane;
			struct FVector                        Point;
			float                                              Tolerance;
			bool                                               ReturnValue;
		} params;
		params.Plane = Plane;
		params.Point = Point;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12073);
		
		struct
		{
			class FString                                      String;
			bool                                               ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12072);
		
		struct
		{
			class UWidget*                                     Parent;
			int32_t                                            Index;
			unsigned char                                      UnknownData_0032[0x4];
			class UWidget*                                     Content;
			class UPanelSlot*                                  ReturnValue;
		} params;
		params.Parent = Parent;
		params.Index = Index;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VerticalFOV                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::HorizontalFOV(float VerticalFOV, float AspectRatio)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12071);
		
		struct
		{
			float                                              VerticalFOV;
			float                                              AspectRatio;
			float                                              ReturnValue;
		} params;
		params.VerticalFOV = VerticalFOV;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12070);
		
		struct
		{
			class ULevelStreamingDynamic*                      LevelInstance;
		} params;
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchCase                                        SearchCase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchDir                                         SearchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::HasSubstring(const class FString& SearchIn, const class FString& SubString, ESearchCase SearchCase, ESearchDir SearchDir)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12069);
		
		struct
		{
			class FString                                      SearchIn;
			class FString                                      SubString;
			ESearchCase                                        SearchCase;
			ESearchDir                                         SearchDir;
			bool                                               ReturnValue;
		} params;
		params.SearchIn = SearchIn;
		params.SubString = SubString;
		params.SearchCase = SearchCase;
		params.SearchDir = SearchDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12068);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12067);
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ParentUserWidget                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(class UUserWidget* ParentUserWidget, const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12066);
		
		struct
		{
			class UUserWidget*                                 ParentUserWidget;
			class FName                                        Name;
			class UWidget*                                     ReturnValue;
		} params;
		params.ParentUserWidget = ParentUserWidget;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ViewportPosition                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12065);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ViewportPosition;
			ECollisionChannel                                  TraceChannel;
			bool                                               bTraceComplex;
			unsigned char                                      UnknownData_0033[0x2];
			struct FHitResult                                  OutHitResult;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ViewportPosition = ViewportPosition;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitResult != nullptr)
			*OutHitResult = params.OutHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      OutViewportPosition                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12064);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                      ScreenPosition;
			struct FVector2D                      OutViewportPosition;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewportPosition != nullptr)
			*OutViewportPosition = params.OutViewportPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ParentLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ParentRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ChildLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12063);
		
		struct
		{
			struct FVector                        ParentLocation;
			struct FRotator                       ParentRotation;
			struct FVector                        ChildLocation;
			struct FVector                        ReturnValue;
		} params;
		params.ParentLocation = ParentLocation;
		params.ParentRotation = ParentRotation;
		params.ChildLocation = ChildLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UnixTimeStamp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      UTCTime                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int32_t UnixTimeStamp, struct FDateTime* UTCTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12062);
		
		struct
		{
			int32_t                                            UnixTimeStamp;
			unsigned char                                      UnknownData_0034[0x4];
			struct FDateTime                      UTCTime;
		} params;
		params.UnixTimeStamp = UnixTimeStamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UTCTime != nullptr)
			*UTCTime = params.UTCTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAMD                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsNvidia                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsIntel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsUnknown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnknownId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int32_t* UnknownId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12061);
		
		struct
		{
			bool                                               IsAMD;
			bool                                               IsNvidia;
			bool                                               IsIntel;
			bool                                               IsUnknown;
			int32_t                                            UnknownId;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAMD != nullptr)
			*IsAMD = params.IsAMD;
		if (IsNvidia != nullptr)
			*IsNvidia = params.IsNvidia;
		if (IsIntel != nullptr)
			*IsIntel = params.IsIntel;
		if (IsUnknown != nullptr)
			*IsUnknown = params.IsUnknown;
		if (UnknownId != nullptr)
			*UnknownId = params.UnknownId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                      UTCTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::GetUnixTimeStamp(const struct FDateTime& UTCTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12060);
		
		struct
		{
			struct FDateTime                      UTCTime;
			int32_t                                            ReturnValue;
		} params;
		params.UTCTime = UTCTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetTimeAlive(class AActor* Target)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12059);
		
		struct
		{
			class AActor*                                      Target;
			float                                              ReturnValue;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Comp                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                VertexPositions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12058);
		
		struct
		{
			class UStaticMeshComponent*                        Comp;
			TArray<struct FVector>                VertexPositions;
			bool                                               ReturnValue;
		} params;
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexPositions != nullptr)
			*VertexPositions = params.VertexPositions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       ParentRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ChildRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12057);
		
		struct
		{
			struct FRotator                       ParentRotation;
			struct FRotator                       ChildRotation;
			struct FRotator                       ReturnValue;
		} params;
		params.ParentRotation = ParentRotation;
		params.ChildRotation = ChildRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::GetPlayerUniqueNetID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12056);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerStartName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerStart*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerStart* UVictoryBPFunctionLibrary::GetPlayerStart(class UObject* WorldContextObject, const class FString& PlayerStartName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12055);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      PlayerStartName;
			class APlayerStart*                                ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PlayerStartName = PlayerStartName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UVictoryBPFunctionLibrary::GetObjectPath(class UObject* Obj)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12054);
		
		struct
		{
			class UObject*                                     Obj;
			class FName                                        ReturnValue;
		} params;
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NamesOfLoadedLevels                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12053);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class FString>                              NamesOfLoadedLevels;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesOfLoadedLevels != nullptr)
			*NamesOfLoadedLevels = params.NamesOfLoadedLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLevelStreamInstanceInfo                    ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12052);
		
		struct
		{
			class ULevelStreamingDynamic*                      LevelInstance;
			struct FLevelStreamInstanceInfo                    ReturnValue;
		} params;
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12051);
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	uint8_t UVictoryBPFunctionLibrary::GetGenericTeamId(class AActor* Target)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12050);
		
		struct
		{
			class AActor*                                      Target;
			uint8_t                                            ReturnValue;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(class UObject* WorldContextObject, class UUserWidget* WidgetClass, bool TopLevelOnly)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12049);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UUserWidget*                                 WidgetClass;
			bool                                               TopLevelOnly;
			unsigned char                                      UnknownData_0035[0x7];
			class UUserWidget*                                 ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CollisionComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ClosestPointOnCollision                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12048);
		
		struct
		{
			class UPrimitiveComponent*                         CollisionComponent;
			struct FVector                        Point;
			struct FVector                        ClosestPointOnCollision;
			float                                              ReturnValue;
		} params;
		params.CollisionComponent = CollisionComponent;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestPointOnCollision != nullptr)
			*ClosestPointOnCollision = params.ClosestPointOnCollision;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CollisionComponent1                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         CollisionComponent2                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PointOnSurface1                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PointOnSurface2                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12047);
		
		struct
		{
			class UPrimitiveComponent*                         CollisionComponent1;
			class UPrimitiveComponent*                         CollisionComponent2;
			struct FVector                        PointOnSurface1;
			struct FVector                        PointOnSurface2;
			float                                              ReturnValue;
		} params;
		params.CollisionComponent1 = CollisionComponent1;
		params.CollisionComponent2 = CollisionComponent2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointOnSurface1 != nullptr)
			*PointOnSurface1 = params.PointOnSurface1;
		if (PointOnSurface2 != nullptr)
			*PointOnSurface2 = params.PointOnSurface2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetCreationTime(class AActor* Target)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12046);
		
		struct
		{
			class AActor*                                      Target;
			float                                              ReturnValue;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ChildComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12045);
		
		struct
		{
			class USceneComponent*                             ParentComponent;
			class USceneComponent*                             ChildComponent;
			struct FRotator                       ReturnValue;
		} params;
		params.ParentComponent = ParentComponent;
		params.ChildComponent = ChildComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ChildComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12044);
		
		struct
		{
			class USceneComponent*                             ParentComponent;
			class USceneComponent*                             ChildComponent;
			struct FVector                        ReturnValue;
		} params;
		params.ParentComponent = ParentComponent;
		params.ChildComponent = ChildComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::GetCommandLine()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12043);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class AActor* ActorClass, const struct FVector& Center, float Radius, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12042);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      ActorClass;
			struct FVector                        Center;
			float                                              Radius;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0036[0x7];
			class AActor*                                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Center = Center;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorCenter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class AActor* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12041);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      ActorClass;
			class AActor*                                      ActorCenter;
			float                                              Radius;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0037[0x3];
			class AActor*                                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.ActorCenter = ActorCenter;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Extent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12040);
		
		struct
		{
			TArray<struct FVector>                Points;
			struct FVector                        Center;
			struct FVector                        Extent;
		} params;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
		if (Extent != nullptr)
			*Extent = params.Extent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartingBoneName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                BoneNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const class FName& StartingBoneName, TArray<class FName>* BoneNames)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12039);
		
		struct
		{
			class USkeletalMeshComponent*                      SkeletalMeshComp;
			class FName                                        StartingBoneName;
			TArray<class FName>                                BoneNames;
			int32_t                                            ReturnValue;
		} params;
		params.SkeletalMeshComp = SkeletalMeshComp;
		params.StartingBoneName = StartingBoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneNames != nullptr)
			*BoneNames = params.BoneNames;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ChildActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12038);
		
		struct
		{
			class AActor*                                      ParentActor;
			class AActor*                                      ChildActor;
			struct FRotator                       ReturnValue;
		} params;
		params.ParentActor = ParentActor;
		params.ChildActor = ChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ChildActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12037);
		
		struct
		{
			class AActor*                                      ParentActor;
			class AActor*                                      ChildActor;
			struct FVector                        ReturnValue;
		} params;
		params.ParentActor = ParentActor;
		params.ChildActor = ChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::FlushPressedKeys(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12036);
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FlashContinuous                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxFlashCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FlashFrequencyMilliseconds                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12035);
		
		struct
		{
			class APlayerController*                           PC;
			bool                                               FlashContinuous;
			unsigned char                                      UnknownData_0038[0x3];
			int32_t                                            MaxFlashCount;
			int32_t                                            FlashFrequencyMilliseconds;
		} params;
		params.PC = PC;
		params.FlashContinuous = FlashContinuous;
		params.MaxFlashCount = MaxFlashCount;
		params.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoyfulFileName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowOverWriting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12034);
		
		struct
		{
			class FString                                      SaveDirectory;
			class FString                                      JoyfulFileName;
			class FString                                      SaveText;
			bool                                               AllowOverWriting;
			bool                                               ReturnValue;
		} params;
		params.SaveDirectory = SaveDirectory;
		params.JoyfulFileName = JoyfulFileName;
		params.SaveText = SaveText;
		params.AllowOverWriting = AllowOverWriting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoyfulFileName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveText                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowOverWriting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, TArray<class FString> SaveText, bool AllowOverWriting)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12033);
		
		struct
		{
			class FString                                      SaveDirectory;
			class FString                                      JoyfulFileName;
			TArray<class FString>                              SaveText;
			bool                                               AllowOverWriting;
			bool                                               ReturnValue;
		} params;
		params.SaveDirectory = SaveDirectory;
		params.JoyfulFileName = JoyfulFileName;
		params.SaveText = SaveText;
		params.AllowOverWriting = AllowOverWriting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12032);
		
		struct
		{
			struct FVector2D                      A;
			struct FVector2D                      B;
			float                                              ErrorTolerance;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        YAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ZAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PersistentLines                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32_t NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12031);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                        Center;
			float                                              Radius;
			int32_t                                            NumPoints;
			float                                              Thickness;
			struct FLinearColor                                LineColor;
			struct FVector                        YAxis;
			struct FVector                        ZAxis;
			float                                              Duration;
			bool                                               PersistentLines;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Center = Center;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		params.Thickness = Thickness;
		params.LineColor = LineColor;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.Duration = Duration;
		params.PersistentLines = PersistentLines;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Endpoint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12030);
		
		struct
		{
			class USkeletalMeshComponent*                      Mesh;
			struct FVector                        Endpoint;
			class FName                                        Socket;
			struct FLinearColor                                LineColor;
			float                                              Thickness;
			float                                              Duration;
		} params;
		params.Mesh = Mesh;
		params.Endpoint = Endpoint;
		params.Socket = Socket;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Endpoint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12029);
		
		struct
		{
			class AActor*                                      TheCharacter;
			struct FVector                        Endpoint;
			class FName                                        Socket;
			struct FLinearColor                                LineColor;
			float                                              Thickness;
			float                                              Duration;
		} params;
		params.TheCharacter = TheCharacter;
		params.Endpoint = Endpoint;
		params.Socket = Socket;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      StartActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      EndActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12028);
		
		struct
		{
			class AActor*                                      StartActor;
			class AActor*                                      EndActor;
			struct FLinearColor                                LineColor;
			float                                              Thickness;
			float                                              Duration;
		} params;
		params.StartActor = StartActor;
		params.EndActor = EndActor;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Mat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(class UMaterialInterface* Mat, const class FName& Parameter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12027);
		
		struct
		{
			class UMaterialInterface*                          Mat;
			class FName                                        Parameter;
			bool                                               ReturnValue;
		} params;
		params.Mat = Mat;
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AStaticMeshActor*                            TheSMA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TestPoint                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ClosestSurfacePoint                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12026);
		
		struct
		{
			class AStaticMeshActor*                            TheSMA;
			struct FVector                        TestPoint;
			struct FVector                        ClosestSurfacePoint;
			float                                              ReturnValue;
		} params;
		params.TheSMA = TheSMA;
		params.TestPoint = TestPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestSurfacePoint != nullptr)
			*ClosestSurfacePoint = params.ClosestSurfacePoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                BoneLocations                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12025);
		
		struct
		{
			class AActor*                                      TheCharacter;
			TArray<struct FVector>                BoneLocations;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneLocations != nullptr)
			*BoneLocations = params.BoneLocations;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(int32_t Width, int32_t Height, const struct FLinearColor& ClearColor, float Gamma)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12024);
		
		struct
		{
			int32_t                                            Width;
			int32_t                                            Height;
			struct FLinearColor                                ClearColor;
			float                                              Gamma;
			unsigned char                                      UnknownData_0039[0x4];
			class UTextureRenderTarget2D*                      ReturnValue;
		} params;
		params.Width = Width;
		params.Height = Height;
		params.ClearColor = ClearColor;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         CompClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* UVictoryBPFunctionLibrary::CreatePrimitiveComponent(class UObject* WorldContextObject, class UPrimitiveComponent* CompClass, const class FName& Name, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12023);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UPrimitiveComponent*                         CompClass;
			class FName                                        Name;
			struct FVector                        Location;
			struct FRotator                       Rotation;
			class UPrimitiveComponent*                         ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CompClass = CompClass;
		params.Name = Name;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlane                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UVictoryBPFunctionLibrary::CreatePlane(const struct FVector& Center, const struct FVector& Normal)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12022);
		
		struct
		{
			struct FVector                        Center;
			struct FVector                        Normal;
			unsigned char                                      UnknownData_0040[0x8];
			struct FPlane                                      ReturnValue;
		} params;
		params.Center = Center;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     TheObjectClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UVictoryBPFunctionLibrary::CreateObject(class UObject* WorldContextObject, class UObject* TheObjectClass)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12021);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UObject*                                     TheObjectClass;
			class UObject*                                     ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.TheObjectClass = TheObjectClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FileToHash                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileToStoreHashTo                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CreateMD5Hash(const class FString& FileToHash, const class FString& FileToStoreHashTo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12020);
		
		struct
		{
			class FString                                      FileToHash;
			class FString                                      FileToStoreHashTo;
			bool                                               ReturnValue;
		} params;
		params.FileToHash = FileToHash;
		params.FileToStoreHashTo = FileToStoreHashTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchCase                                        SearchCase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(const class FString& Source, const class FString& SubString, ESearchCase SearchCase)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12019);
		
		struct
		{
			class FString                                      Source;
			class FString                                      SubString;
			ESearchCase                                        SearchCase;
			unsigned char                                      UnknownData_0041[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Source = Source;
		params.SubString = SubString;
		params.SearchCase = SearchCase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        TheVector                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::Conversions__VectorToRotator(const struct FVector& TheVector)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12018);
		
		struct
		{
			struct FVector                        TheVector;
			struct FRotator                       ReturnValue;
		} params;
		params.TheVector = TheVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ConvertedVector                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToVector(const class FString& String, struct FVector* ConvertedVector, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12017);
		
		struct
		{
			class FString                                      String;
			struct FVector                        ConvertedVector;
			bool                                               IsValid;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedVector != nullptr)
			*ConvertedVector = params.ConvertedVector;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ConvertedRotator                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToRotator(const class FString& String, struct FRotator* ConvertedRotator, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12016);
		
		struct
		{
			class FString                                      String;
			struct FRotator                       ConvertedRotator;
			bool                                               IsValid;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedRotator != nullptr)
			*ConvertedRotator = params.ConvertedRotator;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ConvertedColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToColor(const class FString& String, struct FLinearColor* ConvertedColor, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12015);
		
		struct
		{
			class FString                                      String;
			struct FLinearColor                                ConvertedColor;
			bool                                               IsValid;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedColor != nullptr)
			*ConvertedColor = params.ConvertedColor;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       TheRotator                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVictoryBPFunctionLibrary::Conversions__RotatorToVector(const struct FRotator& TheRotator)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12014);
		
		struct
		{
			struct FRotator                       TheRotator;
			struct FVector                        ReturnValue;
		} params;
		params.TheRotator = TheRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ColorAsString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Conversions__ColorToString(const struct FLinearColor& Color, class FString* ColorAsString)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12013);
		
		struct
		{
			struct FLinearColor                                Color;
			class FString                                      ColorAsString;
		} params;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorAsString != nullptr)
			*ColorAsString = params.ColorAsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IN_Float                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(float IN_Float)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12012);
		
		struct
		{
			float                                              IN_Float;
			int32_t                                            ReturnValue;
		} params;
		params.IN_Float = IN_Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::constructRand()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12011);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableStreaming                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CinematicTextureGroups                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12010);
		
		struct
		{
			class UMeshComponent*                              Target;
			float                                              Seconds;
			bool                                               bEnableStreaming;
			unsigned char                                      UnknownData_0042[0x3];
			int32_t                                            CinematicTextureGroups;
		} params;
		params.Target = Target;
		params.Seconds = Seconds;
		params.bEnableStreaming = bEnableStreaming;
		params.CinematicTextureGroups = CinematicTextureGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MD5HashFile1                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MD5HashFile2                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CompareMD5Hash(const class FString& MD5HashFile1, const class FString& MD5HashFile2)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12009);
		
		struct
		{
			class FString                                      MD5HashFile1;
			class FString                                      MD5HashFile2;
			bool                                               ReturnValue;
		} params;
		params.MD5HashFile1 = MD5HashFile1;
		params.MD5HashFile2 = MD5HashFile2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AStaticMeshActor*                            ToClone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       RotationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AStaticMeshActor*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AStaticMeshActor* UVictoryBPFunctionLibrary::Clone__StaticMeshActor(class UObject* WorldContextObject, bool* IsValid, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12008);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0043[0x7];
			class AStaticMeshActor*                            ToClone;
			struct FVector                        LocationOffset;
			struct FRotator                       RotationOffset;
			class AStaticMeshActor*                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ToClone = ToClone;
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12007);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewMaxMoveSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12006);
		
		struct
		{
			class ACharacter*                                  TheCharacter;
			float                                              NewMaxMoveSpeed;
			bool                                               ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		params.NewMaxMoveSpeed = NewMaxMoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVictoryBPFunctionLibrary::Character__GetControllerRotation(class AActor* TheCharacter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12005);
		
		struct
		{
			class AActor*                                      TheCharacter;
			struct FRotator                       ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImagePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColour                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12004);
		
		struct
		{
			class USceneCaptureComponent2D*                    Target;
			class FString                                      ImagePath;
			struct FLinearColor                                ClearColour;
			bool                                               ReturnValue;
		} params;
		params.Target = Target;
		params.ImagePath = ImagePath;
		params.ClearColour = ClearColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      OutPixelLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12003);
		
		struct
		{
			class USceneCaptureComponent2D*                    Target;
			struct FVector                        Location;
			struct FVector2D                      OutPixelLocation;
			bool                                               ReturnValue;
		} params;
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPixelLocation != nullptr)
			*OutPixelLocation = params.OutPixelLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASceneCapture2D*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImagePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColour                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12002);
		
		struct
		{
			class ASceneCapture2D*                             Target;
			class FString                                      ImagePath;
			struct FLinearColor                                ClearColour;
			bool                                               ReturnValue;
		} params;
		params.Target = Target;
		params.ImagePath = ImagePath;
		params.ClearColour = ClearColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASceneCapture2D*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      OutPixelLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12001);
		
		struct
		{
			class ASceneCapture2D*                             Target;
			struct FVector                        Location;
			struct FVector2D                      OutPixelLocation;
			bool                                               ReturnValue;
		} params;
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPixelLocation != nullptr)
			*OutPixelLocation = params.OutPixelLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Source                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                OtherPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ClosestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12000);
		
		struct
		{
			struct FVector                        Source;
			unsigned char                                      UnknownData_0044[0x4];
			TArray<struct FVector>                OtherPoints;
			struct FVector                        ClosestPoint;
			float                                              ReturnValue;
		} params;
		params.Source = Source;
		params.OtherPoints = OtherPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestPoint != nullptr)
			*ClosestPoint = params.ClosestPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TargetArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAscendingOrder                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Array_Sort(TArray<int32_t> TargetArray, bool bAscendingOrder, const class FName& VariableName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11999);
		
		struct
		{
			TArray<int32_t>                                    TargetArray;
			bool                                               bAscendingOrder;
			unsigned char                                      UnknownData_0045[0x3];
			class FName                                        VariableName;
		} params;
		params.TargetArray = TargetArray;
		params.bAscendingOrder = bAscendingOrder;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TargetArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Array_IsValidIndex(TArray<int32_t> TargetArray, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11998);
		
		struct
		{
			TArray<int32_t>                                    TargetArray;
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.TargetArray = TargetArray;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::AppendMultiple(const class FString& A, const class FString& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11997);
		
		struct
		{
			class FString                                      A;
			class FString                                      B;
			class FString                                      ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimBPOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       TheRotation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11996);
		
		struct
		{
			class AActor*                                      AnimBPOwner;
			struct FRotator                       TheRotation;
			float                                              Pitch;
			float                                              Yaw;
			bool                                               ReturnValue;
		} params;
		params.AnimBPOwner = AnimBPOwner;
		params.TheRotation = TheRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pitch != nullptr)
			*Pitch = params.Pitch;
		if (Yaw != nullptr)
			*Yaw = params.Yaw;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimBPOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11995);
		
		struct
		{
			class AActor*                                      AnimBPOwner;
			float                                              Pitch;
			float                                              Yaw;
			bool                                               ReturnValue;
		} params;
		params.AnimBPOwner = AnimBPOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pitch != nullptr)
			*Pitch = params.Pitch;
		if (Yaw != nullptr)
			*Yaw = params.Yaw;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLevelStreamInstanceInfo                    LevelInstanceInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11994);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLevelStreamInstanceInfo                    LevelInstanceInfo;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LevelInstanceInfo = LevelInstanceInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       AddRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11993);
		
		struct
		{
			class AActor*                                      TheActor;
			struct FRotator                       AddRot;
		} params;
		params.TheActor = TheActor;
		params.AddRot = AddRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableStreaming                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CinematicTextureGroups                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11992);
		
		struct
		{
			class AActor*                                      Target;
			float                                              Seconds;
			bool                                               bEnableStreaming;
			unsigned char                                      UnknownData_0046[0x3];
			int32_t                                            CinematicTextureGroups;
		} params;
		params.Target = Target;
		params.Seconds = Seconds;
		params.bEnableStreaming = bEnableStreaming;
		params.CinematicTextureGroups = CinematicTextureGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToTeleport                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DestinationActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11991);
		
		struct
		{
			class AActor*                                      ActorToTeleport;
			class AActor*                                      DestinationActor;
			bool                                               ReturnValue;
		} params;
		params.ActorToTeleport = ActorToTeleport;
		params.DestinationActor = DestinationActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPFunctionLibrary::Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11990);
		
		struct
		{
			class AActor*                                      ParentActor;
			TArray<class AActor*>                              ActorsArray;
		} params;
		params.ParentActor = ParentActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsArray != nullptr)
			*ActorsArray = params.ActorsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11989);
		
		struct
		{
			class AActor*                                      TheCharacter;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0047[0x7];
			class APlayerController*                           ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     TheObject                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Accessor__GetNameAsString(class UObject* TheObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11988);
		
		struct
		{
			class UObject*                                     TheObject;
			class FString                                      ReturnValue;
		} params;
		params.TheObject = TheObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11987);
		
		struct
		{
			class AActor*                                      TheCharacter;
			bool                                               IsValid;
			unsigned char                                      UnknownData_0048[0x7];
			class USkeletalMeshComponent*                      ReturnValue;
		} params;
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVictoryBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(106);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MakeVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UVictoryBPHTML::VictoryHTML5_SetCursorVisible(bool MakeVisible)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12233);
		
		struct
		{
			bool                                               MakeVisible;
		} params;
		params.MakeVisible = MakeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPHTML.IsHTML
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPHTML::IsHTML()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12232);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryBPHTML.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVictoryBPHTML::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(107);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVictoryISM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AVictoryISM::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(108);
		return ptr;
	}

}


