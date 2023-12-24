#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass W_GamepadNavIcon.W_GamepadNavIcon_C
class UW_GamepadNavIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   IconWidget;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputAction;                                       // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)

	static class UClass* StaticClass();
	static class UW_GamepadNavIcon_C* GetDefaultObj();

	void InputMethodChanged(bool Using_Gamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__W_GamepadNavIcon_IconWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_GamepadNavIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, enum class ECommonInputType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_ComponentBoundEvent_bUsingGamepad, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Select_Default);
};

}


