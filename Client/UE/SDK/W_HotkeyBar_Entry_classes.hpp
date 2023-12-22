#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x289 (0x4E9 - 0x260)
// WidgetBlueprintGeneratedClass W_HotkeyBar_Entry.W_HotkeyBar_Entry_C
class UW_HotkeyBar_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimPressed;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonActionWidget*                   ActionWidget;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               HotkeyBorder;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       InputTypeSwitcher;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Action;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Key;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                  Key;                                               // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  ActionText;                                        // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSt_HotkeySettings                    Hotkey;                                            // 0x2D0(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsButton;                                          // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BorderStyleButton;                                 // 0x340(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderStyleButton_Pressed;                         // 0x3C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BorderStyle;                                       // 0x450(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHotkeyButtonClicked;                             // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsPressed;                                         // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_HotkeyBar_Entry_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType bNewInputType, enum class ECommonInputType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 K2Node_Select_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetBinding(const struct FSt_HotkeySettings& Hotkey);
	void BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature();
	void BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__W_HotkeyBar_Entry_W_Button_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void ExecuteUbergraph_W_HotkeyBar_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSt_HotkeySettings& K2Node_CustomEvent_Hotkey, class FText Temp_text_Variable_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class FText K2Node_Select_Default_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void OnHotkeyButtonClicked__DelegateSignature(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry);
};

}


