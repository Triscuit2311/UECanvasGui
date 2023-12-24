#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D4 - 0x260)
// WidgetBlueprintGeneratedClass W_Customization_InfoBox.W_Customization_InfoBox_C
class UW_Customization_InfoBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRefresh;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Slash;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Description;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_Requirement;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_InfoBox;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Category;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Group;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ItemName;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Variant;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bHidden;                                           // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECustomizationType                Category;                                          // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3528[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutCustomization*                 Item;                                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationType                PreviousCategory;                                  // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3529[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BoxSize;                                           // 0x2CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Customization_InfoBox_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void UpdateItemInfo(bool CallFunc_IsValid_ReturnValue, enum class ECustomizationType CallFunc_GetCustomizationType_ReturnValue);
	void UpdateCategoryText(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetCustomizationCategoryText_Category_Text, enum class E_CustomizationGroups CallFunc_GetCustomizationGroupByCategory_Group, bool CallFunc_TextIsNotEmpty_NotEmpty, class FText CallFunc_GetCustomizationGroupText_Text, enum class ESlateVisibility K2Node_Select_Default);
	void Finished_F7514D2B477173A304DF53996A3FB2E5();
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetItemInfo(class ULoadoutCustomization* Item);
	void SetCategoryInfo(enum class ECustomizationType Type);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void ExecuteUbergraph_W_Customization_InfoBox(int32 EntryPoint, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class ULoadoutCustomization* K2Node_CustomEvent_Item, enum class ECustomizationType K2Node_CustomEvent_Type, class FText CallFunc_MakeLiteralText_ReturnValue, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
};

}


