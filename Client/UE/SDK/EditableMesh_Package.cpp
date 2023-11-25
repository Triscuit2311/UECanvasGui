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
	 * 		Name   -> Function EditableMesh.EditableMesh.WeldVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutNewVertexID                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13027);
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			struct FVertexID                                   OutNewVertexID;
		} params;
		params.VertexIDs = VertexIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexID != nullptr)
			*OutNewVertexID = params.OutNewVertexID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemoveVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasVertexRemoved                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     OutNewEdgeID                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13026);
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               bOutWasVertexRemoved;
			unsigned char                                      UnknownData_0000[0x3];
			struct FEdgeID                                     OutNewEdgeID;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasVertexRemoved != nullptr)
			*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
		if (OutNewEdgeID != nullptr)
			*OutNewEdgeID = params.OutNewEdgeID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasEdgeRemoved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  OutNewPolygonID                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13025);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               bOutWasEdgeRemoved;
			unsigned char                                      UnknownData_0001[0x3];
			struct FPolygonID                                  OutNewPolygonID;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasEdgeRemoved != nullptr)
			*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
		if (OutNewPolygonID != nullptr)
			*OutNewPolygonID = params.OutNewPolygonID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TriangulatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewTrianglePolygons                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13024);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			TArray<struct FPolygonID>                          OutNewTrianglePolygons;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewTrianglePolygons != nullptr)
			*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.TessellatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETriangleTessellationMode                          TriangleTessellationMode                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13023);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			ETriangleTessellationMode                          TriangleTessellationMode;
			unsigned char                                      UnknownData_0002[0x7];
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.TriangleTessellationMode = TriangleTessellationMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.StartModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeshModificationType                              MeshModificationType                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMeshTopologyChange                                MeshTopologyChange                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13022);
		
		struct
		{
			EMeshModificationType                              MeshModificationType;
			EMeshTopologyChange                                MeshTopologyChange;
		} params;
		params.MeshModificationType = MeshModificationType;
		params.MeshTopologyChange = MeshTopologyChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonToSplit>                     PolygonsToSplit                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13021);
		
		struct
		{
			TArray<struct FPolygonToSplit>                     PolygonsToSplit;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonsToSplit = PolygonsToSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygonalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs1                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs2                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             BoundaryIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13020);
		
		struct
		{
			struct FPlane                                      InPlane;
			TArray<struct FPolygonID>                          PolygonIDs1;
			TArray<struct FPolygonID>                          PolygonIDs2;
			TArray<struct FEdgeID>                             BoundaryIDs;
		} params;
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygonIDs1 != nullptr)
			*PolygonIDs1 = params.PolygonIDs1;
		if (PolygonIDs2 != nullptr)
			*PolygonIDs2 = params.PolygonIDs2;
		if (BoundaryIDs != nullptr)
			*BoundaryIDs = params.BoundaryIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13019);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			unsigned char                                      UnknownData_0003[0x4];
			TArray<float>                                      Splits;
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      VerticesNewCornerSharpness                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13018);
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			TArray<float>                                      VerticesNewCornerSharpness;
		} params;
		params.VertexIDs = VertexIDs;
		params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForVertex>                AttributesForVertices                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13017);
		
		struct
		{
			TArray<struct FAttributesForVertex>                AttributesForVertices;
		} params;
		params.AttributesForVertices = AttributesForVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13016);
		
		struct
		{
			TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances;
		} params;
		params.AttributesForVertexInstances = AttributesForVertexInstances;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumTexCoords                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13015);
		
		struct
		{
			int32_t                                            NumTexCoords;
		} params;
		params.NumTexCoords = NumTexCoords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetSubdivisionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSubdivisionCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13014);
		
		struct
		{
			int32_t                                            NewSubdivisionCount;
		} params;
		params.NewSubdivisionCount = NewSubdivisionCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13013);
		
		struct
		{
			TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons;
		} params;
		params.VertexAttributesForPolygons = VertexAttributesForPolygons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDotProductForSoftEdge                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13012);
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			float                                              MaxDotProductForSoftEdge;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       EdgesNewIsHard                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13011);
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			TArray<bool>                                       EdgesNewIsHard;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewIsHard = EdgesNewIsHard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      EdgesNewCreaseSharpness                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13010);
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			TArray<float>                                      EdgesNewCreaseSharpness;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAttributesForEdge>                  AttributesForEdges                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13009);
		
		struct
		{
			TArray<struct FAttributesForEdge>                  AttributesForEdges;
		} params;
		params.AttributesForEdges = AttributesForEdges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowUndo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowUndo                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13008);
		
		struct
		{
			bool                                               bInAllowUndo;
		} params;
		params.bInAllowUndo = bInAllowUndo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowSpatialDatabase                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13007);
		
		struct
		{
			bool                                               bInAllowSpatialDatabase;
		} params;
		params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowCompact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowCompact                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13006);
		
		struct
		{
			bool                                               bInAllowCompact;
		} params;
		params.bInAllowCompact = bInAllowCompact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13005);
		
		struct
		{
			struct FPlane                                      InPlane;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        LineSegmentStart                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LineSegmentEnd                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13004);
		
		struct
		{
			struct FVector                        LineSegmentStart;
			struct FVector                        LineSegmentEnd;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.LineSegmentStart = LineSegmentStart;
		params.LineSegmentEnd = LineSegmentEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlane>                              Planes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13003);
		
		struct
		{
			TArray<struct FPlane>                              Planes;
			TArray<struct FPolygonID>                          OutPolygons;
		} params;
		params.Planes = Planes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.RevertInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEditableMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMesh::RevertInstance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13002);
		
		struct
		{
			class UEditableMesh*                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.Revert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::Revert()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13001);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.RebuildRenderMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::RebuildRenderMesh()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13000);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.QuadrangulateMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12999);
		
		struct
		{
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.PropagateInstanceChanges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::PropagateInstanceChanges()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12998);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.MoveVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexToMove>                       VerticesToMove                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12997);
		
		struct
		{
			TArray<struct FVertexToMove>                       VerticesToMove;
		} params;
		params.VerticesToMove = VerticesToMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeVertexID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VertexIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::MakeVertexID(int32_t VertexIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12996);
		
		struct
		{
			int32_t                                            VertexIndex;
			struct FVertexID                                   ReturnValue;
		} params;
		params.VertexIndex = VertexIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PolygonIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::MakePolygonID(int32_t PolygonIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12995);
		
		struct
		{
			int32_t                                            PolygonIndex;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.PolygonIndex = PolygonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonGroupID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PolygonGroupIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12994);
		
		struct
		{
			int32_t                                            PolygonGroupIndex;
			struct FPolygonGroupID                             ReturnValue;
		} params;
		params.PolygonGroupIndex = PolygonGroupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeEdgeID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EdgeIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::MakeEdgeID(int32_t EdgeIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12993);
		
		struct
		{
			int32_t                                            EdgeIndex;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.EdgeIndex = EdgeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12992);
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12991);
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			bool                                               ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12990);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			bool                                               ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12989);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsUndoAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsUndoAllowed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12988);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsSpatialDatabaseAllowed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12987);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsPreviewingSubdivisions()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12986);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsOrphanedVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12985);
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCompactAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsCompactAllowed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12984);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommittedAsInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsCommittedAsInstance()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12983);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsCommitted()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12982);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.IsBeingModified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsBeingModified()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12981);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidVertexID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::InvalidVertexID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12980);
		
		struct
		{
			struct FVertexID                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::InvalidPolygonID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12979);
		
		struct
		{
			struct FPolygonID                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12978);
		
		struct
		{
			struct FPolygonGroupID                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidEdgeID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::InvalidEdgeID()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12977);
		
		struct
		{
			struct FEdgeID                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InsetPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              InsetFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InsetProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInsetPolygonsMode                                 Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12976);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			float                                              InsetFixedDistance;
			float                                              InsetProgressTowardCenter;
			EInsetPolygonsMode                                 Mode;
			unsigned char                                      UnknownData_0004[0x7];
			TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;
			TArray<struct FPolygonID>                          OutNewSidePolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.InsetFixedDistance = InsetFixedDistance;
		params.InsetProgressTowardCenter = InsetProgressTowardCenter;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InsertEdgeLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12975);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			unsigned char                                      UnknownData_0005[0x4];
			TArray<float>                                      Splits;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.InitializeAdapters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::InitializeAdapters()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12974);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexPairEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   NextVertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversed                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12973);
		
		struct
		{
			struct FVertexID                                   VertexID;
			struct FVertexID                                   NextVertexID;
			bool                                               bOutEdgeWindingIsReversed;
			unsigned char                                      UnknownData_0006[0x3];
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexID = VertexID;
		params.NextVertexID = NextVertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversed != nullptr)
			*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12972);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			struct FVertexID                                   ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexInstanceCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12971);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12970);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			unsigned char                                      UnknownData_0007[0x4];
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12969);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12968);
		
		struct
		{
			struct FVertexInstanceID                           VertexInstanceID;
			int32_t                                            ConnectedPolygonNumber;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.VertexInstanceID = VertexInstanceID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12967);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12966);
		
		struct
		{
			struct FVertexID                                   VertexID;
			unsigned char                                      UnknownData_0008[0x4];
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutConnectedEdgeIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12965);
		
		struct
		{
			struct FVertexID                                   VertexID;
			unsigned char                                      UnknownData_0009[0x4];
			TArray<struct FEdgeID>                             OutConnectedEdgeIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedEdgeIDs != nullptr)
			*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12964);
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int32_t ConnectedEdgeNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12963);
		
		struct
		{
			struct FVertexID                                   VertexID;
			int32_t                                            ConnectedEdgeNumber;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexID = VertexID;
		params.ConnectedEdgeNumber = ConnectedEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutAdjacentVertexIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12962);
		
		struct
		{
			struct FVertexID                                   VertexID;
			unsigned char                                      UnknownData_0010[0x4];
			TArray<struct FVertexID>                           OutAdjacentVertexIDs;
		} params;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentVertexIDs != nullptr)
			*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetTextureCoordinateCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12961);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubdivisionLimitData                       ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12960);
		
		struct
		{
			struct FSubdivisionLimitData                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetSubdivisionCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12959);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12958);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonTriangleNumber                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriangleID                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32_t PolygonTriangleNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12957);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonTriangleNumber;
			struct FTriangleID                                 ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonTriangleNumber = PolygonTriangleNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12956);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0011[0x4];
			TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexIDs != nullptr)
			*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12955);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0012[0x4];
			TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
			*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexInstanceID                           ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12954);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonVertexNumber;
			struct FVertexInstanceID                           ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12953);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12952);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PolygonVertexNumber;
			struct FVertexID                                   ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12951);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0013[0x4];
			TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterEdgeIDs != nullptr)
			*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12950);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerimeterEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversedForPolygon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32_t PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12949);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			int32_t                                            PerimeterEdgeNumber;
			bool                                               bOutEdgeWindingIsReversedForPolygon;
			unsigned char                                      UnknownData_0014[0x3];
			struct FEdgeID                                     ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.PerimeterEdgeNumber = PerimeterEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversedForPolygon != nullptr)
			*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32_t PolygonNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12948);
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			int32_t                                            PolygonNumber;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		params.PolygonNumber = PolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonGroupCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonGroupCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12947);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12946);
		
		struct
		{
			struct FPolygonGroupID                             PolygonGroupID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12945);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutAdjacentPolygons                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12944);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0015[0x4];
			TArray<struct FPolygonID>                          OutAdjacentPolygons;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentPolygons != nullptr)
			*OutAdjacentPolygons = params.OutAdjacentPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetGroupForPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonGroupID                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12943);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FPolygonGroupID                             ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonGroupID                             ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12942);
		
		struct
		{
			struct FPolygonGroupID                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID0                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID1                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12941);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			struct FVertexID                                   OutEdgeVertexID0;
			struct FVertexID                                   OutEdgeVertexID1;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeVertexID0 != nullptr)
			*OutEdgeVertexID0 = params.OutEdgeVertexID0;
		if (OutEdgeVertexID1 != nullptr)
			*OutEdgeVertexID1 = params.OutEdgeVertexID1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EdgeVertexNumber                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t EdgeVertexNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12940);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            EdgeVertexNumber;
			struct FVertexID                                   ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		params.EdgeVertexNumber = EdgeVertexNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12939);
		
		struct
		{
			struct FVertexID                                   VertexID0;
			struct FVertexID                                   VertexID1;
			struct FEdgeID                                     ReturnValue;
		} params;
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeLoopElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             EdgeLoopIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12938);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			unsigned char                                      UnknownData_0016[0x4];
			TArray<struct FEdgeID>                             EdgeLoopIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EdgeLoopIDs != nullptr)
			*EdgeLoopIDs = params.EdgeLoopIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetEdgeCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12937);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12936);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			unsigned char                                      UnknownData_0017[0x4];
			TArray<struct FPolygonID>                          OutConnectedPolygonIDs;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12935);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12934);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			int32_t                                            ConnectedPolygonNumber;
			struct FPolygonID                                  ReturnValue;
		} params;
		params.EdgeID = EdgeID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12933);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FlipPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12932);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12931);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVertexID                                   VertexID;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID0                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID1                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12930);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVertexID                                   EdgeVertexID0;
			struct FVertexID                                   EdgeVertexID1;
			int32_t                                            ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		params.EdgeVertexID0 = EdgeVertexID0;
		params.EdgeVertexID1 = EdgeVertexID1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutFlippedEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDsToSplit                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12929);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			unsigned char                                      UnknownData_0018[0x4];
			TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs;
			TArray<struct FEdgeID>                             OutFlippedEdgeIDs;
			TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake;
			TArray<struct FPolygonID>                          OutPolygonIDsToSplit;
		} params;
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeLoopEdgeIDs != nullptr)
			*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
		if (OutFlippedEdgeIDs != nullptr)
			*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
		if (OutReversedEdgeIDPathToTake != nullptr)
			*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
		if (OutPolygonIDsToSplit != nullptr)
			*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtrudePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          Polygons                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              ExtrudeDistance                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepNeighborsTogether                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12928);
		
		struct
		{
			TArray<struct FPolygonID>                          Polygons;
			float                                              ExtrudeDistance;
			bool                                               bKeepNeighborsTogether;
			unsigned char                                      UnknownData_0019[0x3];
			TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons;
		} params;
		params.Polygons = Polygons;
		params.ExtrudeDistance = ExtrudeDistance;
		params.bKeepNeighborsTogether = bKeepNeighborsTogether;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtrudedFrontPolygons != nullptr)
			*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyExtendClosestEdge                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReferencePosition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewExtendedVertexIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12927);
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDs;
			bool                                               bOnlyExtendClosestEdge;
			unsigned char                                      UnknownData_0020[0x3];
			struct FVector                        ReferencePosition;
			TArray<struct FVertexID>                           OutNewExtendedVertexIDs;
		} params;
		params.VertexIDs = VertexIDs;
		params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
		params.ReferencePosition = ReferencePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedVertexIDs != nullptr)
			*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldNeighbors                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12926);
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDs;
			bool                                               bWeldNeighbors;
			unsigned char                                      UnknownData_0021[0x7];
			TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs;
		} params;
		params.EdgeIDs = EdgeIDs;
		params.bWeldNeighbors = bWeldNeighbors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedEdgeIDs != nullptr)
			*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.EndModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromUndo                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::EndModification(bool bFromUndo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12925);
		
		struct
		{
			bool                                               bFromUndo;
		} params;
		params.bFromUndo = bFromUndo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12924);
		
		struct
		{
			TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete;
			bool                                               bDeleteOrphanedVertices;
		} params;
		params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12923);
		
		struct
		{
			struct FVertexID                                   VertexID;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.VertexID = VertexID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDsToDelete                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12922);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDsToDelete;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.PolygonIDsToDelete = PolygonIDsToDelete;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupID>                     PolygonGroupIDs                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12921);
		
		struct
		{
			TArray<struct FPolygonGroupID>                     PolygonGroupIDs;
		} params;
		params.PolygonGroupIDs = PolygonGroupIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteOrphanVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDsToDelete                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12920);
		
		struct
		{
			TArray<struct FVertexID>                           VertexIDsToDelete;
		} params;
		params.VertexIDsToDelete = VertexIDsToDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDsToDelete                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12919);
		
		struct
		{
			TArray<struct FEdgeID>                             EdgeIDsToDelete;
			bool                                               bDeleteOrphanedVertices;
		} params;
		params.EdgeIDsToDelete = EdgeIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12918);
		
		struct
		{
			struct FEdgeID                                     EdgeID;
			bool                                               bDeleteOrphanedEdges;
			bool                                               bDeleteOrphanedVertices;
			bool                                               bDeleteOrphanedVertexInstances;
			bool                                               bDeleteEmptyPolygonGroups;
		} params;
		params.EdgeID = EdgeID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexToCreate>                     VerticesToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12917);
		
		struct
		{
			TArray<struct FVertexToCreate>                     VerticesToCreate;
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.VerticesToCreate = VerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12916);
		
		struct
		{
			TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate;
			TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs;
		} params;
		params.VertexInstancesToCreate = VertexInstancesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexInstanceIDs != nullptr)
			*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonToCreate>                    PolygonsToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12915);
		
		struct
		{
			TArray<struct FPolygonToCreate>                    PolygonsToCreate;
			TArray<struct FPolygonID>                          OutNewPolygonIDs;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonsToCreate = PolygonsToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12914);
		
		struct
		{
			TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate;
			TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs;
		} params;
		params.PolygonGroupsToCreate = PolygonGroupsToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonGroupIDs != nullptr)
			*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12913);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0022[0x4];
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumVerticesToCreate                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12912);
		
		struct
		{
			int32_t                                            NumVerticesToCreate;
			unsigned char                                      UnknownData_0023[0x4];
			TArray<struct FVertexID>                           OutNewVertexIDs;
		} params;
		params.NumVerticesToCreate = NumVerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FEdgeToCreate>                       EdgesToCreate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12911);
		
		struct
		{
			TArray<struct FEdgeToCreate>                       EdgesToCreate;
			TArray<struct FEdgeID>                             OutNewEdgeIDs;
		} params;
		params.EdgesToCreate = EdgesToCreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutSharedEdgeIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12910);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			TArray<struct FEdgeID>                             OutSharedEdgeIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSharedEdgeIDs != nullptr)
			*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlane                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12909);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			unsigned char                                      UnknownData_0024[0xC];
			struct FPlane                                      ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12908);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVector                        ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12907);
		
		struct
		{
			struct FPolygonID                                  PolygonID;
			struct FVector                        ReturnValue;
		} params;
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBoxSphereBounds                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12906);
		
		struct
		{
			struct FBoxSphereBounds                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FBox UEditableMesh::ComputeBoundingBox()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12905);
		
		struct
		{
			struct FBox                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.CommitInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToInstanceTo                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEditableMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12904);
		
		struct
		{
			class UPrimitiveComponent*                         ComponentToInstanceTo;
			class UEditableMesh*                               ReturnValue;
		} params;
		params.ComponentToInstanceTo = ComponentToInstanceTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.Commit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::Commit()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12903);
		
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
	 * 		Name   -> Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12902);
		
		struct
		{
			TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons;
		} params;
		params.VertexInstancesForPolygons = VertexInstancesForPolygons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.BevelPolygons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BevelFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BevelProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12901);
		
		struct
		{
			TArray<struct FPolygonID>                          PolygonIDs;
			float                                              BevelFixedDistance;
			float                                              BevelProgressTowardCenter;
			TArray<struct FPolygonID>                          OutNewCenterPolygonIDs;
			TArray<struct FPolygonID>                          OutNewSidePolygonIDs;
		} params;
		params.PolygonIDs = PolygonIDs;
		params.BevelFixedDistance = BevelFixedDistance;
		params.BevelProgressTowardCenter = BevelProgressTowardCenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedPolygonGroups                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12900);
		
		struct
		{
			TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons;
			bool                                               bDeleteOrphanedPolygonGroups;
		} params;
		params.PolygonGroupForPolygons = PolygonGroupForPolygons;
		params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMesh.AnyChangesToUndo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::AnyChangesToUndo()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12899);
		
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
	 * 		Name   -> PredefinedFunction UEditableMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableMesh::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(272);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableMeshAdapter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(270);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEditableMesh*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMeshFactory::MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13028);
		
		struct
		{
			class UPrimitiveComponent*                         PrimitiveComponent;
			int32_t                                            LODIndex;
			unsigned char                                      UnknownData_0000[0x4];
			class UEditableMesh*                               ReturnValue;
		} params;
		params.PrimitiveComponent = PrimitiveComponent;
		params.LODIndex = LODIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableMeshFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableMeshFactory::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(273);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableStaticMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableStaticMeshAdapter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(274);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGeometryCollectionAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEditableGeometryCollectionAdapter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(271);
		return ptr;
	}

}


