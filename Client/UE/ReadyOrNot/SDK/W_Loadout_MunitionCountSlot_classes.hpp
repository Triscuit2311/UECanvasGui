#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x2D5 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_MunitionCountSlot.W_Loadout_MunitionCountSlot_C
class UW_Loadout_MunitionCountSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_decrease;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_increase;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MunitionSlot;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_SlotCount;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SlotType;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SlotName;                                          // 0x298(0x18)(Edit, BlueprintVisible)
	int32                                        SlotCount;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinSlots;                                          // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxSlots;                                          // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotCountChanged;                                // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AvailableSlots;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Loadout_MunitionCountSlot_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void Initialize(int32 CurrentSlotCount, int32 AvailableSlots, int32 MinSlots, int32 MaxSlots);
	void SetAvailableSlots(int32 AvailableSlots, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SetMaxSlots(int32 MaxSlotCount, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetSlotCount(int32 NewCount, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void IncrementSlotCount(int32 Increment, int32 CallFunc_Abs_Int_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void SetInfo(float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Loadout_ArmorSlot_btn_decrease_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_ArmorSlot_btn_increase_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_ArmorSlot_SpinBox_SlotCount_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void ChangePage(class FName PageName);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void ExecuteUbergraph_W_Loadout_MunitionCountSlot(int32 EntryPoint, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, float K2Node_Event_Delay_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsGamepad, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FName K2Node_Event_PageName);
	void OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
};

}


