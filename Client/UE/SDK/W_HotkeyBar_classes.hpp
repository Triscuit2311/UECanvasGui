#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x398 - 0x351)
// WidgetBlueprintGeneratedClass W_HotkeyBar.W_HotkeyBar_C
class UW_HotkeyBar_C : public UW_SubMenu_C
{
public:
	uint8                                        Pad_40C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Bindings;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  W_HotkeyBar_Entry;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSt_HotkeySettings>            Hotkeys;                                           // 0x378(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnHotkeyClicked;                                   // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_HotkeyBar_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateHints(TArray<struct FSt_HotkeySettings>& Hotkeys);
	void HotkeyButtonClicked(class UW_HotkeyBar_Entry_C* TriggeringHotkeyEntry);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_W_HotkeyBar(int32 EntryPoint, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<struct FSt_HotkeySettings>& K2Node_CustomEvent_Hotkeys, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSt_HotkeySettings& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UW_HotkeyBar_Entry_C* K2Node_CustomEvent_TriggeringHotkeyEntry, class UW_HotkeyBar_Entry_C* CallFunc_Create_ReturnValue, TArray<class UW_HotkeyBar_Entry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_HotkeyBar_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void OnHotkeyClicked__DelegateSignature(const class FString& HotkeyID);
};

}


