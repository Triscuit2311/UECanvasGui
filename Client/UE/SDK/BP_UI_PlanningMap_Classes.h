#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_UI_PlanningMap.BP_UI_PlanningMap_C
	 * Size -> 0x0108 (FullSize[0x0328] - InheritedSize[0x0220])
	 */
	class ABP_UI_PlanningMap_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCineCameraComponent*                                  MapCamera;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                   SpringArm;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                       Scene;                                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                                Prep_Map_Default;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                       DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                         MapCameraActive;                                         // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        CurrentZoom;                                             // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        ZoomIncrement;                                           // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        MaxZoomDistance;                                         // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        MinZoomDistance;                                         // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        PanningSpeed;                                            // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  StartingPos;                                             // 0x0268(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Panning;                                                 // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                PanningBoundaryY;                                        // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                PanningBoundaryX;                                        // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                              MapDynMat;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSpawnPoints>                                  SpawnPoints;                                             // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         AbsolutePanning;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_UI_PlanningMap_SpawnPoint_C*                       NewVar_1;                                                // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>               SpawnPointComponents;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMulticastInlineDelegate                               OnZoomUpdated;                                           // 0x02C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x02C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnChangeFloors;                                          // 0x02D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x02D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<struct FLevelFloorData>                               Floors;                                                  // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         Initialized;                                             // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0005[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                    CurrentMaterialParent;                                   // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               OnFloorMaterialUpdated;                                  // 0x0300(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x0301(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         FloorMaterialUpdated;                                    // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0007[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBP_UI_PlanningMap_Marker_C*>                   MapMarkerComponents;                                     // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void FillLevelDataFromTable();
		void SpawnMapMarker(const struct FVector& Location, class UBP_UI_PlanningMap_Marker_C** OutputPin);
		void SetMapMaterial(class UMaterialInterface* Material);
		void GetCurrentMapMaterial(class UMaterialInterface** CurrentMaterial);
		void GetMapMaterial(bool ForceUpdate, class UMaterialInstanceDynamic** MapDynMat);
		void AbsolutePan(const struct FVector2D& Delta);
		void AdditivePan();
		void UpdateZoom();
		void UserConstructionScript();
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnLoaded_6AC405FF4BFE790347C0B19681EDEBD5(class UObject* Loaded);
		void ChangeFloors(int32_t Floor);
		void PanCamera(bool Panning, const struct FVector2D& CursorPos);
		void DeactivateCamera();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void InitializeFloor();
		void AnimateShow();
		void AnimateHide(bool Silent);
		void ActivateMapCamera();
		void RollOutMap();
		void ExecuteUbergraph_BP_UI_PlanningMap(int32_t EntryPoint);
		void OnFloorMaterialUpdated__DelegateSignature();
		void OnChangeFloors__DelegateSignature(int32_t Floor);
		void OnZoomUpdated__DelegateSignature(float ZoomValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
