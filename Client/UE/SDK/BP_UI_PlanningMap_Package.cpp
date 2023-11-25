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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.FillLevelDataFromTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::FillLevelDataFromTable()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39801);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SpawnMapMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_UI_PlanningMap_Marker_C*                 OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::SpawnMapMarker(const struct FVector& Location, class UBP_UI_PlanningMap_Marker_C** OutputPin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39800);
		
		struct
		{
			struct FVector                        Location;
			unsigned char                                      UnknownData_0000[0x4];
			class UBP_UI_PlanningMap_Marker_C*                 OutputPin;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.SetMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::SetMapMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39799);
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetCurrentMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          CurrentMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::GetCurrentMapMaterial(class UMaterialInterface** CurrentMaterial)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39798);
		
		struct
		{
			class UMaterialInterface*                          CurrentMaterial;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMaterial != nullptr)
			*CurrentMaterial = params.CurrentMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.GetMapMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInstanceDynamic*                    MapDynMat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::GetMapMaterial(bool ForceUpdate, class UMaterialInstanceDynamic** MapDynMat)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39797);
		
		struct
		{
			bool                                               ForceUpdate;
			unsigned char                                      UnknownData_0001[0x7];
			class UMaterialInstanceDynamic*                    MapDynMat;
		} params;
		params.ForceUpdate = ForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapDynMat != nullptr)
			*MapDynMat = params.MapDynMat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AbsolutePan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::AbsolutePan(const struct FVector2D& Delta)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39796);
		
		struct
		{
			struct FVector2D                      Delta;
		} params;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AdditivePan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::AdditivePan()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39795);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UpdateZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::UpdateZoom()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39794);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.UserConstructionScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39793);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39792);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39791);
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5(class UObject* Loaded)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39790);
		
		struct
		{
			class UObject*                                     Loaded;
		} params;
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ChangeFloors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::ChangeFloors(int32_t Floor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39789);
		
		struct
		{
			int32_t                                            Floor;
		} params;
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.PanCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Panning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                      CursorPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::PanCamera(bool Panning, const struct FVector2D& CursorPos)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39788);
		
		struct
		{
			bool                                               Panning;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector2D                      CursorPos;
		} params;
		params.Panning = Panning;
		params.CursorPos = CursorPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.DeactivateCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::DeactivateCamera()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39787);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39786);
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39785);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.InitializeFloor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::InitializeFloor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39784);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::AnimateShow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39783);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.AnimateHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Silent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::AnimateHide(bool Silent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39782);
		
		struct
		{
			bool                                               Silent;
		} params;
		params.Silent = Silent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ActivateMapCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::ActivateMapCamera()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39781);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.RollOutMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::RollOutMap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39780);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.ExecuteUbergraph_BP_UI_PlanningMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::ExecuteUbergraph_BP_UI_PlanningMap(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39779);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0003[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnFloorMaterialUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::OnFloorMaterialUpdated__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39778);
		
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
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnChangeFloors__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::OnChangeFloors__DelegateSignature(int32_t Floor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39777);
		
		struct
		{
			int32_t                                            Floor;
		} params;
		params.Floor = Floor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_PlanningMap.BP_UI_PlanningMap_C.OnZoomUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZoomValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void ABP_UI_PlanningMap_C::OnZoomUpdated__DelegateSignature(float ZoomValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39776);
		
		struct
		{
			float                                              ZoomValue;
		} params;
		params.ZoomValue = ZoomValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UI_PlanningMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ABP_UI_PlanningMap_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39775);
		return ptr;
	}

}


