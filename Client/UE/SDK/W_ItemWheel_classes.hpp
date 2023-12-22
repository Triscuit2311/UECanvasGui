#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x440 - 0x400)
// WidgetBlueprintGeneratedClass W_ItemWheel.W_ItemWheel_C
class UW_ItemWheel_C : public UItemWheel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CancelSelectionImage;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      HeaderInvalidationBox;                             // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeaderOverlay;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderTextBackground;                              // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InnerWheelInvalidationBox;                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      OuterWheelInvalidationBox;                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ItemWheel_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnNumberOfSegmentsChange(int32 NumSegments);
	void ExecuteUbergraph_W_ItemWheel(int32 EntryPoint, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector& CallFunc_GetInnerWheelPosition_ReturnValue, const struct FVector& CallFunc_GetOuterWheelPosition_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Event_NumSegments, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


