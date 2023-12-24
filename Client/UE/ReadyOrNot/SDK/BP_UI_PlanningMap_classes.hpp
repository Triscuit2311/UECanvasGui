#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x328 - 0x220)
// BlueprintGeneratedClass BP_UI_PlanningMap.BP_UI_PlanningMap_C
class ABP_UI_PlanningMap_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                  MapCamera;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Prep_Map_Default;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         MapCameraActive;                                   // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentZoom;                                       // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomIncrement;                                     // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxZoomDistance;                                   // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinZoomDistance;                                   // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PanningSpeed;                                      // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartingPos;                                       // 0x268(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Panning;                                           // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PanningBoundaryY;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PanningBoundaryX;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MapDynMat;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpawnPoints>                  SpawnPoints;                                       // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbsolutePanning;                                   // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_UI_PlanningMap_SpawnPoint_C*       NewVar_0;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_UI_PlanningMap_SpawnPoint_C*> SpawnPointComponents;                              // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnZoomUpdated;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangeFloors;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FLevelFloorData>               Floors;                                            // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Initialized;                                       // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CurrentMaterialParent;                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFloorMaterialUpdated;                            // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FloorMaterialUpdated;                              // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_UI_PlanningMap_Marker_C*>   MapMarkerComponents;                               // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_UI_PlanningMap_C* GetDefaultObj();

	void FillLevelDataFromTable(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSpawnPoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UBP_UI_PlanningMap_SpawnPoint_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
	void SpawnMapMarker(const struct FVector& Location, class UBP_UI_PlanningMap_Marker_C** OutputPin);
	void SetMapMaterial(class UMaterialInterface* Material);
	void GetCurrentMapMaterial(class UMaterialInterface** CurrentMaterial, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
	void GetMapMaterial(bool ForceUpdate, class UMaterialInstanceDynamic** MapDynMat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void AbsolutePan(const struct FVector2D& Delta, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void AdditivePan();
	void UpdateZoom(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5(class UObject* Loaded);
	void ChangeFloors(int32 Floor);
	void PanCamera(bool Panning, const struct FVector2D& CursorPos);
	void DeactivateCamera();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void InitializeFloor();
	void AnimateShow();
	void AnimateHide(bool Silent);
	void ActivateMapCamera();
	void RollOutMap();
	void ExecuteUbergraph_BP_UI_PlanningMap(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsActive_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Floor, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool K2Node_CustomEvent_Panning, const struct FVector2D& K2Node_CustomEvent_CursorPos, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UObject* Temp_object_Variable, const struct FVector& CallFunc_VEase_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_CustomEvent_Silent, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_1);
	void OnFloorMaterialUpdated__DelegateSignature();
	void OnChangeFloors__DelegateSignature(int32 Floor);
	void OnZoomUpdated__DelegateSignature(float ZoomValue);
};

}


