#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass W_LoadoutInfo_EffectsListEntry.W_LoadoutInfo_EffectsListEntry_C
class UW_LoadoutInfo_EffectsListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               EffectBorder;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_EffectSymbol;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_EffectText;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  EffectText;                                        // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectSymbol;                                      // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          EffectColor;                                       // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PositiveColor;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NegativeColor;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemEffects                       Effect;                                            // 0x2E8(0x19)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F73[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UW_LoadoutInfo_EffectsListEntry_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void SetInfo(const struct FST_ItemEffects& Effect, enum class EScrollDirection Temp_byte_Variable, enum class EScrollDirection Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void ExecuteUbergraph_W_LoadoutInfo_EffectsListEntry(int32 EntryPoint, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_LoadoutSlot_C* K2Node_Event_CurrentSlot, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UW_Loadout_C* K2Node_Event_LoadoutWidget, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
};

}


