#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x149 (0x3D1 - 0x288)
// WidgetBlueprintGeneratedClass W_ButtonBar.W_ButtonBar_C
class UW_ButtonBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_FocusIntercept;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_null;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Options;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_null;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Empty;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             ButtonOptions;                                     // 0x2B8(0x50)(Edit, BlueprintVisible)
	class UClass*                                ButtonStyle;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ButtonPadding;                                     // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UW_Button_C*>      ButtonMap;                                         // 0x318(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                CurrentSelection;                                  // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_Button_C*                           CurrentActiveButton;                               // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOptionClicked;                                   // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Button_C*                           LastHovered;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                EquippedButtonStyle;                               // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGamepad;                                        // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Focus;                                             // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disabled;                                          // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ButtonBar_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void Disable(bool Disable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetOptionsMap(TMap<class FString, class FText> ButtonOptions);
	void InsertOptionAtIndex(int32 Index, const class FString& ButtonID, class FText ButtonText, TMap<class FString, class FText> RebuiltMap, const TArray<class FText>& ButtonValues, const TArray<class FString>& ButtonIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FText>& CallFunc_Map_Values_Values, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CreateButtonWidget(class FText& ButtonText, class UW_Button_C** NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void AddOption(const class FString& ID, class FText ButtonText, class UW_Button_C* NewButton, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UW_Button_C* CallFunc_CreateButtonWidget_NewButton);
	void SetOptions(TMap<class FString, class FText> ButtonOptions);
	bool GetHasOptions(TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetButtonID(class UW_Button_C*& ButtonToFind, class FString* ID, TArray<class UW_Button_C*>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void SetEquippedButtonByID(const class FString& ButtonID, class UW_Button_C* FoundButton, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_Button_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void RemoveButtonByID(const class FString& ID, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UW_Button_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void PopulateButtons(int32 CurrentIndex, int32 LastIndex, class UW_Button_C* NewButton, const class FString& NewID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Button_C* CallFunc_CreateButtonWidget_NewButton, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void OptionClicked(class UW_Button_C* Button);
	void OptionHovered(class UW_Button_C* Button);
	void OptionUnhovered();
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_W_ButtonBar(int32 EntryPoint, class UWidget* CallFunc_GetFocusTarget_Focus, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_CustomEvent_Button_1, const class FString& CallFunc_GetButtonID_ID, class UW_Button_C* K2Node_CustomEvent_Button, const class FString& CallFunc_GetButtonID_ID_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_GetHasOptions_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnOptionUnhovered__DelegateSignature();
	void OnOptionHovered__DelegateSignature(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
	void OnOptionClicked__DelegateSignature(const class FString& ButtonID, class UW_Button_C* TriggeringButton);
};

}


