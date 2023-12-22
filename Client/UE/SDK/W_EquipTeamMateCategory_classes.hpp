#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E (0x2E6 - 0x278)
// WidgetBlueprintGeneratedClass W_EquipTeamMateCategory.W_EquipTeamMateCategory_C
class UW_EquipTeamMateCategory_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ButtonPressed;                                // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Button;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CategoryExpander_Overlay;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainContainer;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLoadoutItemButtonClicked;                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        ExpandCollapseDelayTimeRemaining;                  // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    EquipSwat;                                         // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x2E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_EquipTeamMateCategory_C* GetDefaultObj();

	struct FLinearColor GetColorAndOpacity_0(bool K2Node_SwitchEnum_CmpSuccess);
	class FText Get_GearCategory_Text_Text_0(bool K2Node_SwitchEnum_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_EquipTeamMateCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_Get_GearCategory_Text_Text_0_ReturnValue, const struct FLinearColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, enum class EEquippingSwat CallFunc_GetEquippingSwatMember_EquippingSwat, const struct FLinearColor& CallFunc_GetColorAndOpacity_0_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue_1);
	void OnButtonUnhovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
	void OnButtonHovered__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
	void OnLoadoutItemButtonClicked__DelegateSignature(enum class EItemClass ItemClass, class UClass* ItemObjectClass, bool bIsTactical, int32 TacticalSlot, bool bIsMultipleTacticalSlots, int32 MaxTacticalSlots, int32 Starting_Tactical_Slot, class UW_LoadoutItem_C* Loadout_Item_Widget);
	void OnButtonClicked__DelegateSignature(class UW_LoadoutCategory_C* LoadoutCategory);
};

}


