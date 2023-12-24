#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x370 - 0x260)
// WidgetBlueprintGeneratedClass W_ControlsResetBinding.W_ControlsResetBinding_C
class UW_ControlsResetBinding_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Button_Disabled;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Dn;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Hi;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Up;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ResetButton;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  BindName;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnResetClicked;                                    // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetHovered;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetUnhovered;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetPressed;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetReleased;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAxis;                                             // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2FE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DescriptionText;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x2F8(0x18)(Edit, BlueprintVisible)
	TArray<class UW_ControlsBind_C*>             BindingButtons;                                    // 0x310(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UFMODEvent*                            ResetBindingClickedSound;                          // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                            ResetBindingHoveredSound;                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x330(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x340(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FAxisMappingStruct>            TempRemoveAxisMappings;                            // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionMappingStruct>          TempRemoveActionMappings;                          // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ControlsResetBinding_C* GetDefaultObj();

	void Remove_Key_Bind(class UW_ControlsBind_C* Control_Bind, class UW_ControlsBind_C* TempControlsBind, bool CallFunc_RemoveActionMapping_ReturnValue, bool CallFunc_RemoveAxisMapping_ReturnValue);
	void Update_Input_Mappings(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_RemoveActionMapping_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveAxisMapping_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Clear_Temp_Input_Mappings();
	void Check_if_None_Key_Is_Assigned_Action(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FActionMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Check_if_None_Key_Is_Assigned_Axis(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FAxisMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_ControlsResetBinding(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_ControlsBind_C* CallFunc_Array_Get_Item, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnResetReleased__DelegateSignature();
	void OnResetPressed__DelegateSignature();
	void OnResetUnhovered__DelegateSignature();
	void OnResetHovered__DelegateSignature();
	void OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget);
};

}


