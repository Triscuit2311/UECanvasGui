#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C
class UW_PreMission_Tablet_PlayerNode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Dot;                                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Designation;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Designation;                                       // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSt_PreMissionPlayerNode              PlayerInfo;                                        // 0x2B0(0x30)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3715[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                AssignedPlayerState;                               // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_PlayerNode_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetupWidget(int32 NewParam, const struct FLinearColor& NewParam2);
	void ExecuteUbergraph_W_PreMission_Tablet_PlayerNode(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetPlanningPlayerNumber_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_CustomEvent_NewParam, const struct FLinearColor& K2Node_CustomEvent_NewParam2, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


