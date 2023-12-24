#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x399 - 0x320)
// WidgetBlueprintGeneratedClass W_CommanderProfileSelect.W_CommanderProfileSelect_C
class UW_CommanderProfileSelect_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_0;                                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             Profile_0;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             Profile_1;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             Profile_2;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           ReloadProfilesButton;                              // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SlotsHorizontalBox;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             CurrentHoveredCard;                                // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             CurrentUnhoveredCard;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewHover;                                          // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3548[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoverEffectSpeed;                                  // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverFillRatio;                                    // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3549[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_CommanderProfileCard_C*>     ProfileCards;                                      // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_CommanderProfileCard_C*             ProfileForDelete;                                  // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_CommanderProfileSelect_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void FillCardList(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void SetCurrentHoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void ResetCurrentUnhoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ProfileHoverStateChange(class UW_CommanderProfileCard_C* TriggeringProfileCard, bool Hovered);
	void PopulateProfiles();
	void Construct();
	void BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void OpenDeleteSaveConfirmation(class UW_CommanderProfileCard_C* TriggeringProfileCard);
	void DeleteSave(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void CancelDelete(class UStandardModal* CallingModal);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void ExecuteUbergraph_W_CommanderProfileSelect(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText Temp_text_Variable, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard_1, bool K2Node_CustomEvent_Hovered, int32 Temp_int_Array_Index_Variable, class UCommanderProfile* CallFunc_LoadProfile_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable_2, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry, class UStandardModal* K2Node_CustomEvent_CallingModal, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class FText Temp_text_Variable_3, const struct FVector2D& Temp_struct_Variable, TArray<class UW_CommanderProfileCard_C*>& K2Node_MakeArray_Array_1, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_CommanderProfileCard_C*>& K2Node_MakeArray_Array_2, int32 Temp_int_Loop_Counter_Variable_1, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


