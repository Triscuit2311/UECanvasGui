#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InteractiveToolsFramework.InteractiveToolBuilder
// (None)

class UClass* UInteractiveToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveToolBuilder");

	return Clss;
}


// InteractiveToolBuilder InteractiveToolsFramework.Default__InteractiveToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveToolBuilder* UInteractiveToolBuilder::GetDefaultObj()
{
	static class UInteractiveToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveToolBuilder*>(UInteractiveToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// (None)

class UClass* UInteractiveToolPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveToolPropertySet");

	return Clss;
}


// InteractiveToolPropertySet InteractiveToolsFramework.Default__InteractiveToolPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveToolPropertySet* UInteractiveToolPropertySet::GetDefaultObj()
{
	static class UInteractiveToolPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveToolPropertySet*>(UInteractiveToolPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveTool
// (None)

class UClass* UInteractiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveTool");

	return Clss;
}


// InteractiveTool InteractiveToolsFramework.Default__InteractiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UInteractiveTool* UInteractiveTool::GetDefaultObj()
{
	static class UInteractiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveTool*>(UInteractiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MultiSelectionTool
// (None)

class UClass* UMultiSelectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiSelectionTool");

	return Clss;
}


// MultiSelectionTool InteractiveToolsFramework.Default__MultiSelectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMultiSelectionTool* UMultiSelectionTool::GetDefaultObj()
{
	static class UMultiSelectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiSelectionTool*>(UMultiSelectionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.SingleSelectionTool
// (None)

class UClass* USingleSelectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleSelectionTool");

	return Clss;
}


// SingleSelectionTool InteractiveToolsFramework.Default__SingleSelectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USingleSelectionTool* USingleSelectionTool::GetDefaultObj()
{
	static class USingleSelectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleSelectionTool*>(USingleSelectionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractionMechanic
// (None)

class UClass* UInteractionMechanic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractionMechanic");

	return Clss;
}


// InteractionMechanic InteractiveToolsFramework.Default__InteractionMechanic
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractionMechanic* UInteractionMechanic::GetDefaultObj()
{
	static class UInteractionMechanic* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractionMechanic*>(UInteractionMechanic::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// (Actor)

class UClass* AInternalToolFrameworkActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InternalToolFrameworkActor");

	return Clss;
}


// InternalToolFrameworkActor InteractiveToolsFramework.Default__InternalToolFrameworkActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInternalToolFrameworkActor* AInternalToolFrameworkActor::GetDefaultObj()
{
	static class AInternalToolFrameworkActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInternalToolFrameworkActor*>(AInternalToolFrameworkActor::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.SingleClickTool
// (None)

class UClass* USingleClickTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleClickTool");

	return Clss;
}


// SingleClickTool InteractiveToolsFramework.Default__SingleClickTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USingleClickTool* USingleClickTool::GetDefaultObj()
{
	static class USingleClickTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleClickTool*>(USingleClickTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// (None)

class UClass* UMeshSurfacePointToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSurfacePointToolBuilder");

	return Clss;
}


// MeshSurfacePointToolBuilder InteractiveToolsFramework.Default__MeshSurfacePointToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSurfacePointToolBuilder* UMeshSurfacePointToolBuilder::GetDefaultObj()
{
	static class UMeshSurfacePointToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSurfacePointToolBuilder*>(UMeshSurfacePointToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MeshSurfacePointTool
// (None)

class UClass* UMeshSurfacePointTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSurfacePointTool");

	return Clss;
}


// MeshSurfacePointTool InteractiveToolsFramework.Default__MeshSurfacePointTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSurfacePointTool* UMeshSurfacePointTool::GetDefaultObj()
{
	static class UMeshSurfacePointTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSurfacePointTool*>(UMeshSurfacePointTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.BaseBrushTool
// (None)

class UClass* UBaseBrushTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseBrushTool");

	return Clss;
}


// BaseBrushTool InteractiveToolsFramework.Default__BaseBrushTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBaseBrushTool* UBaseBrushTool::GetDefaultObj()
{
	static class UBaseBrushTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseBrushTool*>(UBaseBrushTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.BrushBaseProperties
// (None)

class UClass* UBrushBaseProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushBaseProperties");

	return Clss;
}


// BrushBaseProperties InteractiveToolsFramework.Default__BrushBaseProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushBaseProperties* UBrushBaseProperties::GetDefaultObj()
{
	static class UBrushBaseProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushBaseProperties*>(UBrushBaseProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// (None)

class UClass* UInteractiveGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveGizmoBuilder");

	return Clss;
}


// InteractiveGizmoBuilder InteractiveToolsFramework.Default__InteractiveGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveGizmoBuilder* UInteractiveGizmoBuilder::GetDefaultObj()
{
	static class UInteractiveGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveGizmoBuilder*>(UInteractiveGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveGizmo
// (None)

class UClass* UInteractiveGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveGizmo");

	return Clss;
}


// InteractiveGizmo InteractiveToolsFramework.Default__InteractiveGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UInteractiveGizmo* UInteractiveGizmo::GetDefaultObj()
{
	static class UInteractiveGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveGizmo*>(UInteractiveGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InputBehavior
// (None)

class UClass* UInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputBehavior");

	return Clss;
}


// InputBehavior InteractiveToolsFramework.Default__InputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputBehavior* UInputBehavior::GetDefaultObj()
{
	static class UInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputBehavior*>(UInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// (None)

class UClass* UAnyButtonInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnyButtonInputBehavior");

	return Clss;
}


// AnyButtonInputBehavior InteractiveToolsFramework.Default__AnyButtonInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnyButtonInputBehavior* UAnyButtonInputBehavior::GetDefaultObj()
{
	static class UAnyButtonInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnyButtonInputBehavior*>(UAnyButtonInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// (None)

class UClass* UAxisAngleGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxisAngleGizmoBuilder");

	return Clss;
}


// AxisAngleGizmoBuilder InteractiveToolsFramework.Default__AxisAngleGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAxisAngleGizmoBuilder* UAxisAngleGizmoBuilder::GetDefaultObj()
{
	static class UAxisAngleGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxisAngleGizmoBuilder*>(UAxisAngleGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.AxisAngleGizmo
// (None)

class UClass* UAxisAngleGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxisAngleGizmo");

	return Clss;
}


// AxisAngleGizmo InteractiveToolsFramework.Default__AxisAngleGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UAxisAngleGizmo* UAxisAngleGizmo::GetDefaultObj()
{
	static class UAxisAngleGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxisAngleGizmo*>(UAxisAngleGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// (None)

class UClass* UAxisPositionGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxisPositionGizmoBuilder");

	return Clss;
}


// AxisPositionGizmoBuilder InteractiveToolsFramework.Default__AxisPositionGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAxisPositionGizmoBuilder* UAxisPositionGizmoBuilder::GetDefaultObj()
{
	static class UAxisPositionGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxisPositionGizmoBuilder*>(UAxisPositionGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.AxisPositionGizmo
// (None)

class UClass* UAxisPositionGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxisPositionGizmo");

	return Clss;
}


// AxisPositionGizmo InteractiveToolsFramework.Default__AxisPositionGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UAxisPositionGizmo* UAxisPositionGizmo::GetDefaultObj()
{
	static class UAxisPositionGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxisPositionGizmo*>(UAxisPositionGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// (None)

class UClass* UGizmoConstantAxisSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoConstantAxisSource");

	return Clss;
}


// GizmoConstantAxisSource InteractiveToolsFramework.Default__GizmoConstantAxisSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoConstantAxisSource* UGizmoConstantAxisSource::GetDefaultObj()
{
	static class UGizmoConstantAxisSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoConstantAxisSource*>(UGizmoConstantAxisSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// (None)

class UClass* UGizmoConstantFrameAxisSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoConstantFrameAxisSource");

	return Clss;
}


// GizmoConstantFrameAxisSource InteractiveToolsFramework.Default__GizmoConstantFrameAxisSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoConstantFrameAxisSource* UGizmoConstantFrameAxisSource::GetDefaultObj()
{
	static class UGizmoConstantFrameAxisSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoConstantFrameAxisSource*>(UGizmoConstantFrameAxisSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// (None)

class UClass* UGizmoWorldAxisSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoWorldAxisSource");

	return Clss;
}


// GizmoWorldAxisSource InteractiveToolsFramework.Default__GizmoWorldAxisSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoWorldAxisSource* UGizmoWorldAxisSource::GetDefaultObj()
{
	static class UGizmoWorldAxisSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoWorldAxisSource*>(UGizmoWorldAxisSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// (None)

class UClass* UGizmoComponentAxisSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoComponentAxisSource");

	return Clss;
}


// GizmoComponentAxisSource InteractiveToolsFramework.Default__GizmoComponentAxisSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoComponentAxisSource* UGizmoComponentAxisSource::GetDefaultObj()
{
	static class UGizmoComponentAxisSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoComponentAxisSource*>(UGizmoComponentAxisSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// (None)

class UClass* UBrushStampIndicatorBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushStampIndicatorBuilder");

	return Clss;
}


// BrushStampIndicatorBuilder InteractiveToolsFramework.Default__BrushStampIndicatorBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushStampIndicatorBuilder* UBrushStampIndicatorBuilder::GetDefaultObj()
{
	static class UBrushStampIndicatorBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushStampIndicatorBuilder*>(UBrushStampIndicatorBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.BrushStampIndicator
// (None)

class UClass* UBrushStampIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushStampIndicator");

	return Clss;
}


// BrushStampIndicator InteractiveToolsFramework.Default__BrushStampIndicator
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UBrushStampIndicator* UBrushStampIndicator::GetDefaultObj()
{
	static class UBrushStampIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushStampIndicator*>(UBrushStampIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.ClickDragInputBehavior
// (None)

class UClass* UClickDragInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClickDragInputBehavior");

	return Clss;
}


// ClickDragInputBehavior InteractiveToolsFramework.Default__ClickDragInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UClickDragInputBehavior* UClickDragInputBehavior::GetDefaultObj()
{
	static class UClickDragInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UClickDragInputBehavior*>(UClickDragInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// (None)

class UClass* ULocalClickDragInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalClickDragInputBehavior");

	return Clss;
}


// LocalClickDragInputBehavior InteractiveToolsFramework.Default__LocalClickDragInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalClickDragInputBehavior* ULocalClickDragInputBehavior::GetDefaultObj()
{
	static class ULocalClickDragInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalClickDragInputBehavior*>(ULocalClickDragInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.ClickDragToolBuilder
// (None)

class UClass* UClickDragToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClickDragToolBuilder");

	return Clss;
}


// ClickDragToolBuilder InteractiveToolsFramework.Default__ClickDragToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UClickDragToolBuilder* UClickDragToolBuilder::GetDefaultObj()
{
	static class UClickDragToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UClickDragToolBuilder*>(UClickDragToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.ClickDragTool
// (None)

class UClass* UClickDragTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClickDragTool");

	return Clss;
}


// ClickDragTool InteractiveToolsFramework.Default__ClickDragTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UClickDragTool* UClickDragTool::GetDefaultObj()
{
	static class UClickDragTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UClickDragTool*>(UClickDragTool::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoActor
// (Actor)

class UClass* AGizmoActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoActor");

	return Clss;
}


// GizmoActor InteractiveToolsFramework.Default__GizmoActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGizmoActor* AGizmoActor::GetDefaultObj()
{
	static class AGizmoActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGizmoActor*>(AGizmoActor::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoBaseComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoBaseComponent");

	return Clss;
}


// GizmoBaseComponent InteractiveToolsFramework.Default__GizmoBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoBaseComponent* UGizmoBaseComponent::GetDefaultObj()
{
	static class UGizmoBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoBaseComponent*>(UGizmoBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                               bWorldIn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::UGizmoBaseComponent_UpdateWorldLocalState_Params Parms{};

	Parms.bWorldIn = bWorldIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                               bHoveringIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::UGizmoBaseComponent_UpdateHoverState_Params Parms{};

	Parms.bHoveringIn = bHoveringIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class InteractiveToolsFramework.GizmoArrowComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoArrowComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoArrowComponent");

	return Clss;
}


// GizmoArrowComponent InteractiveToolsFramework.Default__GizmoArrowComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoArrowComponent* UGizmoArrowComponent::GetDefaultObj()
{
	static class UGizmoArrowComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoArrowComponent*>(UGizmoArrowComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoBoxComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoBoxComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoBoxComponent");

	return Clss;
}


// GizmoBoxComponent InteractiveToolsFramework.Default__GizmoBoxComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoBoxComponent* UGizmoBoxComponent::GetDefaultObj()
{
	static class UGizmoBoxComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoBoxComponent*>(UGizmoBoxComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoCircleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoCircleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoCircleComponent");

	return Clss;
}


// GizmoCircleComponent InteractiveToolsFramework.Default__GizmoCircleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoCircleComponent* UGizmoCircleComponent::GetDefaultObj()
{
	static class UGizmoCircleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoCircleComponent*>(UGizmoCircleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoTransformSource
// (None)

class UClass* IGizmoTransformSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoTransformSource");

	return Clss;
}


// GizmoTransformSource InteractiveToolsFramework.Default__GizmoTransformSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoTransformSource* IGizmoTransformSource::GetDefaultObj()
{
	static class IGizmoTransformSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoTransformSource*>(IGizmoTransformSource::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void IGizmoTransformSource::SetTransform(struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::IGizmoTransformSource_SetTransform_Params Parms{};

	Parms.NewTransform = NewTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform IGizmoTransformSource::GetTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::IGizmoTransformSource_GetTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InteractiveToolsFramework.GizmoAxisSource
// (None)

class UClass* IGizmoAxisSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoAxisSource");

	return Clss;
}


// GizmoAxisSource InteractiveToolsFramework.Default__GizmoAxisSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoAxisSource* IGizmoAxisSource::GetDefaultObj()
{
	static class IGizmoAxisSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoAxisSource*>(IGizmoAxisSource::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGizmoAxisSource::HasTangentVectors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::IGizmoAxisSource_HasTangentVectors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// struct FVector                     TangentXOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TangentYOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::IGizmoAxisSource_GetTangentVectors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TangentXOut != nullptr)
		*TangentXOut = std::move(Parms.TangentXOut);

	if (TangentYOut != nullptr)
		*TangentYOut = std::move(Parms.TangentYOut);

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::IGizmoAxisSource_GetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::IGizmoAxisSource_GetDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InteractiveToolsFramework.GizmoClickTarget
// (None)

class UClass* IGizmoClickTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoClickTarget");

	return Clss;
}


// GizmoClickTarget InteractiveToolsFramework.Default__GizmoClickTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoClickTarget* IGizmoClickTarget::GetDefaultObj()
{
	static class IGizmoClickTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoClickTarget*>(IGizmoClickTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public, Const)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::IGizmoClickTarget_UpdateHoverState_Params Parms{};

	Parms.bHovering = bHovering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class InteractiveToolsFramework.GizmoStateTarget
// (None)

class UClass* IGizmoStateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoStateTarget");

	return Clss;
}


// GizmoStateTarget InteractiveToolsFramework.Default__GizmoStateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoStateTarget* IGizmoStateTarget::GetDefaultObj()
{
	static class IGizmoStateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoStateTarget*>(IGizmoStateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::EndUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::BeginUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// (None)

class UClass* IGizmoFloatParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoFloatParameterSource");

	return Clss;
}


// GizmoFloatParameterSource InteractiveToolsFramework.Default__GizmoFloatParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoFloatParameterSource* IGizmoFloatParameterSource::GetDefaultObj()
{
	static class IGizmoFloatParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoFloatParameterSource*>(IGizmoFloatParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::IGizmoFloatParameterSource_SetParameter_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IGizmoFloatParameterSource::GetParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::IGizmoFloatParameterSource_GetParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// (None)

class UClass* IGizmoVec2ParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoVec2ParameterSource");

	return Clss;
}


// GizmoVec2ParameterSource InteractiveToolsFramework.Default__GizmoVec2ParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IGizmoVec2ParameterSource* IGizmoVec2ParameterSource::GetDefaultObj()
{
	static class IGizmoVec2ParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IGizmoVec2ParameterSource*>(IGizmoVec2ParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoVec2ParameterSource::SetParameter(struct FVector2D& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::IGizmoVec2ParameterSource_SetParameter_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D IGizmoVec2ParameterSource::GetParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::IGizmoVec2ParameterSource_GetParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class InteractiveToolsFramework.GizmoLineHandleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoLineHandleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoLineHandleComponent");

	return Clss;
}


// GizmoLineHandleComponent InteractiveToolsFramework.Default__GizmoLineHandleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoLineHandleComponent* UGizmoLineHandleComponent::GetDefaultObj()
{
	static class UGizmoLineHandleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoLineHandleComponent*>(UGizmoLineHandleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoRectangleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGizmoRectangleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoRectangleComponent");

	return Clss;
}


// GizmoRectangleComponent InteractiveToolsFramework.Default__GizmoRectangleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoRectangleComponent* UGizmoRectangleComponent::GetDefaultObj()
{
	static class UGizmoRectangleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoRectangleComponent*>(UGizmoRectangleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// (None)

class UClass* UGizmoLambdaHitTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoLambdaHitTarget");

	return Clss;
}


// GizmoLambdaHitTarget InteractiveToolsFramework.Default__GizmoLambdaHitTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoLambdaHitTarget* UGizmoLambdaHitTarget::GetDefaultObj()
{
	static class UGizmoLambdaHitTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoLambdaHitTarget*>(UGizmoLambdaHitTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// (None)

class UClass* UGizmoComponentHitTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoComponentHitTarget");

	return Clss;
}


// GizmoComponentHitTarget InteractiveToolsFramework.Default__GizmoComponentHitTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoComponentHitTarget* UGizmoComponentHitTarget::GetDefaultObj()
{
	static class UGizmoComponentHitTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoComponentHitTarget*>(UGizmoComponentHitTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InputBehaviorSet
// (None)

class UClass* UInputBehaviorSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputBehaviorSet");

	return Clss;
}


// InputBehaviorSet InteractiveToolsFramework.Default__InputBehaviorSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputBehaviorSet* UInputBehaviorSet::GetDefaultObj()
{
	static class UInputBehaviorSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputBehaviorSet*>(UInputBehaviorSet::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InputBehaviorSource
// (None)

class UClass* IInputBehaviorSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputBehaviorSource");

	return Clss;
}


// InputBehaviorSource InteractiveToolsFramework.Default__InputBehaviorSource
// (Public, ClassDefaultObject, ArchetypeObject)

class IInputBehaviorSource* IInputBehaviorSource::GetDefaultObj()
{
	static class IInputBehaviorSource* Default = nullptr;

	if (!Default)
		Default = static_cast<IInputBehaviorSource*>(IInputBehaviorSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InputRouter
// (None)

class UClass* UInputRouter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputRouter");

	return Clss;
}


// InputRouter InteractiveToolsFramework.Default__InputRouter
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputRouter* UInputRouter::GetDefaultObj()
{
	static class UInputRouter* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputRouter*>(UInputRouter::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveGizmoManager
// (None)

class UClass* UInteractiveGizmoManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveGizmoManager");

	return Clss;
}


// InteractiveGizmoManager InteractiveToolsFramework.Default__InteractiveGizmoManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveGizmoManager* UInteractiveGizmoManager::GetDefaultObj()
{
	static class UInteractiveGizmoManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveGizmoManager*>(UInteractiveGizmoManager::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// (None)

class UClass* IToolContextTransactionProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolContextTransactionProvider");

	return Clss;
}


// ToolContextTransactionProvider InteractiveToolsFramework.Default__ToolContextTransactionProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolContextTransactionProvider* IToolContextTransactionProvider::GetDefaultObj()
{
	static class IToolContextTransactionProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolContextTransactionProvider*>(IToolContextTransactionProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveToolManager
// (None)

class UClass* UInteractiveToolManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveToolManager");

	return Clss;
}


// InteractiveToolManager InteractiveToolsFramework.Default__InteractiveToolManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveToolManager* UInteractiveToolManager::GetDefaultObj()
{
	static class UInteractiveToolManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveToolManager*>(UInteractiveToolManager::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.ToolFrameworkComponent
// (None)

class UClass* IToolFrameworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolFrameworkComponent");

	return Clss;
}


// ToolFrameworkComponent InteractiveToolsFramework.Default__ToolFrameworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolFrameworkComponent* IToolFrameworkComponent::GetDefaultObj()
{
	static class IToolFrameworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolFrameworkComponent*>(IToolFrameworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.InteractiveToolsContext
// (None)

class UClass* UInteractiveToolsContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveToolsContext");

	return Clss;
}


// InteractiveToolsContext InteractiveToolsFramework.Default__InteractiveToolsContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveToolsContext* UInteractiveToolsContext::GetDefaultObj()
{
	static class UInteractiveToolsContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveToolsContext*>(UInteractiveToolsContext::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.IntervalGizmoActor
// (Actor)

class UClass* AIntervalGizmoActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntervalGizmoActor");

	return Clss;
}


// IntervalGizmoActor InteractiveToolsFramework.Default__IntervalGizmoActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AIntervalGizmoActor* AIntervalGizmoActor::GetDefaultObj()
{
	static class AIntervalGizmoActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AIntervalGizmoActor*>(AIntervalGizmoActor::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.IntervalGizmoBuilder
// (None)

class UClass* UIntervalGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntervalGizmoBuilder");

	return Clss;
}


// IntervalGizmoBuilder InteractiveToolsFramework.Default__IntervalGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UIntervalGizmoBuilder* UIntervalGizmoBuilder::GetDefaultObj()
{
	static class UIntervalGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UIntervalGizmoBuilder*>(UIntervalGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.IntervalGizmo
// (None)

class UClass* UIntervalGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IntervalGizmo");

	return Clss;
}


// IntervalGizmo InteractiveToolsFramework.Default__IntervalGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UIntervalGizmo* UIntervalGizmo::GetDefaultObj()
{
	static class UIntervalGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UIntervalGizmo*>(UIntervalGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// (None)

class UClass* UGizmoBaseFloatParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoBaseFloatParameterSource");

	return Clss;
}


// GizmoBaseFloatParameterSource InteractiveToolsFramework.Default__GizmoBaseFloatParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoBaseFloatParameterSource* UGizmoBaseFloatParameterSource::GetDefaultObj()
{
	static class UGizmoBaseFloatParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoBaseFloatParameterSource*>(UGizmoBaseFloatParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// (None)

class UClass* UGizmoAxisIntervalParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoAxisIntervalParameterSource");

	return Clss;
}


// GizmoAxisIntervalParameterSource InteractiveToolsFramework.Default__GizmoAxisIntervalParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoAxisIntervalParameterSource* UGizmoAxisIntervalParameterSource::GetDefaultObj()
{
	static class UGizmoAxisIntervalParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoAxisIntervalParameterSource*>(UGizmoAxisIntervalParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// (None)

class UClass* UKeyAsModifierInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyAsModifierInputBehavior");

	return Clss;
}


// KeyAsModifierInputBehavior InteractiveToolsFramework.Default__KeyAsModifierInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyAsModifierInputBehavior* UKeyAsModifierInputBehavior::GetDefaultObj()
{
	static class UKeyAsModifierInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyAsModifierInputBehavior*>(UKeyAsModifierInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MouseHoverBehavior
// (None)

class UClass* UMouseHoverBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MouseHoverBehavior");

	return Clss;
}


// MouseHoverBehavior InteractiveToolsFramework.Default__MouseHoverBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UMouseHoverBehavior* UMouseHoverBehavior::GetDefaultObj()
{
	static class UMouseHoverBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UMouseHoverBehavior*>(UMouseHoverBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// (None)

class UClass* UMultiClickSequenceInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiClickSequenceInputBehavior");

	return Clss;
}


// MultiClickSequenceInputBehavior InteractiveToolsFramework.Default__MultiClickSequenceInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiClickSequenceInputBehavior* UMultiClickSequenceInputBehavior::GetDefaultObj()
{
	static class UMultiClickSequenceInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiClickSequenceInputBehavior*>(UMultiClickSequenceInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// (None)

class UClass* UGizmoLocalFloatParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoLocalFloatParameterSource");

	return Clss;
}


// GizmoLocalFloatParameterSource InteractiveToolsFramework.Default__GizmoLocalFloatParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoLocalFloatParameterSource* UGizmoLocalFloatParameterSource::GetDefaultObj()
{
	static class UGizmoLocalFloatParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoLocalFloatParameterSource*>(UGizmoLocalFloatParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// (None)

class UClass* UGizmoBaseVec2ParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoBaseVec2ParameterSource");

	return Clss;
}


// GizmoBaseVec2ParameterSource InteractiveToolsFramework.Default__GizmoBaseVec2ParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoBaseVec2ParameterSource* UGizmoBaseVec2ParameterSource::GetDefaultObj()
{
	static class UGizmoBaseVec2ParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoBaseVec2ParameterSource*>(UGizmoBaseVec2ParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// (None)

class UClass* UGizmoLocalVec2ParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoLocalVec2ParameterSource");

	return Clss;
}


// GizmoLocalVec2ParameterSource InteractiveToolsFramework.Default__GizmoLocalVec2ParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoLocalVec2ParameterSource* UGizmoLocalVec2ParameterSource::GetDefaultObj()
{
	static class UGizmoLocalVec2ParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoLocalVec2ParameterSource*>(UGizmoLocalVec2ParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// (None)

class UClass* UGizmoAxisTranslationParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoAxisTranslationParameterSource");

	return Clss;
}


// GizmoAxisTranslationParameterSource InteractiveToolsFramework.Default__GizmoAxisTranslationParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoAxisTranslationParameterSource* UGizmoAxisTranslationParameterSource::GetDefaultObj()
{
	static class UGizmoAxisTranslationParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoAxisTranslationParameterSource*>(UGizmoAxisTranslationParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// (None)

class UClass* UGizmoPlaneTranslationParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoPlaneTranslationParameterSource");

	return Clss;
}


// GizmoPlaneTranslationParameterSource InteractiveToolsFramework.Default__GizmoPlaneTranslationParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoPlaneTranslationParameterSource* UGizmoPlaneTranslationParameterSource::GetDefaultObj()
{
	static class UGizmoPlaneTranslationParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoPlaneTranslationParameterSource*>(UGizmoPlaneTranslationParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// (None)

class UClass* UGizmoAxisRotationParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoAxisRotationParameterSource");

	return Clss;
}


// GizmoAxisRotationParameterSource InteractiveToolsFramework.Default__GizmoAxisRotationParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoAxisRotationParameterSource* UGizmoAxisRotationParameterSource::GetDefaultObj()
{
	static class UGizmoAxisRotationParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoAxisRotationParameterSource*>(UGizmoAxisRotationParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// (None)

class UClass* UGizmoUniformScaleParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoUniformScaleParameterSource");

	return Clss;
}


// GizmoUniformScaleParameterSource InteractiveToolsFramework.Default__GizmoUniformScaleParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoUniformScaleParameterSource* UGizmoUniformScaleParameterSource::GetDefaultObj()
{
	static class UGizmoUniformScaleParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoUniformScaleParameterSource*>(UGizmoUniformScaleParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// (None)

class UClass* UGizmoAxisScaleParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoAxisScaleParameterSource");

	return Clss;
}


// GizmoAxisScaleParameterSource InteractiveToolsFramework.Default__GizmoAxisScaleParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoAxisScaleParameterSource* UGizmoAxisScaleParameterSource::GetDefaultObj()
{
	static class UGizmoAxisScaleParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoAxisScaleParameterSource*>(UGizmoAxisScaleParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// (None)

class UClass* UGizmoPlaneScaleParameterSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoPlaneScaleParameterSource");

	return Clss;
}


// GizmoPlaneScaleParameterSource InteractiveToolsFramework.Default__GizmoPlaneScaleParameterSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoPlaneScaleParameterSource* UGizmoPlaneScaleParameterSource::GetDefaultObj()
{
	static class UGizmoPlaneScaleParameterSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoPlaneScaleParameterSource*>(UGizmoPlaneScaleParameterSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// (None)

class UClass* UPlanePositionGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlanePositionGizmoBuilder");

	return Clss;
}


// PlanePositionGizmoBuilder InteractiveToolsFramework.Default__PlanePositionGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlanePositionGizmoBuilder* UPlanePositionGizmoBuilder::GetDefaultObj()
{
	static class UPlanePositionGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlanePositionGizmoBuilder*>(UPlanePositionGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.PlanePositionGizmo
// (None)

class UClass* UPlanePositionGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlanePositionGizmo");

	return Clss;
}


// PlanePositionGizmo InteractiveToolsFramework.Default__PlanePositionGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UPlanePositionGizmo* UPlanePositionGizmo::GetDefaultObj()
{
	static class UPlanePositionGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlanePositionGizmo*>(UPlanePositionGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.SelectionSet
// (None)

class UClass* USelectionSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectionSet");

	return Clss;
}


// SelectionSet InteractiveToolsFramework.Default__SelectionSet
// (Public, ClassDefaultObject, ArchetypeObject)

class USelectionSet* USelectionSet::GetDefaultObj()
{
	static class USelectionSet* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectionSet*>(USelectionSet::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.MeshSelectionSet
// (None)

class UClass* UMeshSelectionSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionSet");

	return Clss;
}


// MeshSelectionSet InteractiveToolsFramework.Default__MeshSelectionSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionSet* UMeshSelectionSet::GetDefaultObj()
{
	static class UMeshSelectionSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionSet*>(UMeshSelectionSet::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.SingleClickInputBehavior
// (None)

class UClass* USingleClickInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleClickInputBehavior");

	return Clss;
}


// SingleClickInputBehavior InteractiveToolsFramework.Default__SingleClickInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class USingleClickInputBehavior* USingleClickInputBehavior::GetDefaultObj()
{
	static class USingleClickInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleClickInputBehavior*>(USingleClickInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.SingleClickToolBuilder
// (None)

class UClass* USingleClickToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SingleClickToolBuilder");

	return Clss;
}


// SingleClickToolBuilder InteractiveToolsFramework.Default__SingleClickToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USingleClickToolBuilder* USingleClickToolBuilder::GetDefaultObj()
{
	static class USingleClickToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USingleClickToolBuilder*>(USingleClickToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoNilStateTarget
// (None)

class UClass* UGizmoNilStateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoNilStateTarget");

	return Clss;
}


// GizmoNilStateTarget InteractiveToolsFramework.Default__GizmoNilStateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoNilStateTarget* UGizmoNilStateTarget::GetDefaultObj()
{
	static class UGizmoNilStateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoNilStateTarget*>(UGizmoNilStateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// (None)

class UClass* UGizmoLambdaStateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoLambdaStateTarget");

	return Clss;
}


// GizmoLambdaStateTarget InteractiveToolsFramework.Default__GizmoLambdaStateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoLambdaStateTarget* UGizmoLambdaStateTarget::GetDefaultObj()
{
	static class UGizmoLambdaStateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoLambdaStateTarget*>(UGizmoLambdaStateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// (None)

class UClass* UGizmoObjectModifyStateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoObjectModifyStateTarget");

	return Clss;
}


// GizmoObjectModifyStateTarget InteractiveToolsFramework.Default__GizmoObjectModifyStateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoObjectModifyStateTarget* UGizmoObjectModifyStateTarget::GetDefaultObj()
{
	static class UGizmoObjectModifyStateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoObjectModifyStateTarget*>(UGizmoObjectModifyStateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// (None)

class UClass* UGizmoTransformChangeStateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoTransformChangeStateTarget");

	return Clss;
}


// GizmoTransformChangeStateTarget InteractiveToolsFramework.Default__GizmoTransformChangeStateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoTransformChangeStateTarget* UGizmoTransformChangeStateTarget::GetDefaultObj()
{
	static class UGizmoTransformChangeStateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoTransformChangeStateTarget*>(UGizmoTransformChangeStateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.TransformGizmoActor
// (Actor)

class UClass* ATransformGizmoActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformGizmoActor");

	return Clss;
}


// TransformGizmoActor InteractiveToolsFramework.Default__TransformGizmoActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATransformGizmoActor* ATransformGizmoActor::GetDefaultObj()
{
	static class ATransformGizmoActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATransformGizmoActor*>(ATransformGizmoActor::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.TransformGizmoBuilder
// (None)

class UClass* UTransformGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformGizmoBuilder");

	return Clss;
}


// TransformGizmoBuilder InteractiveToolsFramework.Default__TransformGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformGizmoBuilder* UTransformGizmoBuilder::GetDefaultObj()
{
	static class UTransformGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformGizmoBuilder*>(UTransformGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.TransformGizmo
// (None)

class UClass* UTransformGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformGizmo");

	return Clss;
}


// TransformGizmo InteractiveToolsFramework.Default__TransformGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UTransformGizmo* UTransformGizmo::GetDefaultObj()
{
	static class UTransformGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformGizmo*>(UTransformGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.TransformProxy
// (None)

class UClass* UTransformProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformProxy");

	return Clss;
}


// TransformProxy InteractiveToolsFramework.Default__TransformProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformProxy* UTransformProxy::GetDefaultObj()
{
	static class UTransformProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformProxy*>(UTransformProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// (None)

class UClass* UGizmoBaseTransformSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoBaseTransformSource");

	return Clss;
}


// GizmoBaseTransformSource InteractiveToolsFramework.Default__GizmoBaseTransformSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoBaseTransformSource* UGizmoBaseTransformSource::GetDefaultObj()
{
	static class UGizmoBaseTransformSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoBaseTransformSource*>(UGizmoBaseTransformSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// (None)

class UClass* UGizmoComponentWorldTransformSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoComponentWorldTransformSource");

	return Clss;
}


// GizmoComponentWorldTransformSource InteractiveToolsFramework.Default__GizmoComponentWorldTransformSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoComponentWorldTransformSource* UGizmoComponentWorldTransformSource::GetDefaultObj()
{
	static class UGizmoComponentWorldTransformSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoComponentWorldTransformSource*>(UGizmoComponentWorldTransformSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoScaledTransformSource
// (None)

class UClass* UGizmoScaledTransformSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoScaledTransformSource");

	return Clss;
}


// GizmoScaledTransformSource InteractiveToolsFramework.Default__GizmoScaledTransformSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoScaledTransformSource* UGizmoScaledTransformSource::GetDefaultObj()
{
	static class UGizmoScaledTransformSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoScaledTransformSource*>(UGizmoScaledTransformSource::StaticClass()->DefaultObject);

	return Default;
}


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// (None)

class UClass* UGizmoTransformProxyTransformSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GizmoTransformProxyTransformSource");

	return Clss;
}


// GizmoTransformProxyTransformSource InteractiveToolsFramework.Default__GizmoTransformProxyTransformSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGizmoTransformProxyTransformSource* UGizmoTransformProxyTransformSource::GetDefaultObj()
{
	static class UGizmoTransformProxyTransformSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGizmoTransformProxyTransformSource*>(UGizmoTransformProxyTransformSource::StaticClass()->DefaultObject);

	return Default;
}

}


