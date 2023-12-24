#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass W_TabScreen.W_TabScreen_C
class UW_TabScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              ObjectivesBox;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PlayerListBox_1;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*              W_Briefing_Objectives;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TabScreen_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_TabScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ETeamType Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class AReadyOrNotPlayerState*>& CallFunc_GetAllActorsOfClass_OutActors, class AReadyOrNotPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSquadLeader_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, enum class ETeamType K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_ScoreboardEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


