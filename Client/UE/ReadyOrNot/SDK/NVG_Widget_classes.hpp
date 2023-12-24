#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass NVG_Widget.NVG_Widget_C
class UNVG_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UNVG_Widget_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_NVG_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


