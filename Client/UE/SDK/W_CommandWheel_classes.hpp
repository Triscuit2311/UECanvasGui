#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x13C8 - 0x1388)
// WidgetBlueprintGeneratedClass W_CommandWheel.W_CommandWheel_C
class UW_CommandWheel_C : public UCommandWheel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                HeaderTextBackground;                              // 0x1390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          RedTeamColor;                                      // 0x1398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BlueTeamColor;                                     // 0x13A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GoldTeamColor;                                     // 0x13B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CommandWheel_C* GetDefaultObj();

	void UpdateWheelSelection(class UObject* Object, const struct FVector& InVector, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void RedrawCommandWheel();
	void SetInnerSegments(int32 Num);
	void SetOuterSegments(int32 Num);
	void SetInnerWheelDirection(const struct FVector& Direction);
	void SetOuterWheelDirection(const struct FVector& Direction);
	void SetInnerwheelOpacity(float Opacity);
	void ExecuteUbergraph_W_CommandWheel(int32 EntryPoint, enum class ETeamType CallFunc_GetActiveTeamType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, int32 K2Node_Event_num_1, int32 K2Node_Event_num, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& K2Node_Event_direction_1, const struct FVector& K2Node_Event_direction, float K2Node_Event_opacity);
};

}


