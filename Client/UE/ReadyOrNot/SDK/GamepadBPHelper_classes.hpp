#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GamepadBPHelper.GamepadBPHelper_C
class UGamepadBPHelper_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGamepadBPHelper_C* GetDefaultObj();

	void UpdateGamepadButtonNavigation(class UWidget* ParentWidget, const struct FKey& NextKeyBinding, const struct FKey& PrevKeyBinding, class UUserWidget* CurrentSelectedButton, class UObject* __WorldContext, class UUserWidget** SelectedButton, bool* IsNewButton, bool FoundNewButton, int32 NewActiveButton, int32 CurrentButtonIndex, const TArray<bool>& buttonAvailability, int32 ButtonListNavigationDirection, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUserWidget*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetActiveButton_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_1, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void ShowIfNotGamepad(class UWidget* Widget, class UObject* __WorldContext, bool WasUsingGamepad, bool IsUsingGamepad);
	void ShowBasedOnGamepad(bool ShowIfGamepad, class UWidget* Widget, class UObject* __WorldContext, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowIfGamepad(class UWidget* Widget, class UObject* __WorldContext, enum class ECommonInputType LastInputType, bool WasUsingGamepad, bool IsUsingGamepad);
	void WidgetOrChildHasFocus(class UWidget* Widget, class APlayerController* PlayerController, class UObject* __WorldContext, bool* HasFocus, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void RestoreFocus(class UWidget* Parent, class UWidget* DesiredFocusTarget, class APlayerController* PlayerController, class UObject* __WorldContext, bool CallFunc_WidgetOrChildHasFocus_HasFocus);
};

}


