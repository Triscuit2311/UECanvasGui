#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x388 - 0x360)
// WidgetBlueprintGeneratedClass W_AnimatedIconWidget.W_AnimatedIconWidget_C
class UW_AnimatedIconWidget_C : public UAnimatedIconWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BlipHalfwayLower;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BlipHalfwayUpper;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InteractCircle;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_AnimatedIconWidget_C* GetDefaultObj();

	void SetInteractState(bool bValid);
	void ExecuteUbergraph_W_AnimatedIconWidget(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_bValid, float K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


