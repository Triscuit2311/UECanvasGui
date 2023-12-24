#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A0 (0xB00 - 0x260)
// WidgetBlueprintGeneratedClass W_PlanningMap.W_PlanningMap_C
class UW_PlanningMap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               MapInteraction;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RootCanvas;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PlanningMap_BreachPoint_Info_C*     SpawnDetailsPanel;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_FloorButtons;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_2DMap_C*                            W_2DMap;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 LevelData;                                         // 0x290(0x788)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLevelFloorData>               MapFloors;                                         // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            PanMap;                                            // 0xA28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UpdateMapMaterial;                                 // 0xA38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Pressed;                                           // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MouseDelta;                                        // 0xA4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NewEventDispatcher_0;                              // 0xA58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UBP_UI_PlanningMap_SpawnPoint_C*> SpawnPointComponents;                              // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_UI_PlanningMap_C*                  PlanningMapActor;                                  // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_Button_C*>                   FloorButtons;                                      // 0xA80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentFloor;                                      // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UBP_UI_PlanningMap_SpawnPoint_C*, class UW_PlanningMap_BreachPoint_C*> SpawnPoints;                                       // 0xA98(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PlanningMap_BreachPoint_C*          SelectedPoint;                                     // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DetailPanelOffset;                                 // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightCheck;                                       // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WidthCheck;                                        // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlanningMap_C* GetDefaultObj();

	struct FVector2D GetDetailPanePosition(const struct FVector2D& PointScreenPosition, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetSpawnPointInfo(class UW_PlanningMap_BreachPoint_C*& BreachPointButton, struct FSpawnPoints* SpawnPointInfo, int32* Index, TArray<class UW_PlanningMap_BreachPoint_C*>& CallFunc_Map_Values_Values, TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, class UBP_UI_PlanningMap_SpawnPoint_C* CallFunc_Array_Get_Item);
	void RefreshSpawns(float ZoomValue, const struct FVector2D& ScreenPosition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_PlanningMap_BreachPoint_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UBP_UI_PlanningMap_SpawnPoint_C* CallFunc_Array_Get_Item, class UW_PlanningMap_BreachPoint_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OpenPlanningMarker(TArray<class AActor*>& Temp_object_Variable, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2);
	void Construct();
	void UpdateMap(int32 FloorIndex);
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void UpdateSpawns(TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& SpawnPointComponents);
	void InitPlanningMap(class ABP_UI_PlanningMap_C* PlanningMapActor);
	void ChangeFloor(class UW_Button_C* Button);
	void MapFloorUpdated(int32 Floor);
	void PointHovered(class UW_PlanningMap_BreachPoint_C* HoveredPoint);
	void PointClicked(class UW_PlanningMap_BreachPoint_C* ClickedPoint);
	void BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature();
	void BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature();
	void ExitMap();
	void ExecuteUbergraph_W_PlanningMap(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UDataTable* CallFunc_GetLevelLookupDataTable_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_CustomEvent_FloorIndex, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FLevelFloorData& CallFunc_Array_Get_Item, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& K2Node_CustomEvent_SpawnPointComponents, class ABP_UI_PlanningMap_C* K2Node_CustomEvent_PlanningMapActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_Button_C* K2Node_CustomEvent_Button, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_Button_C* CallFunc_Array_Get_Item_1, int32 K2Node_CustomEvent_Floor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UW_PlanningMap_BreachPoint_C*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue, class UW_PlanningMap_BreachPoint_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_PlanningMap_BreachPoint_C* K2Node_CustomEvent_HoveredPoint, class UW_PlanningMap_BreachPoint_C* K2Node_CustomEvent_ClickedPoint, const struct FSpawnPoints& CallFunc_GetSpawnPointInfo_SpawnPointInfo, int32 CallFunc_GetSpawnPointInfo_Index, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetDetailPanePosition_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, const struct FSpawnPoints& CallFunc_GetSpawnPointInfo_SpawnPointInfo_1, int32 CallFunc_GetSpawnPointInfo_Index_1, class UW_Button_C* CallFunc_Array_Get_Item_3, class UW_Button_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void NewEventDispatcher_0__DelegateSignature();
	void UpdateMapMaterial__DelegateSignature(class UTexture2D* LayoutTexture);
	void PanMap__DelegateSignature(bool Pressed, const struct FVector2D& CursorPos);
};

}


