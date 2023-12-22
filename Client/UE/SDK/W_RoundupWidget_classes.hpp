#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3C8 - 0x370)
// WidgetBlueprintGeneratedClass W_RoundupWidget.W_RoundupWidget_C
class UW_RoundupWidget_C : public URoundupWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RevealContent;                                     // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reveal;                                            // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          ContentBox;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RoundupActions;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RoundupActionsDivider;                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RoundUplocksDivider;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RoundupUnlocks;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Footer_C*                           W_Footer;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RoundupWidget_C* GetDefaultObj();

	void SetupSampleData(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TMap<int32, class FText> K2Node_MakeMap_Map, TMap<int32, class FText> K2Node_MakeMap_Map_1, int32 Temp_int_Variable_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void OnAnimationComplete();
	void PreConstruct(bool IsDesignTime);
	void AddRoundupUnlock(class FText& Unlock);
	void AddRoundupEntry(class FText Text, class UVerticalBox* VerticalBox);
	void AddRoundupAction(class FText& Action);
	void Construct();
	void HideRoundupUnlocks();
	void HideRoundupActions();
	void ToggleContent();
	void CollapseContent();
	void ExpandContent();
	void ShowWidget();
	void HideWidget();
	void BndEvt__W_RoundupWidget_W_Footer_K2Node_ComponentBoundEvent_0_OnDismissInputAction__DelegateSignature();
	void RefreshWidget();
	void ExecuteUbergraph_W_RoundupWidget(int32 EntryPoint, bool CallFunc_IsNewCommanderModeSave_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class FText K2Node_Event_Unlock, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_CustomEvent_Text, class UVerticalBox* K2Node_CustomEvent_VerticalBox, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Event_Action, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UW_RoundupWidgetEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class FText K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess);
};

}


