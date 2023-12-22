#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10C (0x46C - 0x360)
// WidgetBlueprintGeneratedClass W_PageHeader_Carousel.W_PageHeader_Carousel_C
class UW_PageHeader_Carousel_C : public UCommonCarousel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimPrevPressed;                                   // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimNextPressed;                                   // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimSwitch;                                        // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Left;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Right;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Buttons;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   LeftActionWidget;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   RightActionWidget;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Left;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Right;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                SpacerTextStyle;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClickableNavigation;                               // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IconHeight;                                        // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightActionIconRatio;                              // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftActionIconRatio;                               // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ButtonStyle;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UW_Button_C*, class FName>        ButtonMap;                                         // 0x3E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_Button_C*                           ActiveButton;                                      // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               SpacerPadding;                                     // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                  DisabledOption;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NextTerminated;                                    // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PrevTerminated;                                    // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Next;                                              // 0x452(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Prev;                                              // 0x453(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                  LastSelectedOption;                                // 0x454(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingGamepad;                                      // 0x45C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SingleOption;                                      // 0x45D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgnoreGamepad;                                     // 0x45E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bInitialized;                                      // 0x45F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWaitingForButton;                                 // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QueuedButton;                                      // 0x464(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PageHeader_Carousel_C* GetDefaultObj();

	void SelectButton(class UW_Button_C* Button, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void GetInputIconVisibility(enum class ESlateVisibility* Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void CheckForNewOptions(TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, TArray<class FName>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void IgnoreDisabledOption(const TArray<class FName>& Keys, int32 NextIndex, int32 PreviousIndex, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_3);
	void GetButtonByOptionID(class FName OptionNameID, bool* ButtonFound, class UW_Button_C** Button, class UW_Button_C* FoundButton, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UW_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void PopulateButtons(int32 LastIndex, int32 CurrentIndex, class UW_Button_C* Button, class FName Option, bool FirstButton, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_Button_C* CallFunc_Create_ReturnValue, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue);
	void SetIconSize(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void GetActionIconSizeRatio(class UCommonActionWidget* CommonActionWidget, float* IconRatio, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void OptionSelected(class FName OptionNameID);
	void NavigateNextTerminated(bool Terminated);
	void NavigatePrevTerminated(bool Terminated);
	void NextNavigated(class FName OptionID);
	void PrevNavigated(class FName OptionID);
	void ButtonClicked(class UW_Button_C* Button);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void DisableOption(class FName OptionNameID);
	void EnableOption(class FName OptionNameID);
	void Destruct();
	void ExecuteUbergraph_W_PageHeader_Carousel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_GetActionIconSizeRatio_IconRatio, float CallFunc_GetActionIconSizeRatio_IconRatio_1, class FName K2Node_Event_OptionNameID, bool K2Node_Event_Terminated_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_Event_Terminated, class FName K2Node_CustomEvent_OptionID_1, bool Temp_bool_True_if_break_was_hit_Variable, class FName K2Node_CustomEvent_OptionID, bool CallFunc_Not_PreBool_ReturnValue, class UW_Button_C* K2Node_CustomEvent_Button, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, TArray<class UW_Button_C*>& CallFunc_Map_Keys_Keys, bool CallFunc_Not_PreBool_ReturnValue_2, class UW_Button_C* CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GetButtonByOptionID_ButtonFound, class UW_Button_C* CallFunc_GetButtonByOptionID_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_CustomEvent_OptionNameID_1, class FName K2Node_CustomEvent_OptionNameID, bool CallFunc_GetButtonByOptionID_ButtonFound_1, class UW_Button_C* CallFunc_GetButtonByOptionID_Button_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
};

}


