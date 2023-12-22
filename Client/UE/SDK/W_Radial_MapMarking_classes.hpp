#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D2 (0x432 - 0x260)
// WidgetBlueprintGeneratedClass W_Radial_MapMarking.W_Radial_MapMarking_C
class UW_Radial_MapMarking_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealSubMenu;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_BgFade;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     InnerRadial;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     OutterRadial;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RadialCanvas;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SB_Hotkey;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_2;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CategoryName;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Secondary;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  W_HotkeyBar_Entry;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FKey>                          BackKeys;                                          // 0x2C0(0x10)(Edit, BlueprintVisible)
	TArray<struct FKey>                          SubmitKeys;                                        // 0x2D0(0x10)(Edit, BlueprintVisible)
	class UUMG_RadialMenu_C*                     MainRadial;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     SubRadial;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         bCanGoBack;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SubmenuCommit;                                     // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cancel;                                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                            CategoriesDataTable;                               // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            MarkersDataTable;                                  // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBasicIconSettings                   IconStyle;                                         // 0x328(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IconSize;                                          // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MainRadialMaterial;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SubRadialMaterial;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     GoldTeamMaterial;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     RedTeamMaterial;                                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     BlueTeamMaterial;                                  // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSwatCommand                          CurrentSelectedCommand;                            // 0x380(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_RadialIcon_MapMarking_C*            CurrentCategory;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCollapsed;                                       // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SubmenuOpen;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSubmenuCollapse;                                 // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_RadialIcon_MapMarking_C*            CurrentMarker;                                     // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InnerRadius;                                       // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OuterRadius;                                       // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoverSelect;                                    // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RadialMenu_C*                     ActiveRadial;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsingGamepad;                                    // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGamepadHoveringSelection;                        // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Radial_MapMarking_C* GetDefaultObj();

	void InitGamepadSupport(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void HandleGamepad(class UUMG_RadialMenu_C* UMGRadial, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void SetGamepadInputDirection(class UUMG_RadialMenu_C* UMGRadial, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Update_Position(const struct FVector2D& Coordinates, const struct FVector2D& RawCoordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Finished_344D667B4B5F9FD05121C694FD14ED92();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void PopulateSubmenu();
	void AddCategory(const class FString& ID, class FText DisplayName, class UTexture2D* IconImage, bool HasSubCommands);
	void Populate();
	void Construct();
	void GoBack();
	void SelectionMade();
	void Submit();
	void CollapseRadial();
	void CollapseSubMenu();
	void OnPageViewUpdate_1();
	void OpenSubmenu();
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void InputChange(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_Radial_MapMarking(int32 EntryPoint, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue_1, class FName CallFunc_Array_Get_Item, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& K2Node_CustomEvent_ID, class FText K2Node_CustomEvent_DisplayName, class UTexture2D* K2Node_CustomEvent_IconImage, bool K2Node_CustomEvent_HasSubCommands, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_AddChildToRadialMenu_Success_1, const struct FSt_PreMissionMarkers& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUserWidget* CallFunc_GetChild_Output, bool CallFunc_GetChild_Success, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 K2Node_ComponentBoundEvent_NewSelection_1, int32 K2Node_ComponentBoundEvent_OldSelection_1, class UUserWidget* CallFunc_GetChild_Output_1, bool CallFunc_GetChild_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_ComponentBoundEvent_NewSelection, int32 K2Node_ComponentBoundEvent_OldSelection, class UUserWidget* CallFunc_GetChild_Output_2, bool CallFunc_GetChild_Success_2, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void OnSubmenuCollapse__DelegateSignature();
	void OnCollapsed__DelegateSignature();
	void Cancel__DelegateSignature();
	void SubmenuCommit__DelegateSignature(class FName Category, class FName MarkerName);
};

}


