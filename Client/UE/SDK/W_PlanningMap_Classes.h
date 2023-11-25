#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * WidgetBlueprintGeneratedClass W_PlanningMap.W_PlanningMap_C
	 * Size -> 0x0888 (FullSize[0x0AE8] - InheritedSize[0x0260])
	 */
	class UW_PlanningMap_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                               MapInteraction;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                          RootCanvas;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_PlanningMap_BreachPoint_Info_C*                     SpawnDetailsPanel;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_FloorButtons;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_2DMap_C*                                            W_2DMap;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLevelDataLookupTable                                 LevelData;                                               // 0x0290(0x0770) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLevelFloorData>                               MapFloors;                                               // 0x0A00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               PanMap;                                                  // 0x0A10(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0A11(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               UpdateMapMaterial;                                       // 0x0A20(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0A21(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         Pressed;                                                 // 0x0A30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x3];                                   // 0x0A31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                MouseDelta;                                              // 0x0A34(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0003[0x4];                                   // 0x0A3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               NewEventDispatcher_1;                                    // 0x0A40(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x0A41(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>               SpawnPointComponents;                                    // 0x0A50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_UI_PlanningMap_C*                                  PlanningMapActor;                                        // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_Button_C*>                                   FloorButtons;                                            // 0x0A68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                      CurrentFloor;                                            // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0005[0x4];                                   // 0x0A7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UBP_UI_PlanningMap_SpawnPoint_C*, class UW_PlanningMap_BreachPoint_C*> SpawnPoints;                                             // 0x0A80(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_PlanningMap_BreachPoint_C*                          SelectedPoint;                                           // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                DetailPanelOffset;                                       // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        HeightCheck;                                             // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        WidthCheck;                                              // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector2D GetDetailPanePosition(const struct FVector2D& PointScreenPosition);
		void GetSpawnPointInfo(class UW_PlanningMap_BreachPoint_C* BreachPointButton, struct FSpawnPoints* SpawnPointInfo, int32_t* Index);
		void RefreshSpawns(float ZoomValue);
		void OpenPlanningMarker();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Construct();
		void UpdateMap(int32_t FloorIndex);
		void BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void UpdateSpawns(TArray<class UBP_UI_PlanningMap_SpawnPoint_C*> SpawnPointComponents);
		void InitPlanningMap(class ABP_UI_PlanningMap_C* PlanningMapActor);
		void ChangeFloor(class UW_Button_C* Button);
		void MapFloorUpdated(int32_t Floor);
		void PointHovered(class UW_PlanningMap_BreachPoint_C* HoveredPoint);
		void PointClicked(class UW_PlanningMap_BreachPoint_C* ClickedPoint);
		void BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature();
		void BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature();
		void ExitMap();
		void ExecuteUbergraph_W_PlanningMap(int32_t EntryPoint);
		void NewEventDispatcher_0__DelegateSignature();
		void UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture);
		void PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
