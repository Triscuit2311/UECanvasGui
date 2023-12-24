#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass W_StandardCombobox_Option.W_StandardCombobox_Option_C
class UW_StandardCombobox_Option_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Option_Button;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Option_Dn;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Option_Hi;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Option_Selected;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionText;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                OptionAsString;                                    // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  OptionAsText;                                      // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Selected;                                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_768[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardCombobox_New_C*             ParentComboBox;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DescriptionText;                                   // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        FontSize;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_76A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            OptionHoveredSound;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_StandardCombobox_Option_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Option_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Option_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Option_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Option_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Option_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_StandardCombobox_Option(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
};

}


