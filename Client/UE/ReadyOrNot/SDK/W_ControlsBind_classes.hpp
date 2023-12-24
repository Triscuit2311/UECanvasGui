#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x299 (0x5E9 - 0x350)
// WidgetBlueprintGeneratedClass W_ControlsBind.W_ControlsBind_C
class UW_ControlsBind_C : public UControlsBind
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Button_Disabled;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Dn;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Hi;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Up;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               KeybindButton;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionWidget_0;                               // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DescriptionText;                                   // 0x388(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ChangeBindFormat;                                  // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActionMappingStruct                  ActionMappingData_0;                               // 0x3B8(0x28)(Edit, BlueprintVisible)
	struct FAxisMappingStruct                    AxisMappingData_0;                                 // 0x3E0(0x28)(Edit, BlueprintVisible)
	bool                                         bIsAxis0;                                          // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_305B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BindIndex_0;                                       // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  UnboundText_0;                                     // 0x410(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                  Key;                                               // 0x428(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<enum class EKeyModifiers>             KeyModifiers;                                      // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBindingStarted;                                  // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBindingCanceled;                                 // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBindingCommitted;                                // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  BindName_0;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Mod_Shift;                                         // 0x4C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Mod_Ctrl;                                          // 0x4E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Mod_Alt;                                           // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Mod_Cmd;                                           // 0x510(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bListeningForKeystrokes0;                          // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_305E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BindFriendlyName_0;                                // 0x530(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            BindNotificationWidget_0;                          // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AxisScale_0;                                       // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     PairedKeybind;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            KeybindHoveredSoundEffect;                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                            KeybindStartBindingSoundEffect;                    // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnConflictingBindDetected;                         // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKey                                  PendingNewKey_0;                                   // 0x580(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EInputKeyCategory                 KeyCategory_0;                                     // 0x598(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3061[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SettingsMenu_C*                     SettingsMenu_0;                                    // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          ConflictBindFriendlyNamesList_0;                   // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FAxisMappingStruct>            ConflictingAxes;                                   // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionMappingStruct>          ConflictingActions;                                // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnUnbindableKeyReboundAttempted;                   // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsReadOnly;                                       // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_ControlsBind_C* GetDefaultObj();

	void Get_Conflicting_Keybind_Text_OLD(class FText RequiredKeybindName, class FText* Text, class FText ConflictingBindFormat);
	void Check_Conflicting_Keybinds_Are_Unbindable_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, class FText* BindFriendlyName, const struct FActionMappingStruct& TempActionBind, const struct FAxisMappingStruct& TempAxisBind);
	void Remove_Conflict_Keybinds_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, class UW_ControlsBind_C* TempActionToRemove, class UW_ControlsBind_C* TempAxisToRemove, const struct FActionMappingStruct& TempActionMapping, const struct FAxisMappingStruct& TempAxisMapping);
	void Add_Keybinds_to_List_OLD(TArray<struct FSKeybinding>& Keybinds, class FName AxisMapping, float Scale, TArray<struct FAxisMappingStruct>& AxesList, TArray<struct FActionMappingStruct>& ActionsList, float TempScale);
	void Add_Conflicting_Keybinds_to_List_OLD(class FName MappingName, float Scale, TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, float ControlsScale, class FName TempMappingName);
	struct FEventReply HandleMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, bool Temp_bool_Variable, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FKey& Temp_struct_Variable_1, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_Select_Default, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& K2Node_Select_Default_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Get_Conflicting_Keybinds_when_Valid_OLD(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, bool* bHasConflict, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<struct FActionMappingStruct>* ConflictingActions, const TArray<struct FActionMappingStruct>& OutputAction, const TArray<struct FAxisMappingStruct>& OutputAxes, const TArray<class FText>& LocalizedActions);
	struct FEventReply HandleKeyDown(const struct FGeometry& My_Geometry, const struct FKeyEvent& In_Key_Event, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_HandleKeyDown_ReturnValue);
	void GetOtherBindingIndex(int32* Value, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default);
	void HandleMouseButtonDown(const struct FPointerEvent& PointerEvent, struct FEventReply* Reply, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_HandleMouseWheel_ReturnValue);
	void SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Keybinding_Text_OLD();
	void Reset_Binding_OLD();
	void Binding_Finished_OLD();
	void Rebind_Key_OLD(const struct FKey& NewKey, bool* Key_Rebound, const struct FActionMappingStruct& NewActionMapping, const struct FAxisMappingStruct& NewAxisMapping);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_HandleMouseButtonDown_Reply);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_HandleKeyDown_ReturnValue);
	void Get_Input_Binding_Data_OLD(int32 Index, struct FActionMappingStruct* ActionMapping, struct FAxisMappingStruct* AxisMapping);
	void PreConstruct(bool IsDesignTime);
	void Key_Event_Received(const struct FKey& KeyIn);
	void Binding_Confirmed();
	void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void OnIllegalBindAttempted(class FText BindFriendlyName);
	void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UnbindAllEvents();
	void Construct();
	void ExecuteUbergraph_W_ControlsBind(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FKey& K2Node_CustomEvent_KeyIn, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array_1, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetConflictingKeybindsWhenValid_HasConflict, TArray<struct FAxisMappingStruct>& CallFunc_GetConflictingKeybindsWhenValid_ConflictingAxes, TArray<struct FActionMappingStruct>& CallFunc_GetConflictingKeybindsWhenValid_ConflictingActions, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_CheckConflictingKeybindsAreUnbindable_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class FText K2Node_CustomEvent_BindFriendlyName, class FText CallFunc_GetConflictingKeybindText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_RebindKey_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FAxisMappingStruct& CallFunc_GetInputBindingData_AxisMapping, const struct FActionMappingStruct& CallFunc_GetInputBindingData_ActionMapping, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct_1, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct_1);
	void OnUnbindableKeyReboundAttempted__DelegateSignature(class FText BindFriendlyName);
	void OnConflictingBindDetected__DelegateSignature(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>& ActionMappings, TArray<struct FAxisMappingStruct>& AxisMappings, const struct FKey& Key, TArray<class FText>& ConflictBindsText);
	void OnBindingCommitted__DelegateSignature(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey);
	void OnBindingCanceled__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
	void OnBindingStarted__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
	void OnReleased__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
	void OnPressed__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
	void OnUnhovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
	void OnHovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget);
};

}


