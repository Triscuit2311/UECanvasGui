#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass W_Combobox_Menu.W_Combobox_Menu_C
class UW_Combobox_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          OptionContainer;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        OptionsAsStrings;                                  // 0x270(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FText>                          OptionsAsText;                                     // 0x280(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UW_StandardCombobox_New_C*             ParentComboBox;                                    // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionWidget;                                 // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FText>                          Descriptions;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        SelectedOption;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Font_Size;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Combobox_Menu_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_Combobox_Menu(int32 EntryPoint, class UW_StandardCombobox_Option_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Array_Get_Item_2);
};

}


