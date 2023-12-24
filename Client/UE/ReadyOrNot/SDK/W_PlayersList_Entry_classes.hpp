#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x448 - 0x260)
// WidgetBlueprintGeneratedClass W_PlayersList_Entry.W_PlayersList_Entry_C
class UW_PlayersList_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Avatar;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       BaseButton;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       KickButton;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       MuteButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MuteIcon;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Status;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_1;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLobbyPlayer                          Player;                                            // 0x2A8(0x58)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bFoundLobby;                                       // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_430C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               PlayerSession;                                     // 0x308(0x108)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StatusText;                                        // 0x410(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AReadyOrNotGameMode*>           Modes;                                             // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                PlayingMode;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PlayersList_C*                      PlayersList;                                       // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlayersList_Entry_C* GetDefaultObj();

	struct FSlateColor GetColorAndOpacity_0(const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Construct();
	void BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void RefreshPlayer(const struct FLobbyPlayer& Player);
	void BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_W_PlayersList_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsConsole_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FLobbyPlayer& K2Node_CustomEvent_Player, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class AReadyOrNotGameMode*>& CallFunc_GetAllGameModes_ReturnValue, const struct FBPUniqueNetId& CallFunc_CreateUniqueNetIdFromString_ReturnValue, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText_1, bool CallFunc_FindTextInLocalizationTable_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_UniqueNetIdToString_String, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId_1, const class FString& CallFunc_UniqueNetIdToString_String_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FBPUniqueNetId& CallFunc_CreateUniqueNetIdFromString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId_2, enum class EBlueprintResultSwitch CallFunc_ShowProfileUI_Result, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


