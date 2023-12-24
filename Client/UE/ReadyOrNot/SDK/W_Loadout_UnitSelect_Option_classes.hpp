#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_UnitSelect_Option.W_Loadout_UnitSelect_Option_C
class UW_Loadout_UnitSelect_Option_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_Avatar;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Name;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UnitOptionClicked;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                ID;                                                // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EEquippingSwat                    EquippingUnit;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_EquippingUnit                     EquippingUnitInfo;                                 // 0x2B8(0x20)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_UnitSelect_Option_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void SetNameText(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor_1, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor_2, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void BndEvt__W_Loadout_UnitSelect_Option_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void SetSelected(bool IsSelected);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_W_Loadout_UnitSelect_Option(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_CustomEvent_IsSelected, float K2Node_Event_Delay_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Event_Delay, bool K2Node_Event_Collapse, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue);
	void UnitOptionClicked__DelegateSignature(class UW_Loadout_UnitSelect_Option_C* TriggeringOption);
};

}


