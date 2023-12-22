#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass W_VotePopUp_gamepad.W_VotePopUp_gamepad_C
class UW_VotePopUp_gamepad_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   CommonActionWidget;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_46;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_185;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        NoVote_Box;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NoVoteDivider_Box;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RootBox;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VoteNoCount;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VoteQuestionText;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VoteResonText;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VoteYesCount;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        VoteState_0;                                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_403E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Current_Vote_Reason_0;                             // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VoteEnabled_0;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Yes_Votes_0;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        No_Votes_0;                                        // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vote_No_Enabled_0;                                 // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WidgetActive_0;                                    // 0x2ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4040[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentVoteQuestion_0;                             // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_VotePopUp_gamepad_C* GetDefaultObj();

	void UpdateVote(class FText CallFunc_GetNoVotes_ReturnValue, class FText CallFunc_GetYesVotes_ReturnValue, enum class ESlateVisibility CallFunc_GetVoteNo_Visibility_ReturnValue, class FText CallFunc_GetVoteQuestion_ReturnValue, class FText CallFunc_VoteReason_ReturnValue);
	enum class ESlateVisibility GetVoteNo_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanVoteNo_Return_Value, enum class ESlateVisibility K2Node_Select_Default);
	void CanVoteNo(bool* Return_Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetPlayersAvailableForVote_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class FText GetVoteNoKeyBinding(class FName CallFunc_MakeLiteralName_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText GetVoteYesKeyBinding(class FName CallFunc_MakeLiteralName_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, const class FString& CallFunc_ConvertUnrealKeyNameToRonKeyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText GetVoteQuestion();
	class FText GetText_4(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText GetNoVotes(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText GetYesVotes(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue);
	enum class ESlateVisibility GetVoteVisibility();
	bool GetbIsEnabled_0();
	class FText GetText_1(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	enum class ESlateVisibility VoteNo_Visibility_2();
	enum class ESlateVisibility VoteNo_Visibility_1();
	class FText VoteReason();
	void Construct();
	void StartVote(class FText VoteReason, class FText VoteQuestion, bool bCanVoteNo);
	void VoteEnd();
	void ExecuteUbergraph_W_VotePopUp_gamepad(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_CustomEvent_VoteReason, class FText K2Node_CustomEvent_VoteQuestion, bool K2Node_CustomEvent_bCanVoteNo, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess);
};

}


