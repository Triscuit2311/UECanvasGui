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
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProceduralMeshComponent*                    InProcMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PlanePosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateOtherHalf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProceduralMeshComponent*                    OutOtherHalfProcMesh                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EProcMeshSliceCapOption                            CapOption                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          CapMaterial                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12651);
		
		struct
		{
			class UProceduralMeshComponent*                    InProcMesh;
			struct FVector                        PlanePosition;
			struct FVector                        PlaneNormal;
			bool                                               bCreateOtherHalf;
			unsigned char                                      UnknownData_0000[0x7];
			class UProceduralMeshComponent*                    OutOtherHalfProcMesh;
			EProcMeshSliceCapOption                            CapOption;
			unsigned char                                      UnknownData_0001[0x7];
			class UMaterialInterface*                          CapMaterial;
		} params;
		params.InProcMesh = InProcMesh;
		params.PlanePosition = PlanePosition;
		params.PlaneNormal = PlaneNormal;
		params.bCreateOtherHalf = bCreateOtherHalf;
		params.CapOption = CapOption;
		params.CapMaterial = CapMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOtherHalfProcMesh != nullptr)
			*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 InMesh                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12650);
		
		struct
		{
			class UStaticMesh*                                 InMesh;
			int32_t                                            LODIndex;
			int32_t                                            SectionIndex;
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UVs;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.InMesh = InMesh;
		params.LODIndex = LODIndex;
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Normals != nullptr)
			*Normals = params.Normals;
		if (UVs != nullptr)
			*UVs = params.UVs;
		if (Tangents != nullptr)
			*Tangents = params.Tangents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProceduralMeshComponent*                    InProcMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12649);
		
		struct
		{
			class UProceduralMeshComponent*                    InProcMesh;
			int32_t                                            SectionIndex;
			unsigned char                                      UnknownData_0002[0x4];
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UVs;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.InProcMesh = InProcMesh;
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Normals != nullptr)
			*Normals = params.Normals;
		if (UVs != nullptr)
			*UVs = params.UVs;
		if (Tangents != nullptr)
			*Tangents = params.Tangents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        BoxRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12648);
		
		struct
		{
			struct FVector                        BoxRadius;
			unsigned char                                      UnknownData_0003[0x4];
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UVs;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.BoxRadius = BoxRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Normals != nullptr)
			*Normals = params.Normals;
		if (UVs != nullptr)
			*UVs = params.UVs;
		if (Tangents != nullptr)
			*Tangents = params.Tangents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              GridSpacing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12647);
		
		struct
		{
			int32_t                                            NumX;
			int32_t                                            NumY;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Vertices;
			TArray<struct FVector2D>              UVs;
			float                                              GridSpacing;
		} params;
		params.NumX = NumX;
		params.NumY = NumY;
		params.GridSpacing = GridSpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (UVs != nullptr)
			*UVs = params.UVs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWinding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>* Triangles)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12646);
		
		struct
		{
			int32_t                                            NumX;
			int32_t                                            NumY;
			bool                                               bWinding;
			unsigned char                                      UnknownData_0004[0x7];
			TArray<int32_t>                                    Triangles;
		} params;
		params.NumX = NumX;
		params.NumY = NumY;
		params.bWinding = bWinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV1s                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              GridSpacing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12645);
		
		struct
		{
			int32_t                                            NumX;
			int32_t                                            NumY;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Vertices;
			TArray<struct FVector2D>              UVs;
			TArray<struct FVector2D>              UV1s;
			float                                              GridSpacing;
		} params;
		params.NumX = NumX;
		params.NumY = NumY;
		params.GridSpacing = GridSpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (UVs != nullptr)
			*UVs = params.UVs;
		if (UV1s != nullptr)
			*UV1s = params.UV1s;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProceduralMeshComponent*                    ProcMeshComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12644);
		
		struct
		{
			class UStaticMeshComponent*                        StaticMeshComponent;
			int32_t                                            LODIndex;
			unsigned char                                      UnknownData_0005[0x4];
			class UProceduralMeshComponent*                    ProcMeshComponent;
			bool                                               bCreateCollision;
		} params;
		params.StaticMeshComponent = StaticMeshComponent;
		params.LODIndex = LODIndex;
		params.ProcMeshComponent = ProcMeshComponent;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Vert0                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Vert1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Vert2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Vert3                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32_t>* Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12643);
		
		struct
		{
			TArray<int32_t>                                    Triangles;
			int32_t                                            Vert0;
			int32_t                                            Vert1;
			int32_t                                            Vert2;
			int32_t                                            Vert3;
		} params;
		params.Vert0 = Vert0;
		params.Vert1 = Vert1;
		params.Vert2 = Vert2;
		params.Vert3 = Vert3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UVs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12642);
		
		struct
		{
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector2D>              UVs;
			TArray<struct FVector>                Normals;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.UVs = UVs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Normals != nullptr)
			*Normals = params.Normals;
		if (Tangents != nullptr)
			*Tangents = params.Tangents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKismetProceduralMeshLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UKismetProceduralMeshLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(212);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12662);
		
		struct
		{
			int32_t                                            SectionIndex;
			unsigned char                                      UnknownData_0000[0x4];
			TArray<struct FVector>                Vertices;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UV0;
			TArray<struct FVector2D>              UV1;
			TArray<struct FVector2D>              UV2;
			TArray<struct FVector2D>              UV3;
			TArray<struct FLinearColor>                        VertexColors;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                 VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12661);
		
		struct
		{
			int32_t                                            SectionIndex;
			unsigned char                                      UnknownData_0001[0x4];
			TArray<struct FVector>                Vertices;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UV0;
			TArray<struct FColor>                 VertexColors;
			TArray<struct FProcMeshTangent>                    Tangents;
		} params;
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12660);
		
		struct
		{
			int32_t                                            SectionIndex;
			bool                                               bNewVisibility;
		} params;
		params.SectionIndex = SectionIndex;
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12659);
		
		struct
		{
			int32_t                                            SectionIndex;
			bool                                               ReturnValue;
		} params;
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UProceduralMeshComponent::GetNumSections()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12658);
		
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
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12657);
		
		struct
		{
			int32_t                                            SectionIndex;
			unsigned char                                      UnknownData_0002[0x4];
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UV0;
			TArray<struct FVector2D>              UV1;
			TArray<struct FVector2D>              UV2;
			TArray<struct FVector2D>              UV3;
			TArray<struct FLinearColor>                        VertexColors;
			TArray<struct FProcMeshTangent>                    Tangents;
			bool                                               bCreateCollision;
		} params;
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>              UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                 VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12656);
		
		struct
		{
			int32_t                                            SectionIndex;
			unsigned char                                      UnknownData_0003[0x4];
			TArray<struct FVector>                Vertices;
			TArray<int32_t>                                    Triangles;
			TArray<struct FVector>                Normals;
			TArray<struct FVector2D>              UV0;
			TArray<struct FColor>                 VertexColors;
			TArray<struct FProcMeshTangent>                    Tangents;
			bool                                               bCreateCollision;
		} params;
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12655);
		
		struct
		{
			int32_t                                            SectionIndex;
		} params;
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::ClearCollisionConvexMeshes()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12654);
		
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
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::ClearAllMeshSections()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12653);
		
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
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                ConvexVerts                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12652);
		
		struct
		{
			TArray<struct FVector>                ConvexVerts;
		} params;
		params.ConvexVerts = ConvexVerts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(213);
		return ptr;
	}

}


