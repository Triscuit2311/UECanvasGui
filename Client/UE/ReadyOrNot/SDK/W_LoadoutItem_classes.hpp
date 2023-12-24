#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x348 - 0x278)
// WidgetBlueprintGeneratedClass W_LoadoutItem.W_LoadoutItem_C
class UW_LoadoutItem_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_StandardButton_C*                   Button;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RadioIcon_SizeBox;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedRadioIcon_Image;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Equipped;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_LoadoutItem;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnselectedRadioIcon_Image;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LoadoutItemName;                                   // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EItemClass                        ItemClass;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObjectClass;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsTactical;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3883[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot;                                      // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsMultipleTacticalSlots;                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3885[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTacticalSlots;                                  // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        StartingTacticalSlot;                              // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3889[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutClass_C*                     Owner;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UW_LoadoutCategory_C*                  CategoryOwner;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DirectoryName;                                     // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_LoadoutItem_C* GetDefaultObj();

	class UFMODEvent* GetSelectionSound();
	void GetCurrentMenuDirectory(class FText* Return_Value, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	enum class ESlateVisibility Get_Equipped_Text_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SimulateUnhover();
	void SimulateHover();
	void SimulateClick();
	void ToggleSelection();
	void Deselect();
	void Select(bool CallFunc_IsValid_ReturnValue);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void OnLoadoutLoaded();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_LoadoutItem(int32 EntryPoint, bool CallFunc_IsDLCLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, class UFMODEvent* CallFunc_GetSelectionSound_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UPreMissionPlanning* CallFunc_GetPremissionPlanning_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4);
	void OnButtonUnhovered__DelegateSignature(class UW_LoadoutItem_C* LoadoutItem);
	void OnButtonHovered__DelegateSignature(class UW_LoadoutItem_C* LoadoutItem);
	void OnButtonClicked__DelegateSignature(class UW_LoadoutItem_C* LoadoutItemWidget);
};

}


