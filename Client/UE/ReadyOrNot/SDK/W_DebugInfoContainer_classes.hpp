#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x400 - 0x260)
// WidgetBlueprintGeneratedClass W_DebugInfoContainer.W_DebugInfoContainer_C
class UW_DebugInfoContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BG_Blur;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BG_Image;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DebugInfo_Container;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title_Text;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        TitleFont;                                         // 0x288(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                               TitlePadding;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EHorizontalAlignment              TitleHorizontalAlignment;                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EVerticalAlignment                TitleVerticalAlignment;                            // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3A4F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        DebugNameFont;                                     // 0x2F8(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateFontInfo                        DebugValueFont;                                    // 0x350(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bEnableBackgroundEffects;                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3A50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x3B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FText>                          DebugItems;                                        // 0x3C8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<float>                                Spacing;                                           // 0x3D8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bUseUniformSpacing;                                // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3A51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultSpacing;                                    // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_DebugInfo_C*>                DebugInfoWidgets;                                  // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_DebugInfoContainer_C* GetDefaultObj();

	void GetTitle(class FText* Return_Value);
	void SetDebugItemValue(int32 Index, class FText DebugText, class UW_DebugInfo_C* CallFunc_Get_Debug_Item__Index__DebugInfoWidget, bool CallFunc_IsValid_ReturnValue);
	void AddDebugItems(int32 Num, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, float K2Node_Select_Default_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UW_DebugInfo_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddDebugItem(class FText Label, class FText Value, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_DebugInfo_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Clear();
	void Refresh(bool bCanClearSpacing, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class ESlateVisibility Temp_byte_Variable, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UW_DebugInfo_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, float Temp_float_Variable, bool Temp_bool_Variable_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_DebugInfo_C* CallFunc_Create_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_Add_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void GetNumDebugEntries(int32* Return_Value, int32 CallFunc_Array_Length_ReturnValue);
	void Get_Debug_Item__Name_(class FText Debug_Name, class UW_DebugInfo_C** DebugInfoWidget, int32 CallFunc_Array_Find_ReturnValue, class UW_DebugInfo_C* CallFunc_Array_Get_Item);
	void Get_Debug_Item__Index_(int32 Index, class UW_DebugInfo_C** DebugInfoWidget, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_DebugInfo_C* CallFunc_Array_Get_Item);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_DebugInfoContainer(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


