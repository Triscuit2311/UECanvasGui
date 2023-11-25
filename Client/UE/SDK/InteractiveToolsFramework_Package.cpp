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
	 * 		Name   -> PredefinedFunction UInteractiveToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveToolPropertySet::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3318);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3320);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USingleSelectionTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3321);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSurfacePointTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMeshSurfacePointTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3322);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBaseBrushTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3323);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolsContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveToolsContext::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3355);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3308);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushStampIndicatorBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBrushStampIndicatorBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3324);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInternalToolFrameworkActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AInternalToolFrameworkActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3331);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AGizmoActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3332);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIntervalGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AIntervalGizmoActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3356);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushBaseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBrushBaseProperties::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3319);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3310);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushStampIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBrushStampIndicator::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3325);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntervalGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UIntervalGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3357);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3306);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnyButtonInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAnyButtonInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3307);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3326);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntervalGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UIntervalGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3358);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveToolBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3328);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USingleClickToolBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3380);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USingleClickInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3379);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USingleClickTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3381);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoObjectModifyStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoObjectModifyStateTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3384);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoBaseFloatParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3359);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisRotationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoAxisRotationParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3371);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoNilStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoNilStateTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3382);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoTransformChangeStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoTransformChangeStateTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3385);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoBaseTransformSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3390);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoScaledTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoScaledTransformSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3392);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLambdaStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoLambdaStateTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3383);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoBaseVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3367);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoUniformScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoUniformScaleParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3372);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoTransformProxyTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoTransformProxyTransformSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3393);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoAxisScaleParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3373);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisIntervalParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoAxisIntervalParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3360);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATransformGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ATransformGizmoActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3386);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyAsModifierInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UKeyAsModifierInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3361);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTransformGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3387);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTransformGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3388);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULocalClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3327);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoPlaneScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoPlaneScaleParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3374);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSurfacePointToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMeshSurfacePointToolBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3362);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTransformProxy::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3389);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UClickDragToolBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3329);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouseHoverBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMouseHoverBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3363);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlanePositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPlanePositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3375);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiClickSequenceInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMultiClickSequenceInputBehavior::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3364);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UClickDragTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3330);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMultiSelectionTool::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3365);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlanePositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPlanePositionGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3376);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLocalFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoLocalFloatParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3366);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentWorldTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoComponentWorldTransformSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3391);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWorldIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20267);
		
		struct
		{
			bool                                               bWorldIn;
		} params;
		params.bWorldIn = bWorldIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHoveringIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20266);
		
		struct
		{
			bool                                               bHoveringIn;
		} params;
		params.bHoveringIn = bHoveringIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoBaseComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3333);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USelectionSet::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3377);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoArrowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoArrowComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3334);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLocalVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoLocalVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3368);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMeshSelectionSet::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3378);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoBoxComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3335);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoAxisTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3369);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoCircleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoCircleComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3336);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoPlaneTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoPlaneTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3370);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisAngleGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAxisAngleGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3309);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct PCoreUObject_FTransform                     NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IGizmoTransformSource::SetTransform(const struct PCoreUObject_FTransform& NewTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20269);
		
		struct
		{
			struct PCoreUObject_FTransform                     NewTransform;
		} params;
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct PCoreUObject_FTransform                     ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct PCoreUObject_FTransform IGizmoTransformSource::GetTransform()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20268);
		
		struct
		{
			struct PCoreUObject_FTransform                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IGizmoTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoTransformSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3337);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool IGizmoAxisSource::HasTangentVectors()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20273);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        TangentXOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        TangentYOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20272);
		
		struct
		{
			struct FVector                        TangentXOut;
			struct FVector                        TangentYOut;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TangentXOut != nullptr)
			*TangentXOut = params.TangentXOut;
		if (TangentYOut != nullptr)
			*TangentYOut = params.TangentYOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector IGizmoAxisSource::GetOrigin()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20271);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector IGizmoAxisSource::GetDirection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20270);
		
		struct
		{
			struct FVector                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IGizmoAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoAxisSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3338);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHovering                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IGizmoClickTarget::UpdateHoverState(bool bHovering)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20274);
		
		struct
		{
			bool                                               bHovering;
		} params;
		params.bHovering = bHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IGizmoClickTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoClickTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3339);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoStateTarget::EndUpdate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20276);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoStateTarget::BeginUpdate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20275);
		
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
	 * 		Name   -> PredefinedFunction IGizmoStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoStateTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3340);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IGizmoFloatParameterSource::SetParameter(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20280);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float IGizmoFloatParameterSource::GetParameter()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20279);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoFloatParameterSource::EndModify()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20278);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoFloatParameterSource::BeginModify()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20277);
		
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
	 * 		Name   -> PredefinedFunction IGizmoFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoFloatParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3341);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void IGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20284);
		
		struct
		{
			struct FVector2D                      NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D IGizmoVec2ParameterSource::GetParameter()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20283);
		
		struct
		{
			struct FVector2D                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoVec2ParameterSource::EndModify()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20282);
		
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
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void IGizmoVec2ParameterSource::BeginModify()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(20281);
		
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
	 * 		Name   -> PredefinedFunction IGizmoVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IGizmoVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3342);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLineHandleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoLineHandleComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3343);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisAngleGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAxisAngleGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3311);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoRectangleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoRectangleComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3344);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLambdaHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoLambdaHitTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3345);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisPositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAxisPositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3312);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoComponentHitTarget::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3346);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBehaviorSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInputBehaviorSet::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3347);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisPositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAxisPositionGizmo::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3313);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IInputBehaviorSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IInputBehaviorSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3348);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputRouter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInputRouter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3349);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractionMechanic::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3350);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmoManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveGizmoManager::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3351);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoConstantAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoConstantAxisSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3314);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IToolContextTransactionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IToolContextTransactionProvider::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3352);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInteractiveToolManager::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3353);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IToolFrameworkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IToolFrameworkComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3354);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoConstantFrameAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoConstantFrameAxisSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3315);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoWorldAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoWorldAxisSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3316);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGizmoComponentAxisSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(3317);
		return ptr;
	}

}


