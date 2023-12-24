#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x299 - 0x260)
// WidgetBlueprintGeneratedClass W_AG_PlayerList.W_AG_PlayerList_C
class UW_AG_PlayerList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           Btn_Ban;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           Btn_Kick;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SteamId;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                PlayerState;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bHighlighted;                                      // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_AG_PlayerList_C* GetDefaultObj();

	class FText Get_Name_Text_0(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_TextBlock_0_Text_0(bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_Multiply_ByteByte_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue);
	class FText Get_Score_Text_0(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Damage_Text_0(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText GetDeathsText(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Arrests_Text_0(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Kills_Text_0(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	struct FSlateBrush GetBrush_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_AG_PlayerList_Btn_Ban_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_AG_PlayerList_Btn_Kick_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_AG_PlayerList(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, bool CallFunc_IsValidUniqueNetID_ReturnValue, const class FString& CallFunc_UniqueNetIdToString_String, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1);
};

}


