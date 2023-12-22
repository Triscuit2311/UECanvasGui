#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x320 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_MunitionSlots_Deployable.W_Loadout_MunitionSlots_Deployable_C
class UW_Loadout_MunitionSlots_Deployable_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Add;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Minus;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      GrenadeSlot;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_DeployableSlot;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      TacticalSlot;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_CountButtons;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAddClicked;                                      // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMinusClicked;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowCountControls;                                 // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_17CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDeployableSlotClicked;                           // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsGrenade;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_17D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDeployableSlotHovered;                           // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDeployableSlotUnhovered;                         // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Count;                                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemData;                                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x308(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Loadout_MunitionSlots_Deployable_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void SetCount(int32 Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetSlotVisibility(bool IsGrenade, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	class UW_LoadoutSlot_C* GetSlot(bool Temp_bool_Variable, class UW_LoadoutSlot_C* K2Node_Select_Default);
	void DisplayCountControls(bool ShowCountControls, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Add_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_MunitionSlots_Deployable_btn_Minus_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void LoadoutSlotClicked(class UW_LoadoutSlot_C* TriggeringSlot);
	void SetItemClass(class UClass* ItemData);
	void LoadoutSlotHovered(class UW_LoadoutSlot_C* TriggeringSlot);
	void LoadoutSlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot);
	void ToggleAddButton(bool Enabled);
	void ForceClick();
	void ExecuteUbergraph_W_Loadout_MunitionSlots_Deployable(int32 EntryPoint, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_2, class UClass* K2Node_CustomEvent_ItemData, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_C* K2Node_CustomEvent_TriggeringSlot, bool K2Node_CustomEvent_Enabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_LoadoutSlot_C* CallFunc_GetSlot_ReturnValue_2, class UW_LoadoutSlot_C* K2Node_Select_Default);
	void OnDeployableSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
	void OnDeployableSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
	void OnDeployableSlotClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot);
	void OnMinusClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
	void OnAddClicked__DelegateSignature(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
};

}


