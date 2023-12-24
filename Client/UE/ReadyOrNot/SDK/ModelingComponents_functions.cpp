#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// (None)

class UClass* UBaseCreateFromSelectedToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedToolBuilder");

	return Clss;
}


// BaseCreateFromSelectedToolBuilder ModelingComponents.Default__BaseCreateFromSelectedToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedToolBuilder* UBaseCreateFromSelectedToolBuilder::GetDefaultObj()
{
	static class UBaseCreateFromSelectedToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedToolBuilder*>(UBaseCreateFromSelectedToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.OnAcceptHandleSourcesProperties
// (None)

class UClass* UOnAcceptHandleSourcesProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnAcceptHandleSourcesProperties");

	return Clss;
}


// OnAcceptHandleSourcesProperties ModelingComponents.Default__OnAcceptHandleSourcesProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnAcceptHandleSourcesProperties* UOnAcceptHandleSourcesProperties::GetDefaultObj()
{
	static class UOnAcceptHandleSourcesProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnAcceptHandleSourcesProperties*>(UOnAcceptHandleSourcesProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// (None)

class UClass* UBaseCreateFromSelectedHandleSourceProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedHandleSourceProperties");

	return Clss;
}


// BaseCreateFromSelectedHandleSourceProperties ModelingComponents.Default__BaseCreateFromSelectedHandleSourceProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedHandleSourceProperties* UBaseCreateFromSelectedHandleSourceProperties::GetDefaultObj()
{
	static class UBaseCreateFromSelectedHandleSourceProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedHandleSourceProperties*>(UBaseCreateFromSelectedHandleSourceProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.TransformInputsToolProperties
// (None)

class UClass* UTransformInputsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformInputsToolProperties");

	return Clss;
}


// TransformInputsToolProperties ModelingComponents.Default__TransformInputsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformInputsToolProperties* UTransformInputsToolProperties::GetDefaultObj()
{
	static class UTransformInputsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformInputsToolProperties*>(UTransformInputsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseCreateFromSelectedTool
// (None)

class UClass* UBaseCreateFromSelectedTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCreateFromSelectedTool");

	return Clss;
}


// BaseCreateFromSelectedTool ModelingComponents.Default__BaseCreateFromSelectedTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseCreateFromSelectedTool* UBaseCreateFromSelectedTool::GetDefaultObj()
{
	static class UBaseCreateFromSelectedTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCreateFromSelectedTool*>(UBaseCreateFromSelectedTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UBaseDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDynamicMeshComponent");

	return Clss;
}


// BaseDynamicMeshComponent ModelingComponents.Default__BaseDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseDynamicMeshComponent* UBaseDynamicMeshComponent::GetDefaultObj()
{
	static class UBaseDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDynamicMeshComponent*>(UBaseDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseMeshProcessingToolBuilder
// (None)

class UClass* UBaseMeshProcessingToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMeshProcessingToolBuilder");

	return Clss;
}


// BaseMeshProcessingToolBuilder ModelingComponents.Default__BaseMeshProcessingToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseMeshProcessingToolBuilder* UBaseMeshProcessingToolBuilder::GetDefaultObj()
{
	static class UBaseMeshProcessingToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMeshProcessingToolBuilder*>(UBaseMeshProcessingToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseMeshProcessingTool
// (None)

class UClass* UBaseMeshProcessingTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMeshProcessingTool");

	return Clss;
}


// BaseMeshProcessingTool ModelingComponents.Default__BaseMeshProcessingTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseMeshProcessingTool* UBaseMeshProcessingTool::GetDefaultObj()
{
	static class UBaseMeshProcessingTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMeshProcessingTool*>(UBaseMeshProcessingTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.BaseVoxelTool
// (None)

class UClass* UBaseVoxelTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseVoxelTool");

	return Clss;
}


// BaseVoxelTool ModelingComponents.Default__BaseVoxelTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseVoxelTool* UBaseVoxelTool::GetDefaultObj()
{
	static class UBaseVoxelTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseVoxelTool*>(UBaseVoxelTool::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.CollectSurfacePathMechanic
// (None)

class UClass* UCollectSurfacePathMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectSurfacePathMechanic");

	return Clss;
}


// CollectSurfacePathMechanic ModelingComponents.Default__CollectSurfacePathMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UCollectSurfacePathMechanic* UCollectSurfacePathMechanic::GetDefaultObj()
{
	static class UCollectSurfacePathMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectSurfacePathMechanic*>(UCollectSurfacePathMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.ConstructionPlaneMechanic
// (None)

class UClass* UConstructionPlaneMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstructionPlaneMechanic");

	return Clss;
}


// ConstructionPlaneMechanic ModelingComponents.Default__ConstructionPlaneMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstructionPlaneMechanic* UConstructionPlaneMechanic::GetDefaultObj()
{
	static class UConstructionPlaneMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstructionPlaneMechanic*>(UConstructionPlaneMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.CurveControlPointsMechanic
// (None)

class UClass* UCurveControlPointsMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurveControlPointsMechanic");

	return Clss;
}


// CurveControlPointsMechanic ModelingComponents.Default__CurveControlPointsMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurveControlPointsMechanic* UCurveControlPointsMechanic::GetDefaultObj()
{
	static class UCurveControlPointsMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurveControlPointsMechanic*>(UCurveControlPointsMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// (None)

class UClass* UDynamicMeshReplacementChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshReplacementChangeTarget");

	return Clss;
}


// DynamicMeshReplacementChangeTarget ModelingComponents.Default__DynamicMeshReplacementChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshReplacementChangeTarget* UDynamicMeshReplacementChangeTarget::GetDefaultObj()
{
	static class UDynamicMeshReplacementChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshReplacementChangeTarget*>(UDynamicMeshReplacementChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.LineSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULineSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LineSetComponent");

	return Clss;
}


// LineSetComponent ModelingComponents.Default__LineSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULineSetComponent* ULineSetComponent::GetDefaultObj()
{
	static class ULineSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULineSetComponent*>(ULineSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshCommandChangeTarget
// (None)

class UClass* IMeshCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCommandChangeTarget");

	return Clss;
}


// MeshCommandChangeTarget ModelingComponents.Default__MeshCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshCommandChangeTarget* IMeshCommandChangeTarget::GetDefaultObj()
{
	static class IMeshCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshCommandChangeTarget*>(IMeshCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// (None)

class UClass* UMeshOpPreviewWithBackgroundCompute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshOpPreviewWithBackgroundCompute");

	return Clss;
}


// MeshOpPreviewWithBackgroundCompute ModelingComponents.Default__MeshOpPreviewWithBackgroundCompute
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshOpPreviewWithBackgroundCompute* UMeshOpPreviewWithBackgroundCompute::GetDefaultObj()
{
	static class UMeshOpPreviewWithBackgroundCompute* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshOpPreviewWithBackgroundCompute*>(UMeshOpPreviewWithBackgroundCompute::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshReplacementCommandChangeTarget
// (None)

class UClass* IMeshReplacementCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReplacementCommandChangeTarget");

	return Clss;
}


// MeshReplacementCommandChangeTarget ModelingComponents.Default__MeshReplacementCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshReplacementCommandChangeTarget* IMeshReplacementCommandChangeTarget::GetDefaultObj()
{
	static class IMeshReplacementCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshReplacementCommandChangeTarget*>(IMeshReplacementCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MeshVertexCommandChangeTarget
// (None)

class UClass* IMeshVertexCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexCommandChangeTarget");

	return Clss;
}


// MeshVertexCommandChangeTarget ModelingComponents.Default__MeshVertexCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshVertexCommandChangeTarget* IMeshVertexCommandChangeTarget::GetDefaultObj()
{
	static class IMeshVertexCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshVertexCommandChangeTarget*>(IMeshVertexCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.MultiTransformer
// (None)

class UClass* UMultiTransformer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiTransformer");

	return Clss;
}


// MultiTransformer ModelingComponents.Default__MultiTransformer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiTransformer* UMultiTransformer::GetDefaultObj()
{
	static class UMultiTransformer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiTransformer*>(UMultiTransformer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.OctreeDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOctreeDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OctreeDynamicMeshComponent");

	return Clss;
}


// OctreeDynamicMeshComponent ModelingComponents.Default__OctreeDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOctreeDynamicMeshComponent* UOctreeDynamicMeshComponent::GetDefaultObj()
{
	static class UOctreeDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOctreeDynamicMeshComponent*>(UOctreeDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PlaneDistanceFromHitMechanic
// (None)

class UClass* UPlaneDistanceFromHitMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneDistanceFromHitMechanic");

	return Clss;
}


// PlaneDistanceFromHitMechanic ModelingComponents.Default__PlaneDistanceFromHitMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneDistanceFromHitMechanic* UPlaneDistanceFromHitMechanic::GetDefaultObj()
{
	static class UPlaneDistanceFromHitMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneDistanceFromHitMechanic*>(UPlaneDistanceFromHitMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PointSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPointSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointSetComponent");

	return Clss;
}


// PointSetComponent ModelingComponents.Default__PointSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointSetComponent* UPointSetComponent::GetDefaultObj()
{
	static class UPointSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointSetComponent*>(UPointSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewMesh
// (None)

class UClass* UPreviewMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewMesh");

	return Clss;
}


// PreviewMesh ModelingComponents.Default__PreviewMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UPreviewMesh* UPreviewMesh::GetDefaultObj()
{
	static class UPreviewMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UPreviewMesh*>(UPreviewMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolyEditPreviewMesh
// (None)

class UClass* UPolyEditPreviewMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditPreviewMesh");

	return Clss;
}


// PolyEditPreviewMesh ModelingComponents.Default__PolyEditPreviewMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditPreviewMesh* UPolyEditPreviewMesh::GetDefaultObj()
{
	static class UPolyEditPreviewMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditPreviewMesh*>(UPolyEditPreviewMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolygonSelectionMechanicProperties
// (None)

class UClass* UPolygonSelectionMechanicProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolygonSelectionMechanicProperties");

	return Clss;
}


// PolygonSelectionMechanicProperties ModelingComponents.Default__PolygonSelectionMechanicProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolygonSelectionMechanicProperties* UPolygonSelectionMechanicProperties::GetDefaultObj()
{
	static class UPolygonSelectionMechanicProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolygonSelectionMechanicProperties*>(UPolygonSelectionMechanicProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PolygonSelectionMechanic
// (None)

class UClass* UPolygonSelectionMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolygonSelectionMechanic");

	return Clss;
}


// PolygonSelectionMechanic ModelingComponents.Default__PolygonSelectionMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolygonSelectionMechanic* UPolygonSelectionMechanic::GetDefaultObj()
{
	static class UPolygonSelectionMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolygonSelectionMechanic*>(UPolygonSelectionMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewGeometryActor
// (Actor)

class UClass* APreviewGeometryActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewGeometryActor");

	return Clss;
}


// PreviewGeometryActor ModelingComponents.Default__PreviewGeometryActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APreviewGeometryActor* APreviewGeometryActor::GetDefaultObj()
{
	static class APreviewGeometryActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewGeometryActor*>(APreviewGeometryActor::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.PreviewGeometry
// (None)

class UClass* UPreviewGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewGeometry");

	return Clss;
}


// PreviewGeometry ModelingComponents.Default__PreviewGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UPreviewGeometry* UPreviewGeometry::GetDefaultObj()
{
	static class UPreviewGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UPreviewGeometry*>(UPreviewGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetVisibility");

	Params::UPreviewGeometry_SetLineSetVisibility_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetMaterial");

	Params::UPreviewGeometry_SetLineSetMaterial_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetAllLineSetsMaterial");

	Params::UPreviewGeometry_SetAllLineSetsMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveLineSet");

	Params::UPreviewGeometry_RemoveLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;
	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// (Final, Native, Public)
// Parameters:
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveAllLineSets");

	Params::UPreviewGeometry_RemoveAllLineSets_Params Parms{};

	Parms.bDestroy = bDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.GetActor
// (Final, Native, Public, Const)
// Parameters:
// class APreviewGeometryActor*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "GetActor");

	Params::UPreviewGeometry_GetActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.FindLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::FindLineSet(const class FString& LineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "FindLineSet");

	Params::UPreviewGeometry_FindLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.Disconnect
// (Final, Native, Public)
// Parameters:

void UPreviewGeometry::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.CreateInWorld
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  WithTransform                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UPreviewGeometry::CreateInWorld(class UWorld* World, struct FTransform& WithTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "CreateInWorld");

	Params::UPreviewGeometry_CreateInWorld_Params Parms{};

	Parms.World = World;
	Parms.WithTransform = WithTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelingComponents.PreviewGeometry.AddLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::AddLineSet(const class FString& LineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "AddLineSet");

	Params::UPreviewGeometry_AddLineSet_Params Parms{};

	Parms.LineSetIdentifier = LineSetIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelingComponents.PreviewMeshActor
// (Actor)

class UClass* APreviewMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewMeshActor");

	return Clss;
}


// PreviewMeshActor ModelingComponents.Default__PreviewMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APreviewMeshActor* APreviewMeshActor::GetDefaultObj()
{
	static class APreviewMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewMeshActor*>(APreviewMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SimpleDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USimpleDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleDynamicMeshComponent");

	return Clss;
}


// SimpleDynamicMeshComponent ModelingComponents.Default__SimpleDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleDynamicMeshComponent* USimpleDynamicMeshComponent::GetDefaultObj()
{
	static class USimpleDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleDynamicMeshComponent*>(USimpleDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// (None)

class UClass* USpaceCurveDeformationMechanicPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceCurveDeformationMechanicPropertySet");

	return Clss;
}


// SpaceCurveDeformationMechanicPropertySet ModelingComponents.Default__SpaceCurveDeformationMechanicPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceCurveDeformationMechanicPropertySet* USpaceCurveDeformationMechanicPropertySet::GetDefaultObj()
{
	static class USpaceCurveDeformationMechanicPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceCurveDeformationMechanicPropertySet*>(USpaceCurveDeformationMechanicPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpaceCurveDeformationMechanic
// (None)

class UClass* USpaceCurveDeformationMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceCurveDeformationMechanic");

	return Clss;
}


// SpaceCurveDeformationMechanic ModelingComponents.Default__SpaceCurveDeformationMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceCurveDeformationMechanic* USpaceCurveDeformationMechanic::GetDefaultObj()
{
	static class USpaceCurveDeformationMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceCurveDeformationMechanic*>(USpaceCurveDeformationMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.SpatialCurveDistanceMechanic
// (None)

class UClass* USpatialCurveDistanceMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialCurveDistanceMechanic");

	return Clss;
}


// SpatialCurveDistanceMechanic ModelingComponents.Default__SpatialCurveDistanceMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatialCurveDistanceMechanic* USpatialCurveDistanceMechanic::GetDefaultObj()
{
	static class USpatialCurveDistanceMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialCurveDistanceMechanic*>(USpatialCurveDistanceMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.TriangleSetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTriangleSetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TriangleSetComponent");

	return Clss;
}


// TriangleSetComponent ModelingComponents.Default__TriangleSetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTriangleSetComponent* UTriangleSetComponent::GetDefaultObj()
{
	static class UTriangleSetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTriangleSetComponent*>(UTriangleSetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.UVLayoutPreviewProperties
// (None)

class UClass* UUVLayoutPreviewProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutPreviewProperties");

	return Clss;
}


// UVLayoutPreviewProperties ModelingComponents.Default__UVLayoutPreviewProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutPreviewProperties* UUVLayoutPreviewProperties::GetDefaultObj()
{
	static class UUVLayoutPreviewProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutPreviewProperties*>(UUVLayoutPreviewProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.UVLayoutPreview
// (None)

class UClass* UUVLayoutPreview::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVLayoutPreview");

	return Clss;
}


// UVLayoutPreview ModelingComponents.Default__UVLayoutPreview
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVLayoutPreview* UUVLayoutPreview::GetDefaultObj()
{
	static class UUVLayoutPreview* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVLayoutPreview*>(UUVLayoutPreview::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.VoxelProperties
// (None)

class UClass* UVoxelProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelProperties");

	return Clss;
}


// VoxelProperties ModelingComponents.Default__VoxelProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelProperties* UVoxelProperties::GetDefaultObj()
{
	static class UVoxelProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelProperties*>(UVoxelProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelingComponents.WeightMapSetProperties
// (None)

class UClass* UWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeightMapSetProperties");

	return Clss;
}


// WeightMapSetProperties ModelingComponents.Default__WeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeightMapSetProperties* UWeightMapSetProperties::GetDefaultObj()
{
	static class UWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeightMapSetProperties*>(UWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeightMapSetProperties", "GetWeightMapsFunc");

	Params::UWeightMapSetProperties_GetWeightMapsFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


