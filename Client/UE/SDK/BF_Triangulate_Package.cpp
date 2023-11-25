/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.PointInTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      C                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	 */
	bool UBF_Triangulate_C::PointInTriangle(const struct FVector2D& P, const struct FVector2D& A, const struct FVector2D& B, const struct FVector2D& C, bool IgnoreSide, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127424);
		
		struct
		{
			struct FVector2D                      P;
			struct FVector2D                      A;
			struct FVector2D                      B;
			struct FVector2D                      C;
			bool                                               IgnoreSide;
			unsigned char                                      UnknownData_0000[0x7];
			class UObject*                                     __WorldContext;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x3];
		} params;
		params.P = P;
		params.A = A;
		params.B = B;
		params.C = C;
		params.IgnoreSide = IgnoreSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.LineSegIntersectionTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      a1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      b1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      a2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      b2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UBF_Triangulate_C::LineSegIntersectionTest(const struct FVector2D& a1, const struct FVector2D& b1, const struct FVector2D& a2, const struct FVector2D& b2, bool IgnoreSide, class UObject* __WorldContext, bool* Return)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127425);
		
		struct
		{
			struct FVector2D                      a1;
			struct FVector2D                      b1;
			struct FVector2D                      a2;
			struct FVector2D                      b2;
			bool                                               IgnoreSide;
			unsigned char                                      UnknownData_0002[0x7];
			class UObject*                                     __WorldContext;
			bool                                               Return;
			unsigned char                                      UnknownData_0003[0x3];
		} params;
		params.a1 = a1;
		params.b1 = b1;
		params.a2 = a2;
		params.b2 = b2;
		params.IgnoreSide = IgnoreSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.FlipPoligon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_VertexID>                        vert                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FST_VertexID>                        Return                                                     (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBF_Triangulate_C::FlipPoligon(TArray<struct FST_VertexID>* vert, class UObject* __WorldContext, TArray<struct FST_VertexID>* Return)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127426);
		
		struct
		{
			TArray<struct FST_VertexID>                        vert;
			class UObject*                                     __WorldContext;
			TArray<struct FST_VertexID>                        Return;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (vert != nullptr)
			*vert = params.vert;
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.RecursiveTriangulate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_VertexID>                        vert                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_VertexID>                        FullSetVert                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_LineSegment>                     BuiltSeg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Thread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBF_Triangulate_C::RecursiveTriangulate(TArray<struct FST_VertexID>* vert, TArray<struct FST_VertexID>* FullSetVert, TArray<struct FST_LineSegment>* BuiltSeg, int32_t Thread, class UObject* __WorldContext, TArray<int32_t>* Triangles)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127427);
		
		struct
		{
			TArray<struct FST_VertexID>                        vert;
			TArray<struct FST_VertexID>                        FullSetVert;
			TArray<struct FST_LineSegment>                     BuiltSeg;
			int32_t                                            Thread;
			unsigned char                                      UnknownData_0004[0x4];
			class UObject*                                     __WorldContext;
			TArray<int32_t>                                    Triangles;
		} params;
		params.Thread = Thread;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (vert != nullptr)
			*vert = params.vert;
		if (FullSetVert != nullptr)
			*FullSetVert = params.FullSetVert;
		if (BuiltSeg != nullptr)
			*BuiltSeg = params.BuiltSeg;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.LoopArrayIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Shift                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBF_Triangulate_C::LoopArrayIndex(int32_t Index, int32_t Shift, int32_t ArrayLength, class UObject* __WorldContext, int32_t* Return)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127428);
		
		struct
		{
			int32_t                                            Index;
			int32_t                                            Shift;
			int32_t                                            ArrayLength;
			unsigned char                                      UnknownData_0005[0x4];
			class UObject*                                     __WorldContext;
			int32_t                                            Return;
		} params;
		params.Index = Index;
		params.Shift = Shift;
		params.ArrayLength = ArrayLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.TriangulatePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                Vertices                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UBF_Triangulate_C::TriangulatePolygon(TArray<struct FVector>* Vertices, class UObject* __WorldContext, TArray<int32_t>* Triangles)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(127429);
		
		struct
		{
			TArray<struct FVector>                Vertices;
			class UObject*                                     __WorldContext;
			TArray<int32_t>                                    Triangles;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBF_Triangulate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBF_Triangulate_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(127430);
		return ptr;
	}

}


