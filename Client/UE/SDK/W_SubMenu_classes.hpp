#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x351 - 0x320)
// WidgetBlueprintGeneratedClass W_SubMenu.W_SubMenu_C
class UW_SubMenu_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            Contents;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               DesiredFocus;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              PreviousMenu;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HandleBackPress;                                   // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OnlyActiveForMKB;                                  // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_SubMenu_C* GetDefaultObj();

	void InputModeChanged(bool UsingGamepad);
	bool BP_OnHandleBackAction(bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void Construct();
	void OnInputMethodChanged_Event_0(enum class ECommonInputType bNewInputType);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void DisableInputConsume();
	void EnableInputConsume();
	void ExecuteUbergraph_W_SubMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void HandleBackPress__DelegateSignature();
};

}


