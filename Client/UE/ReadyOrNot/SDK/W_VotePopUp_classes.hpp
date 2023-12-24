#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass W_VotePopUp.W_VotePopUp_C
class UW_VotePopUp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_185;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        NoVote_Box;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NoVoteDivider_Box;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NoVoteScore_Text;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RootBox;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_4;                                       // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_7;                                       // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_9;                                       // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_11;                                      // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_169;                                     // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        VoteState;                                         // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Current_Vote_Reason;                               // 0x2C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VoteEnabled;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Yes_Votes;                                         // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        No_Votes;                                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vote_No_Enabled;                                   // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WidgetActive;                                      // 0x2ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentVoteQuestion;                               // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_VotePopUp_C* GetDefaultObj();

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
	void ExecuteUbergraph_W_VotePopUp(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, class FText K2Node_CustomEvent_VoteReason, class FText K2Node_CustomEvent_VoteQuestion, bool K2Node_CustomEvent_bCanVoteNo, enum class ESlateVisibility K2Node_Select_Default);
};

}


