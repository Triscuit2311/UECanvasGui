#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3E0 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Level.W_PreMission_PlanningMap_Level_C
class UW_PreMission_PlanningMap_Level_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Map;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MarkerCanvas;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionPlanLinesWidget*               PlanLineRenderer;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Level;                                             // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_254F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelFloor                           FloorData;                                         // 0x290(0x68)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<int32, class UCanvasPanel*>             Lines;                                             // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<int32, class UW_PreMission_Tablet_MapMarker_C*> Markers;                                           // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PreMission_PlanningMap_C*           PlanningMapWidget;                                 // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMarkerDrawn;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLineDrawn;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FEntryPoint>                   LevelEntryPoints;                                  // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnMarkerRotated;                                   // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PreMission_PlanningMap_Level_C* GetDefaultObj();

	void MarkerRotated(class UW_PreMission_Tablet_MapMarker_C* TriggeringMarker, float Rotation);
	void LineStartNodeSelected(class UW_OfficerMarker_C* OfficerMarker);
	void DrawMarker(int32& MarkerID, struct FPlanningMarker& MarkerData, class UW_PreMission_Tablet_MapMarker_C* Marker, class UW_PreMission_Tablet_MapMarker_C* CallFunc_Create_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void EraseLine(int32 LineID, bool CallFunc_Map_Remove_ReturnValue, class UCanvasPanel* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void DrawLine(int32 LineID, const struct FPlanningLine& LineData, class AReadyOrNotPlayerState* LineOwner, class UCanvasPanel* Canvas, class UW_PreMission_PlanningMap_Line_C* Line, bool LastNode, float EndOffset, float StartOffset, const struct FVector2D& PreviousPoint, const struct FVector2D& Coordinates, class UWidget* NodeWidget, bool FirstNode, class UW_PreMission_PlanningMap_Line_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetPlayerStateFromPlanningNumber_ReturnValue, class UW_OfficerMarker_C* CallFunc_Create_ReturnValue_1, class UW_PreMission_Tablet_PlayerNode_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 Temp_int_Loop_Counter_Variable, const struct FAnchorData& K2Node_MakeStruct_AnchorData, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetLineAngle_Angle, float CallFunc_GetLineLength_Length, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FAnchorData& K2Node_MakeStruct_AnchorData_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, class UCanvasPanel* CallFunc_SpawnObject_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_2, const struct FAnchorData& K2Node_MakeStruct_AnchorData_2);
	void GetLineAngle(const struct FVector2D& PointA, const struct FVector2D& PointB, float PointA_X, float PointA_Y, float PointB_X, float PointB_Y, float* Angle, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
	void GetLineLength(const struct FVector2D& PointA, const struct FVector2D& PointB, float* Length, const struct FVector2D& CallFunc_GetWidgetSize_Absolute_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, float CallFunc_Distance2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Construct();
	void ExecuteUbergraph_W_PreMission_PlanningMap_Level(int32 EntryPoint);
	void OnMarkerRotated__DelegateSignature(class UW_PreMission_Tablet_MapMarker_C* TriggeringMarker, int32 FloorLevel, float Rotation);
	void OnLineDrawn__DelegateSignature(int32 LineID, class UCanvasPanel* LineCanvas);
	void OnMarkerDrawn__DelegateSignature(int32 MarkerID, class UW_PreMission_Tablet_MapMarker_C* Marker);
};

}


