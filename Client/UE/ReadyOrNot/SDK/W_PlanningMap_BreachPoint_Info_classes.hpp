#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x3A0 - 0x260)
// WidgetBlueprintGeneratedClass W_PlanningMap_BreachPoint_Info.W_PlanningMap_BreachPoint_Info_C
class UW_PlanningMap_BreachPoint_Info_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hide;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reveal;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               btn_Clickaway;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_SetSpawn;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Div_Formation_Bot;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Div_Formation_Top;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Equipment;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BreachPoint;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Equipment;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Formation;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RootCanvas;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Description;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Designation;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Formation;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Name;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSpawnPoints                          SpawnInfo;                                         // 0x2E0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSetSpawnButtonClicked;                           // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CurrentSpawn;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDetailPanelHide;                                 // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PlanningMap_BreachPoint_Info_C* GetDefaultObj();

	void SetRecommendedDeployables(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_PlanningMap_BreachPoint_Info_EquipmentEntry_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FLevelDeployableData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetDesignationText(int32 SpawnIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Finished_B45778B942FC16674AB7A3BD06E9C36E();
	void Finished_186E628046C415504DDD34A0079F53C5();
	void BndEvt__btn_ClickAway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_SelectPoint_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void SetActiveSpawn(const struct FSpawnPoints& SpawnInfo);
	void UpdateInfo(const struct FSpawnPoints& SpawnInfo, int32 SpawnIndex);
	void RevealPanel();
	void HidePanel();
	void ExecuteUbergraph_W_PlanningMap_BreachPoint_Info(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnimationPlaying_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FSpawnPoints& K2Node_CustomEvent_SpawnInfo_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSpawnPoints& K2Node_CustomEvent_SpawnInfo, int32 K2Node_CustomEvent_SpawnIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FBasicLevelStats& CallFunc_LoadLevelStats_OutStats, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess);
	void OnDetailPanelHide__DelegateSignature();
	void OnSetSpawnButtonClicked__DelegateSignature();
};

}


